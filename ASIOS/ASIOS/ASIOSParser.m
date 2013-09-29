//
//  ASIOSParser.m
//  ASIOS
//
//  Created by  Nick Pershin on 9/29/13.
//  Copyright (c) 2013  Nick Pershin. All rights reserved.
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

static const BOOL LOG_VERBOSE 	= NO; // <<<<<<<<<<<<<<<<<<<<<<<<< ???

// The following constants are Wbxml standard
int const START_DOCUMENT 		= 0;
int const DONE 					= 1;
int const START 				= 2;
//int const END					= 3; // ??????????????????????????????????????????
int const TEXT					= 4;
int const END_DOCUMENT 			= 3;
static const int NOT_FETCHED 	= INT_MIN;
static const int NOT_ENDED 		= INT_MIN;
static const int EOF_BYTE 		= -1;


@implementation ASIOSParser

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
	    // TODO:
    }
    return self;
}

@end
