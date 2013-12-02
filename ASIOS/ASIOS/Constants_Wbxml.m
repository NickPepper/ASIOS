//
//  Constants_Wbxml.m
//  ASIOS
//
//  Created by  Nick Pershin on 9/29/13.
//  Copyright (c) 2013  Nick Pershin. All rights reserved.
//
//  Ported from The Android Open Source Project
//  Copyright (c) 2002,2003, Stefan Haustein, Oberhausen, Rhld., Germany
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


#import "Constants_Wbxml.h"

@implementation Constants_Wbxml

// WBXML Global Tokens
int const WBXML_SWITCH_PAGE	= 0x00;
int const WBXML_END 		= 0x01;
int const WBXML_ENTITY 		= 0x02;
int const WBXML_STR_I 		= 0x03;
int const WBXML_LITERAL 	= 0x04;
int const WBXML_EXT_I_0 	= 0x40;
int const WBXML_EXT_I_1 	= 0x41;
int const WBXML_EXT_I_2 	= 0x42;
int const WBXML_PI 			= 0x43;
int const WBXML_LITERAL_C 	= 0x44;
int const WBXML_EXT_T_0 	= 0x80;
int const WBXML_EXT_T_1 	= 0x81;
int const WBXML_EXT_T_2 	= 0x82;
int const WBXML_STR_T 		= 0x83;
int const WBXML_LITERAL_A 	= 0x84;
int const WBXML_EXT_0 		= 0xC0;
int const WBXML_EXT_1 		= 0xC1;
int const WBXML_EXT_2 		= 0xC2;
int const WBXML_OPAQUE 		= 0xC3;
int const WBXML_LITERAL_AC 	= 0xC4;

//int const WBXML_WITH_CONTENT = 0x40; // <<<<<<<<<<<<<<<<<<<<<<<<<< ???

int const WBXML_TOKEN_MASK	= 0x3F; // 6 bits

@end
