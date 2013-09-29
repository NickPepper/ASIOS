//
//  Constants_Wbxml.m
//  ASIOS
//
//  Created by  Nick Pershin on 9/29/13.
//  Copyright (c) 2013  Nick Pershin. All rights reserved.
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
