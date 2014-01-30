//
//  ASIOSProvisionParser.m
//  ASIOS
//
//  Created by Nick Pershin on 30/01/14.
//  Copyright (c) 2014  Nick Pershin. All rights reserved.
//
//  Ported from The Android Open Source Project
//  Copyright (C) 2010 The Android Open Source Project.
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

#import "ASIOSProvisionParser.h"

/**
 * Parse the result of the Provision command
 *
 * Assuming a successful parse, we store the PolicySet and the policy key
 */

@implementation ASIOSProvisionParser
{
    NSString * _mSecuritySyncKey;
    BOOL _mRemoteWipe;
    int _policyStatus;
}


- (id)init
{
    if(self = [super init])
    {
        _mSecuritySyncKey = nil;
        _mRemoteWipe = NO;
        _policyStatus = STATUS_NOT_SET;
    }
    return self;
}


- (BOOL)isRemoteWipeRequested {
    return _mRemoteWipe;
}


// TODO: а нужен ли нам в Об-С getter-setter?
- (NSString *)getSecuritySyncKey {
    return _mSecuritySyncKey;
}


// TODO: а нужен ли нам в Об-С getter-setter?
- (void)setSecuritySyncKey:(NSString * )securitySyncKey {
    _mSecuritySyncKey = securitySyncKey;
}

// TODO: а нужен ли нам в Об-С getter-setter?
- (int)getPolicyStatus {
    return _policyStatus;
}


//private
- (void)parsePolicy
{
    NSString * policyType = nil;
    while ([self nextTag:TAGS_PROVISION_POLICY] != END)
    {
        switch (self.tag)
        {
            case TAGS_PROVISION_POLICY_TYPE:
            {
                policyType = [self getValue];
                [self log:[NSString stringWithFormat:@"Policy type: %@", policyType]];
            }
                break;
                
            case TAGS_PROVISION_POLICY_KEY:
            {
                _mSecuritySyncKey = [self getValue];
            }
                break;
                
            case TAGS_PROVISION_STATUS:
            {
                _policyStatus = [self getValueInt];
                [self log:[NSString stringWithFormat:@"Policy status: %d", _policyStatus]];
            }
                break;
                
            default:
            {
                [self skipTag];
            }
                break;
        }
    }
}


//private
- (void)parsePolicies
{
    while ([self nextTag:TAGS_PROVISION_POLICIES] != END)
    {
        if (self.tag == TAGS_PROVISION_POLICY) {
            [self parsePolicy];
        } else {
            [self skipTag];
        }
    }
}


//@Override
- (BOOL)parse
{
    BOOL res = NO;
    if ([self nextTag:START_DOCUMENT] != TAGS_PROVISION_PROVISION) {
        // TODO: how?
        //throw new IOException();
    }
    
    while ([self nextTag:START_DOCUMENT] != END_DOCUMENT)
    {
        switch (self.tag)
        {
            case TAGS_PROVISION_STATUS:
            {
                self.status = [self getValueInt];
                [self log:[NSString stringWithFormat:@"Provision status: %d", self.status]];
                res = (self.status == STATUS_OK);
            }
                break;
            
            case TAGS_PROVISION_POLICIES:
            {
                [self parsePolicies];
            }
                break;
                
            case TAGS_PROVISION_REMOTE_WIPE:
            {
                // Indicate remote wipe command received
                _mRemoteWipe = YES;
            }
                break;
                
            default:
                [self skipTag];
                break;
        }
    }

    return res;
}

@end
