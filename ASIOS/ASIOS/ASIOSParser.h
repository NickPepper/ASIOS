//
//  ASIOSParser.h
//  ASIOS
//
//  Created by Nick Pershin on 9/29/13.
//  Copyright (c) 2013 Nick Pershin. All rights reserved.
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

#import <Foundation/Foundation.h>

@interface ASIOSParser : NSObject

extern int const START_DOCUMENT;
extern int const DONE;
extern int const START;
extern int const END;
extern int const TEXT;
extern int const END_DOCUMENT;


extern int const STATUS_NOT_SET;
extern int const STATUS_OK;
extern int const STATUS_NO_POLICY_NEEDED;
extern int const STATUS_NOT_FULLY_PROVISIONABLE;
extern int const STATUS_REMOTE_WIPE_REQUESTED;
extern int const STATUS_LEGACY_DEVICE_ON_STRICT_POLICY;
extern int const STATUS_DEVICE_NOT_PROVISIONED;
extern int const STATUS_POLICY_REFRESH;
extern int const STATUS_INVALID_POLICY_KEY;
extern int const STATUS_EXTERNALLY_MANAGED_DEVICES_NOT_ALLOWED;
extern int const STATUS_TOO_MANY_DEVICES;

@property (strong, nonatomic) NSArray *pages;

// Singleton
+ (id)sharedInstance;

- (id)init;

@end
