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


// TODO: try catch в objc лучше избегать (!!!)

@implementation ASIOSParser
{
    BOOL _logging;
    BOOL _capture;
    
    NSString *_logTag;
    
    // where tags start in a page
    int _TAG_BASE;
    
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
    NSMutableArray *_nameArray; //uint8_t _nameArray[32];
    
    // the stack of tags being processed
    NSMutableArray *_startTagArray; //uint8_t _startTagArray[32];

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
        
        _TAG_BASE = 5;
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
        
        _nameArray      = [[NSMutableArray alloc] initWithObjects:nil count:32];//String[]
        _startTagArray  = [[NSMutableArray alloc] initWithObjects:nil count:32];//int[]
        
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


/**
 * Return the value of the current tag (NSString).  
 * Note that the result of this call is indeterminate, and possibly nil,
 * if the value of the tag is not an immediate string.
 *
 * @return the NSString value of the current tag.
 */
- (NSString *)getValue
{
    // The false argument tells getNext to return the value as a String
    [self getNext:NO];
    
    // This means there was no value given, just <Foo/>; we'll return empty string for now
    if (self.type == END)
    {
        if (_logging) {
            NSLog(@"No value for tag: %@", _tagTable[self.startTag - _TAG_BASE]);
        }
        return @"";
    }
    
    // Save the value
    NSString * val = self.text;
    
    // Read the next token; it had better be the end of the current tag
    [self getNext:NO];
    
    // If not, throw an exception
    if (self.type != END) {
        NSLog(@"ERROR :: ASIOSParser.m :: getValue: No END found!");
    }
    
    return val;
}


/**
 * Return the value of the current tag, as an integer.
 * Note that the value of this call is indeterminate if the value of this tag 
 * is not an immediate string parsed as an integer.
 *
 * @return the integer value of the current tag.
 */
- (int)getValueInt
{
    // The true argument to getNext indicates the desire for an integer return value
    [self getNext:YES];
    if (self.type == END) {
        return 0;
    }
    
    // Save the value
    int val = self.num;
    
    // Read the next token; it had better be the end of the current tag
    [self getNext:NO];
    
    // If not, throw an exception
    if (self.type != END) {
        NSLog(@"ERROR :: ASIOSParser.m :: getValueInt: No END found!");
    }
    
    return val;
}



/**
 * Return the next tag found in the stream; special tags END and END_DOCUMENT are used to
 * mark the end of the current tag and end of document.  If we hit end of document without
 * looking for it, generate an EodException.  The tag returned consists of the page number
 * shifted PAGE_SHIFT bits OR'd with the tag retrieved from the stream.
 * Thus, all tags returned are unique.
 *
 * @param endingTag the tag that would represent the end of the tag we're processing
 * @return the next tag found
 */
- (int)nextTag:(int)endingTag
{
    // TODO: refactor - fuck FOUR return statements within one method?
    
    // Lose the page information
    self.endTag = endingTag &= WBXML_TOKEN_MASK;
    
    while ([self getNext:NO] != DONE)
    {
        // If we're a start, set tag to include the page and return it
        if (self.type == START)
        {
            self.tag = self.page | self.startTag;
            return self.tag;
        }
        // If we're at the ending tag we're looking for, return the END signal
        else if (self.type == END && self.startTag == self.endTag) {
            return END;
        }
    }
    
    // We're at end of document here.  If we're looking for it, return END_DOCUMENT
    if (self.endTag == START_DOCUMENT) {
        return END_DOCUMENT;
    }

    // Otherwise, we've prematurely hit end of document, so exception out
    // this will be treated as an IO error by ExchangeService
    NSLog(@"EXCEPTION :: ASIOSParser.m :: nextTag: End of Document Exception!");
    return EOF_BYTE;
}


/**
 * Skip anything found in the stream until the end of the current tag is reached.  This can be
 * used to ignore stretches of xml that aren't needed by the parser.
 */
- (void)skipTag
{
    int thisTag = self.startTag;
    // Just loop until we hit the end of the current tag
    while ([self getNext:NO] != DONE) {
        if (self.type == END && self.startTag == thisTag) {
            return;
        }
    }

    // If we're at end of document, that's bad
    //throw new EofException();
    NSLog(@"EXCEPTION :: ASIOSParser.m :: skipTag: End of Document Exception!");
}


/**
 * Retrieve the next token from the input stream
 *
 * @return the token found
 */
- (int)nextToken
{
    [self getNext:NO];
    return self.type;
}


/**
 * Initializes the parser with an input stream; 
 * reads the first 4 bytes (which are always the same in EAS, 
 * and then sets the tag table to point to page 0 (by definition, the starting page).
 *
 * @param in the InputStream associated with this parser
 */
- (void)setInput:(NSInputStream *)in initialize:(BOOL)initialize
{
    //this.in = in;
    if ((in != nil) && initialize)
    {
        // If we fail on the very first byte, report an empty stream
        @try {
            [self readByte];// version
        }
        @catch (NSException * exc) {
            //throw new EmptyStreamException();
            NSLog(@"(setInput) :: Exception caught: %@", exc);
        }
        [self readInt];// ?
        [self readInt];// 106 (UTF-8)
        [self readInt];// string table length
    }
    _tagTable = _tagTables[0];
}


- (void)resetInput:(NSInputStream *)in
{
    //this.in = in;
    @try {
        // Read leading zero
        [self read];
    }
    @catch (NSException * exc) {
        NSLog(@"(resetInput) :: Exception caught: %@", exc);
    }
}


- (void)log:(NSString *)str
{
    NSArray *strar = [str componentsSeparatedByString:@"\n"];
    str = strar[0];
    
    NSLog(@"DEBUG log: %@", str);
}


// protected
- (void)pushTag:(int)id
{
    self.page = id >> TAGS_PAGESHIFT;
    _tagTable = _tagTables[self.page];
    [self push:id];
}


// private
- (void)pop
{
    if (_logging)
    {
        self.name = _nameArray[_depth];
        [self log:[NSString stringWithFormat:@"</%@>", self.name]];
    }
    
    // Retrieve the now-current startTag from our stack
    self.startTag = self.endTag = (int)_startTagArray[_depth];
    _depth--;
}


// private
- (void)push:(int)id
{
    // The tag is in the low 6 bits
    self.startTag = id & 0x3F;
    
    // If the high bit is set, there is content (a value) to be read
    self.noContent = (id & 0x40) == 0;
    _depth++;
    if (_logging)
    {
        self.name = _tagTable[self.startTag - _TAG_BASE];
        _nameArray[_depth] = self.name;
        [self log:[NSString stringWithFormat:@"<%@%s>", self.name, (self.noContent ? "/" : "")]];
    }
    
    // Save the startTag to our stack
    _startTagArray[_depth] = self.startTag;
}



/**
 * Return the next piece of data from the stream.  The return value indicates the type of data
 * that has been retrieved - START (start of tag), END (end of tag), DONE (end of stream), or
 * TEXT (the value of a tag)
 *
 * @param asInt whether a TEXT value should be parsed as a String or an int.
 * @return the type of data retrieved
 */
// TODO: private final - how?
- (int)getNext:(BOOL)asInt
{
    if (self.noContent)
    {
        _nameArray[_depth--] = nil;
        self.type = END;
        self.noContent = NO;
        return self.type;
    }
    
    self.text = nil;
    self.name = nil;
    
    int id = [self nextId];
    while (id == WBXML_SWITCH_PAGE)
    {
        _nextId = NOT_FETCHED;
        
        // Get the new page number
        int pg = [self readByte];
        
        // Save the shifted page to add into the startTag in nextTag
        self.page = pg << TAGS_PAGESHIFT;
        if (LOG_VERBOSE) {
            [self log:[NSString stringWithFormat:@"Page: %d", self.page]];
        }
        
        // Retrieve the current tag table
        _tagTable = _tagTables[pg];
        id = [self nextId];
    }
    
    _nextId = NOT_FETCHED;
    
    switch(id)
    {
        case EOF_BYTE:
        {
            // End of document
            self.type = DONE;
        }
            break;
            
        case WBXML_END:
        {
            self.type = END;
            [self pop];
        }
            break;
            
        case WBXML_STR_I:
        {
            // Inline string
            self.type = TEXT;
            if (asInt) {
                self.num = [self readInlineInt];
            } else {
                self.text = [self readInlineString];
            }
            if (_logging) {
                self.name = _tagTable[self.startTag - _TAG_BASE];
                [self log:[NSString stringWithFormat:@"%@: %@", self.name, (asInt ? self.num : self.text)]];
            }
        }
            break;
            
        case WBXML_OPAQUE:
        {
            // Integer length + opaque data
            int length = [self readInt];
///////////////////////////////////////////////////////////////////////////////////////
            // @property (strong, nonatomic) NSMutableArray *bytes;//byte[]
            // TODO: how?
            self.bytes = new byte[length];
///////////////////////////////////////////////////////////////////////////////////////
            for (int i = 0; i < length; i++) {
                self.bytes[i] = (Byte)[self readByte];//TODO: надо ли тут приведение к байту?
            }
            if (_logging) {
                self.name = _tagTable[self.startTag - _TAG_BASE];
                [self log:[NSString stringWithFormat:@"%@: (opaque:%d) ", self.name, length]];
            }
        }
            break;
            
        default:
        {
            self.type = START;
            [self push:id];
        }
            break;
    }
    
    // Return the type of data we're dealing with
    return self.type;
}


/**
 * Read an int from the input stream, and capture it if necessary for debugging.  Seems a small
 * price to pay...
 *
 * @return the int read
 */
- (int)read
{
    int i;
    i = in.read();// TODO: how?
    if (_capture) {
        _captureArray.add(i);// TODO: how (NSMutableArray) ?
    }
    if (LOG_VERBOSE) {
        [self log:[NSString stringWithFormat:@"Byte: %d", i]];
    }
    return i;
}


- (int)nextId
{
    if (_nextId == NOT_FETCHED) {
        _nextId = [self read];
    }
    return _nextId;
}


- (int)readByte
{
    int i = [self read];
    if (i == EOF_BYTE) {
        //throw new EofException();//TODO: how?
    }
    return i;
}


/**
 * Read an integer from the stream; this is called when the parser knows that what follows is
 * an inline string representing an integer (e.g. the Read tag in Email has a value known to
 * be either "0" or "1")
 *
 * @return the integer as parsed from the stream
 */
- (int)readInlineInt
{
    int result = 0;
    
    while (YES) {
        int i = [self readByte];
        // Inline strings are always terminated with a zero byte
        if (i == 0) {
            return result;
        }
        if (i >= '0' && i <= '9') {
            result = (result * 10) + (i - '0');
        } else {
            throw new IOException("Non integer");//TODO: how? // return NSError
        }
    }
}


- (int)readInt
{
    int result = 0;
    int i;

    do {
        i = [self readByte];
        result = (result << 7) | (i & 0x7f);
    } while ((i & 0x80) != 0);
    
    return result;
}


/**
 * Read an inline string from the stream
 *
 * @return the String as parsed from the stream
 */
- (NSString *)readInlineString
{
    // TODO: how?
    /*
    ByteArrayOutputStream outputStream = new ByteArrayOutputStream(256);
    while (true) {
        int i = read();
        if (i == 0) {
            break;
        } else if (i == EOF_BYTE) {
            throw new EofException();
        }
        outputStream.write(i);
    }
    outputStream.flush();
    NSString * res = outputStream.toString("UTF-8");
    outputStream.close();
    return res;
    */
}

@end
