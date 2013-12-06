//
//  ASIOSParser.m
//  ASIOS
//
//  Created by  Nick Pershin on 9/29/13.
//  Copyright (c) 2013  Nick Pershin. All rights reserved.
//
//  Ported from The Android Open Source Project
//  Copyright (C) 2008-2009 Marc Blank
//
// 	Licensed under the Apache License, Version 2.0 (the "License");
// 	you may not use this file except in compliance with the License.
// 	You may obtain a copy of the License at
//
//	http://www.apache.org/licenses/LICENSE-2.0
//
//	Unless required by applicable law or agreed to in writing, software
//	distributed under the License is distributed on an "AS IS" BASIS,
//	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//	See the License for the specific language governing permissions and
//	limitations under the License.
//


/**
 * Extremely fast and lightweight WBXML parser, 
 * implementing only the subset of WBXML that EAS uses (as defined in the EAS specification)
 */

#import "ASIOSParser.h"
#import "Constants.h"
#import "Constants_Wbxml.h"
#import "Constants_Tags.h"


static const BOOL LOG_VERBOSE 	= NO;

// The following constants are Wbxml standard
int const START_DOCUMENT 		= 0;
int const DONE 					= 1;
int const START 				= 2;
int const END					= 3;
int const TEXT					= 4;
int const END_DOCUMENT 			= 3;
static const int NOT_FETCHED 	= INT_MIN;
static const int NOT_ENDED 		= INT_MIN;
static const int EOF_BYTE 		= -1;


// Status according to http://blogs.msdn.com/b/exchangedev/archive/2011/08/19/provisioning-policies-remote-wipe-and-abq-in-exchange-activesync.aspx
// In Exchange versions 12.1 and earlier, these were all summarized in the server sending a HTTP 449
// Versions later than 12.1 support a more fine tuned mechanism for provisioning status
// 142-144 are transient errors that should go away by (re)provisioning. the others are
// non-transient, they need config change on server to disappear.
int const STATUS_NOT_SET                                  = -1;
int const STATUS_OK                                       = 1;
int const STATUS_NO_POLICY_NEEDED                         = 2;
int const STATUS_NOT_FULLY_PROVISIONABLE                  = 139;
int const STATUS_REMOTE_WIPE_REQUESTED                    = 140;
int const STATUS_LEGACY_DEVICE_ON_STRICT_POLICY           = 141;
int const STATUS_DEVICE_NOT_PROVISIONED                   = 142;
int const STATUS_POLICY_REFRESH                           = 143;
int const STATUS_INVALID_POLICY_KEY                       = 144;
int const STATUS_EXTERNALLY_MANAGED_DEVICES_NOT_ALLOWED   = 145;
int const STATUS_TOO_MANY_DEVICES                         = 177;


@implementation ASIOSParser
{
    BOOL _logging;
    BOOL _capture;
    
    NSString *_logTag;
    
    // where tags start in a page
    int TAG_BASE;
    
    NSMutableArray *_captureArray;
    
    // the input stream for this parser
    NSInputStream *_iStream;
    // the output stream for this parser
    NSOutputStream *_oStream;
    
    // the current tag depth
    int _depth;
    
    // the upcoming (saved) id from the stream
    int _nextId;
    
    // the current tag table (i.e. the tag table for the current page)
    NSMutableArray *_tagTable;
    
    // an array of tag tables, as defined in EasTags
    NSMutableArray *_tagTables;
    
    // the stack of names of tags being processed; used when debug = true
    NSArray *_nameArray; //uint8_t _nameArray[32];
    
    // the stack of tags being processed
    NSArray *_startTagArray; //uint8_t _startTagArray[32];

    // the status of the last stream parsed
    @protected int status;
}


+ (id)sharedInstance
{
    static dispatch_once_t pred = 0;
    __strong static id _sharedObject = nil;
    dispatch_once(&pred, ^{
        _sharedObject = [[self alloc] init];
    });
    return _sharedObject;
}


- (id)init
{
    if(self = [super init])
    {
	    _logging = NO;
        _capture = NO;
        
        TAG_BASE = 5;
        _nextId  = NOT_FETCHED;

        // This array of string arrays is used only for generating logging output
        self.pages = @[
                       [NSArray arrayWithObjects:AIR_SYNC, nil],
                       [NSArray arrayWithObjects:CONTACTS, nil],
                       [NSArray arrayWithObjects:EMAIL, nil],
                       [NSArray arrayWithObjects:AIR_NOTIFY, nil],          // empty!
                       [NSArray arrayWithObjects:CALENDAR, nil],
                       [NSArray arrayWithObjects:MOVE, nil],
                       [NSArray arrayWithObjects:ITEM_ESTIMATE, nil],
                       [NSArray arrayWithObjects:FOLDER_HIERARCHY, nil],
                       [NSArray arrayWithObjects:MEETING_RESPONSE, nil],
                       [NSArray arrayWithObjects:TASKS, nil],
                       [NSArray arrayWithObjects:RESOLVE_RECIPIENTS, nil],  // empty!
                       [NSArray arrayWithObjects:VALIDATE_CERT, nil],       // empty!
                       [NSArray arrayWithObjects:CONTACTS_2, nil],
                       [NSArray arrayWithObjects:PING, nil],
                       [NSArray arrayWithObjects:PROVISION, nil],
                       [NSArray arrayWithObjects:SEARCH, nil],
                       [NSArray arrayWithObjects:GAL, nil],
                       [NSArray arrayWithObjects:AIR_SYNC_BASE, nil],
                       [NSArray arrayWithObjects:SETTINGS, nil],
                       [NSArray arrayWithObjects:DOCUMENT_LIBRARY, nil],    //empty!
                       [NSArray arrayWithObjects:ITEM_OPERATIONS, nil],
                       [NSArray arrayWithObjects:COMPOSE_MAIL, nil],
                       [NSArray arrayWithObjects:EMAIL_2, nil],
                       [NSArray arrayWithObjects:NOTES, nil],               // empty!
                       [NSArray arrayWithObjects:RIGHTS_MANAGEMENT, nil]
                       ];
        
        //_tagTables = new String[self.pages.count + 1][];
        _tagTables = [[NSMutableArray alloc] init];
        
        _nameArray      = [[NSArray alloc] initWithObjects:nil count:32];//String[]
        _startTagArray  = [[NSArray alloc] initWithObjects:nil count:32];//int[]
        
        self.endTag = NOT_ENDED;
        status = STATUS_NOT_SET;

    }
    return self;
}


- (int)status {
    return status;
}

// must be overriden in children
- (BOOL)parse {
    return NO;
}

/**
 * Set the debug state of the parser.  When debugging is on, every token is logged to the console.
 *
 * @param val the desired state for debug output
 */
- (void)setDebug:(BOOL)val {
    _logging = val;
}

/**
 * Set the tag used for logging.  When debugging is on, every token is logged to the console.
 *
 * @param val the logging tag
 */
- (void)setLoggingTag:(NSString *)val {
    _logTag = val;
}

/**
 * Turns on data capture; this is used to create test streams that represent "live" data and
 * can be used against the various parsers.
 */
- (void)captureOn {
    _capture = true;
    _captureArray = [NSMutableArray new];// array of Integers
}

/**
 * Turns off data capture; writes the captured data to a specified file.
 */
/*
Cup * cup = [[Cup alloc] init];

@try
{
    [cup fill];
}
@catch ( NSException * exc )
{
    NSLog ( @"Exception caught: %@", exc );
}
@catch ( id exc )
{
    NSLog ( @"Unknown exception caught" );
}
@finally
{
    [cup release];
}
 */

/*
- (void)setUpStreamForFile:(NSString *)path {
    
    NSLog(@"Creating and opening NSOutputStream...");
 
    _iStream = [[NSInputStream alloc] initWithFileAtPath:path];
    
    [_iStream setDelegate:self];
    
    [_iStream scheduleInRunLoop:[NSRunLoop currentRunLoop] forMode:NSDefaultRunLoopMode];
    
    [_iStream open];
    
}
- (void)createOutputStream {
    
    NSLog(@"Creating and opening NSOutputStream...");
    
    // oStream is an instance variable
    
    oStream = [[NSOutputStream alloc] initToMemory];
    
    [oStream setDelegate:self];
    
    [oStream scheduleInRunLoop:[NSRunLoop currentRunLoop] forMode:NSDefaultRunLoopMode];
    
    [oStream open];
    
}
*/
- (void)captureOff:(NSString *)path
{
    @try
    {
        NSLog(@"Creating and opening NSOutputStream...");
        
        _oStream = [[NSOutputStream alloc] initToFileAtPath:path append:YES];
        [_oStream setDelegate:self];
        [_oStream scheduleInRunLoop:[NSRunLoop currentRunLoop] forMode:NSDefaultRunLoopMode];
        [_oStream open];
        
        //FileOutputStream out = new FileOutputStream(path);
        //out.write(captureArray.toString().getBytes());
        //out.close();
        
        [_oStream close];
    }
//    @catch (FileNotFoundException e)
//    {
//        // This is debug code; exceptions aren't interesting.
//    }
    @catch (NSException * exc)
    {
        // TODO: remove after debug; exceptions aren't interesting.
        NSLog(@"(captureOff) :: Exception caught: %@", exc);
    }
    @catch (id exc)
    {
        // TODO: remove after debug; exceptions aren't interesting.
        NSLog(@"(captureOff) :: Exception caught: %@", exc);
    }
}

@end
