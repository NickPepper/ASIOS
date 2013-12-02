//
//  Constants_Tags.h
//  ASIOS
//
//  Created by  Nick Pershin on 9/30/13.
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


#import <Foundation/Foundation.h>

@interface Constants_Tags : NSObject

// Wbxml page definitions for EAS
extern int const TAGS_AIRSYNC;
extern int const TAGS_CONTACTS;
extern int const TAGS_EMAIL;
extern int const TAGS_CALENDAR;
extern int const TAGS_MOVE;
extern int const TAGS_GIE;
extern int const TAGS_FOLDER;
extern int const TAGS_MREQ;
extern int const TAGS_TASK;
extern int const TAGS_CONTACTS2;
extern int const TAGS_PING;
extern int const TAGS_PROVISION;
extern int const TAGS_SEARCH;
extern int const TAGS_GAL;
extern int const TAGS_BASE;
extern int const TAGS_SETTINGS;
extern int const TAGS_DOCS;
extern int const TAGS_ITEMS;
// 14.0
extern int const TAGS_COMPOSE;
extern int const TAGS_EMAIL2;
// 14.1
extern int const TAGS_NOTES;
extern int const TAGS_RIGHTS;

// Shift applied to page numbers to generate tag
extern int const TAGS_PAGESHIFT;


extern int const TAGS_SYNC_PAGE;
extern int const TAGS_SYNC_SYNC;
extern int const TAGS_SYNC_RESPONSES;
extern int const TAGS_SYNC_ADD;
extern int const TAGS_SYNC_CHANGE;
extern int const TAGS_SYNC_DELETE;
extern int const TAGS_SYNC_FETCH;
extern int const TAGS_SYNC_SYNC_KEY;
extern int const TAGS_SYNC_CLIENT_ID;
extern int const TAGS_SYNC_SERVER_ID;
extern int const TAGS_SYNC_STATUS;
extern int const TAGS_SYNC_COLLECTION;
extern int const TAGS_SYNC_CLASS;
extern int const TAGS_SYNC_VERSION;
extern int const TAGS_SYNC_COLLECTION_ID;
extern int const TAGS_SYNC_GET_CHANGES;
extern int const TAGS_SYNC_MORE_AVAILABLE;
extern int const TAGS_SYNC_WINDOW_SIZE;
extern int const TAGS_SYNC_COMMANDS;
extern int const TAGS_SYNC_OPTIONS;
extern int const TAGS_SYNC_FILTER_TYPE;
extern int const TAGS_SYNC_TRUNCATION;
extern int const TAGS_SYNC_RTF_TRUNCATION;
extern int const TAGS_SYNC_CONFLICT;
extern int const TAGS_SYNC_COLLECTIONS;
extern int const TAGS_SYNC_APPLICATION_DATA;
extern int const TAGS_SYNC_DELETES_AS_MOVES;
extern int const TAGS_SYNC_NOTIFY_GUID;
extern int const TAGS_SYNC_SUPPORTED;
extern int const TAGS_SYNC_SOFT_DELETE;
extern int const TAGS_SYNC_MIME_SUPPORT;
extern int const TAGS_SYNC_MIME_TRUNCATION;
extern int const TAGS_SYNC_WAIT;
extern int const TAGS_SYNC_LIMIT;
extern int const TAGS_SYNC_PARTIAL;


extern int const TAGS_GIE_PAGE;
extern int const TAGS_GIE_GET_ITEM_ESTIMATE;
extern int const TAGS_GIE_VERSION;
extern int const TAGS_GIE_COLLECTIONS;
extern int const TAGS_GIE_COLLECTION;
extern int const TAGS_GIE_CLASS;
extern int const TAGS_GIE_COLLECTION_ID;
extern int const TAGS_GIE_DATE_TIME;
extern int const TAGS_GIE_ESTIMATE;
extern int const TAGS_GIE_RESPONSE;
extern int const TAGS_GIE_STATUS;


extern int const TAGS_CONTACTS_PAGE;
extern int const TAGS_CONTACTS_ANNIVERSARY;
extern int const TAGS_CONTACTS_ASSISTANT_NAME;
extern int const TAGS_CONTACTS_ASSISTANT_TELEPHONE_NUMBER;
extern int const TAGS_CONTACTS_BIRTHDAY;
extern int const TAGS_CONTACTS_BODY;
extern int const TAGS_CONTACTS_BODY_SIZE;
extern int const TAGS_CONTACTS_BODY_TRUNCATED;
extern int const TAGS_CONTACTS_BUSINESS2_TELEPHONE_NUMBER;
extern int const TAGS_CONTACTS_BUSINESS_ADDRESS_CITY;
extern int const TAGS_CONTACTS_BUSINESS_ADDRESS_COUNTRY;
extern int const TAGS_CONTACTS_BUSINESS_ADDRESS_POSTAL_CODE;
extern int const TAGS_CONTACTS_BUSINESS_ADDRESS_STATE;
extern int const TAGS_CONTACTS_BUSINESS_ADDRESS_STREET;
extern int const TAGS_CONTACTS_BUSINESS_FAX_NUMBER;
extern int const TAGS_CONTACTS_BUSINESS_TELEPHONE_NUMBER;
extern int const TAGS_CONTACTS_CAR_TELEPHONE_NUMBER;
extern int const TAGS_CONTACTS_CATEGORIES;
extern int const TAGS_CONTACTS_CATEGORY;
extern int const TAGS_CONTACTS_CHILDREN;
extern int const TAGS_CONTACTS_CHILD;
extern int const TAGS_CONTACTS_COMPANY_NAME;
extern int const TAGS_CONTACTS_DEPARTMENT;
extern int const TAGS_CONTACTS_EMAIL1_ADDRESS;
extern int const TAGS_CONTACTS_EMAIL2_ADDRESS;
extern int const TAGS_CONTACTS_EMAIL3_ADDRESS;
extern int const TAGS_CONTACTS_FILE_AS;
extern int const TAGS_CONTACTS_FIRST_NAME;
extern int const TAGS_CONTACTS_HOME2_TELEPHONE_NUMBER;
extern int const TAGS_CONTACTS_HOME_ADDRESS_CITY;
extern int const TAGS_CONTACTS_HOME_ADDRESS_COUNTRY;
extern int const TAGS_CONTACTS_HOME_ADDRESS_POSTAL_CODE;
extern int const TAGS_CONTACTS_HOME_ADDRESS_STATE;
extern int const TAGS_CONTACTS_HOME_ADDRESS_STREET;
extern int const TAGS_CONTACTS_HOME_FAX_NUMBER;
extern int const TAGS_CONTACTS_HOME_TELEPHONE_NUMBER;
extern int const TAGS_CONTACTS_JOB_TITLE;
extern int const TAGS_CONTACTS_LAST_NAME;
extern int const TAGS_CONTACTS_MIDDLE_NAME;
extern int const TAGS_CONTACTS_MOBILE_TELEPHONE_NUMBER;
extern int const TAGS_CONTACTS_OFFICE_LOCATION;
extern int const TAGS_CONTACTS_OTHER_ADDRESS_CITY;
extern int const TAGS_CONTACTS_OTHER_ADDRESS_COUNTRY;
extern int const TAGS_CONTACTS_OTHER_ADDRESS_POSTAL_CODE;
extern int const TAGS_CONTACTS_OTHER_ADDRESS_STATE;
extern int const TAGS_CONTACTS_OTHER_ADDRESS_STREET;
extern int const TAGS_CONTACTS_PAGER_NUMBER;
extern int const TAGS_CONTACTS_RADIO_TELEPHONE_NUMBER;
extern int const TAGS_CONTACTS_SPOUSE;
extern int const TAGS_CONTACTS_SUFFIX;
extern int const TAGS_CONTACTS_TITLE;
extern int const TAGS_CONTACTS_WEBPAGE;
extern int const TAGS_CONTACTS_YOMI_COMPANY_NAME;
extern int const TAGS_CONTACTS_YOMI_FIRST_NAME;
extern int const TAGS_CONTACTS_YOMI_LAST_NAME;
extern int const TAGS_CONTACTS_COMPRESSED_RTF;
extern int const TAGS_CONTACTS_PICTURE;


extern int const TAGS_CALENDAR_PAGE;
extern int const TAGS_CALENDAR_TIME_ZONE;
extern int const TAGS_CALENDAR_ALL_DAY_EVENT;
extern int const TAGS_CALENDAR_ATTENDEES;
extern int const TAGS_CALENDAR_ATTENDEE;
extern int const TAGS_CALENDAR_ATTENDEE_EMAIL;
extern int const TAGS_CALENDAR_ATTENDEE_NAME;
extern int const TAGS_CALENDAR_BODY;
extern int const TAGS_CALENDAR_BODY_TRUNCATED;
extern int const TAGS_CALENDAR_BUSY_STATUS;
extern int const TAGS_CALENDAR_CATEGORIES;
extern int const TAGS_CALENDAR_CATEGORY;
extern int const TAGS_CALENDAR_COMPRESSED_RTF;
extern int const TAGS_CALENDAR_DTSTAMP;
extern int const TAGS_CALENDAR_END_TIME;
extern int const TAGS_CALENDAR_EXCEPTION;
extern int const TAGS_CALENDAR_EXCEPTIONS;
extern int const TAGS_CALENDAR_EXCEPTION_IS_DELETED;
extern int const TAGS_CALENDAR_EXCEPTION_START_TIME;
extern int const TAGS_CALENDAR_LOCATION;
extern int const TAGS_CALENDAR_MEETING_STATUS;
extern int const TAGS_CALENDAR_ORGANIZER_EMAIL;
extern int const TAGS_CALENDAR_ORGANIZER_NAME;
extern int const TAGS_CALENDAR_RECURRENCE;
extern int const TAGS_CALENDAR_RECURRENCE_TYPE;
extern int const TAGS_CALENDAR_RECURRENCE_UNTIL;
extern int const TAGS_CALENDAR_RECURRENCE_OCCURRENCES;
extern int const TAGS_CALENDAR_RECURRENCE_INTERVAL;
extern int const TAGS_CALENDAR_RECURRENCE_DAYOFWEEK;
extern int const TAGS_CALENDAR_RECURRENCE_DAYOFMONTH;
extern int const TAGS_CALENDAR_RECURRENCE_WEEKOFMONTH;
extern int const TAGS_CALENDAR_RECURRENCE_MONTHOFYEAR;
extern int const TAGS_CALENDAR_REMINDER_MINS_BEFORE;
extern int const TAGS_CALENDAR_SENSITIVITY;
extern int const TAGS_CALENDAR_SUBJECT;
extern int const TAGS_CALENDAR_START_TIME;
extern int const TAGS_CALENDAR_UID;
extern int const TAGS_CALENDAR_ATTENDEE_STATUS;
extern int const TAGS_CALENDAR_ATTENDEE_TYPE;
extern int const TAGS_CALENDAR_ATTACHMENT;
extern int const TAGS_CALENDAR_ATTACHMENTS;
extern int const TAGS_CALENDAR_ATT_NAME;
extern int const TAGS_CALENDAR_ATT_SIZE;
extern int const TAGS_CALENDAR_ATT_OID;
extern int const TAGS_CALENDAR_ATT_METHOD;
extern int const TAGS_CALENDAR_ATT_REMOVED;
extern int const TAGS_CALENDAR_DISPLAY_NAME;
extern int const TAGS_CALENDAR_DISALLOW_NEW_TIME_PROPOSAL;
extern int const TAGS_CALENDAR_RESPONSE_REQUESTED;
extern int const TAGS_CALENDAR_APPOINTMENT_REPLY_TIME;
extern int const TAGS_CALENDAR_RESPONSE_TYPE;
extern int const TAGS_CALENDAR_CALENDAR_TYPE;
extern int const TAGS_CALENDAR_IS_LEAP_MONTH;
extern int const TAGS_CALENDAR_FIRST_DAY_OF_WEEK;
extern int const TAGS_CALENDAR_ONLINE_MEETING_CONFLINK;
extern int const TAGS_CALENDAR_ONLINE_MEETING_EXTERNAL_LINK;


extern int const TAGS_FOLDER_PAGE;
extern int const TAGS_FOLDER_FOLDERS;
extern int const TAGS_FOLDER_FOLDER;
extern int const TAGS_FOLDER_DISPLAY_NAME;
extern int const TAGS_FOLDER_SERVER_ID;
extern int const TAGS_FOLDER_PARENT_ID;
extern int const TAGS_FOLDER_TYPE;
extern int const TAGS_FOLDER_RESPONSE;
extern int const TAGS_FOLDER_STATUS;
extern int const TAGS_FOLDER_CONTENT_CLASS;
extern int const TAGS_FOLDER_CHANGES;
extern int const TAGS_FOLDER_ADD;
extern int const TAGS_FOLDER_DELETE;
extern int const TAGS_FOLDER_UPDATE;
extern int const TAGS_FOLDER_SYNC_KEY;
extern int const TAGS_FOLDER_FOLDER_CREATE;
extern int const TAGS_FOLDER_FOLDER_DELETE;
extern int const TAGS_FOLDER_FOLDER_UPDATE;
extern int const TAGS_FOLDER_FOLDER_SYNC;
extern int const TAGS_FOLDER_COUNT;
extern int const TAGS_FOLDER_VERSION;


extern int const TAGS_MREQ_PAGE;
extern int const TAGS_MREQ_CAL_ID;
extern int const TAGS_MREQ_COLLECTION_ID;
extern int const TAGS_MREQ_MEETING_RESPONSE;
extern int const TAGS_MREQ_REQ_ID;
extern int const TAGS_MREQ_REQUEST;
extern int const TAGS_MREQ_RESULT;
extern int const TAGS_MREQ_STATUS;
extern int const TAGS_MREQ_USER_RESPONSE;
extern int const TAGS_MREQ_VERSION;


extern int const TAGS_EMAIL_PAGE;
extern int const TAGS_EMAIL_ATTACHMENT;
extern int const TAGS_EMAIL_ATTACHMENTS;
extern int const TAGS_EMAIL_ATT_NAME;
extern int const TAGS_EMAIL_ATT_SIZE;
extern int const TAGS_EMAIL_ATT0ID;
extern int const TAGS_EMAIL_ATT_METHOD;
extern int const TAGS_EMAIL_ATT_REMOVED;
extern int const TAGS_EMAIL_BODY;
extern int const TAGS_EMAIL_BODY_SIZE;
extern int const TAGS_EMAIL_BODY_TRUNCATED;
extern int const TAGS_EMAIL_DATE_RECEIVED;
extern int const TAGS_EMAIL_DISPLAY_NAME;
extern int const TAGS_EMAIL_DISPLAY_TO;
extern int const TAGS_EMAIL_IMPORTANCE;
extern int const TAGS_EMAIL_MESSAGE_CLASS;
extern int const TAGS_EMAIL_SUBJECT;
extern int const TAGS_EMAIL_READ;
extern int const TAGS_EMAIL_TO;
extern int const TAGS_EMAIL_CC;
extern int const TAGS_EMAIL_FROM;
extern int const TAGS_EMAIL_REPLY_TO;
extern int const TAGS_EMAIL_ALL_DAY_EVENT;
extern int const TAGS_EMAIL_CATEGORIES;
extern int const TAGS_EMAIL_CATEGORY;
extern int const TAGS_EMAIL_DTSTAMP;
extern int const TAGS_EMAIL_END_TIME;
extern int const TAGS_EMAIL_INSTANCE_TYPE;
extern int const TAGS_EMAIL_INTD_BUSY_STATUS;
extern int const TAGS_EMAIL_LOCATION;
extern int const TAGS_EMAIL_MEETING_REQUEST;
extern int const TAGS_EMAIL_ORGANIZER;
extern int const TAGS_EMAIL_RECURRENCE_ID;
extern int const TAGS_EMAIL_REMINDER;
extern int const TAGS_EMAIL_RESPONSE_REQUESTED;
extern int const TAGS_EMAIL_RECURRENCES;
extern int const TAGS_EMAIL_RECURRENCE;
extern int const TAGS_EMAIL_RECURRENCE_TYPE;
extern int const TAGS_EMAIL_RECURRENCE_UNTIL;
extern int const TAGS_EMAIL_RECURRENCE_OCCURRENCES;
extern int const TAGS_EMAIL_RECURRENCE_INTERVAL;
extern int const TAGS_EMAIL_RECURRENCE_DAYOFWEEK;
extern int const TAGS_EMAIL_RECURRENCE_DAYOFMONTH;
extern int const TAGS_EMAIL_RECURRENCE_WEEKOFMONTH;
extern int const TAGS_EMAIL_RECURRENCE_MONTHOFYEAR;
extern int const TAGS_EMAIL_START_TIME;
extern int const TAGS_EMAIL_SENSITIVITY;
extern int const TAGS_EMAIL_TIME_ZONE;
extern int const TAGS_EMAIL_GLOBAL_OBJID;
extern int const TAGS_EMAIL_THREAD_TOPIC;
extern int const TAGS_EMAIL_MIME_DATA;
extern int const TAGS_EMAIL_MIME_TRUNCATED;
extern int const TAGS_EMAIL_MIME_SIZE;
extern int const TAGS_EMAIL_INTERNET_CPID;
extern int const TAGS_EMAIL_FLAG;
extern int const TAGS_EMAIL_FLAG_STATUS;
extern int const TAGS_EMAIL_CONTENT_CLASS;
extern int const TAGS_EMAIL_FLAG_TYPE;
extern int const TAGS_EMAIL_COMPLETE_TIME;
extern int const TAGS_EMAIL_DISALLOW_NEW_TIME_PROPOSAL;


extern int const TAGS_TASK_PAGE;
extern int const TAGS_TASK_BODY;
extern int const TAGS_TASK_BODY_SIZE;
extern int const TAGS_TASK_BODY_TRUNCATED;
extern int const TAGS_TASK_CATEGORIES;
extern int const TAGS_TASK_CATEGORY;
extern int const TAGS_TASK_COMPLETE;
extern int const TAGS_TASK_DATE_COMPLETED;
extern int const TAGS_TASK_DUE_DATE;
extern int const TAGS_TASK_UTC_DUE_DATE;
extern int const TAGS_TASK_IMPORTANCE;
extern int const TAGS_TASK_RECURRENCE;
extern int const TAGS_TASK_RECURRENCE_TYPE;
extern int const TAGS_TASK_RECURRENCE_START;
extern int const TAGS_TASK_RECURRENCE_UNTIL;
extern int const TAGS_TASK_RECURRENCE_OCCURRENCES;
extern int const TAGS_TASK_RECURRENCE_INTERVAL;
extern int const TAGS_TASK_RECURRENCE_DAY_OF_MONTH;
extern int const TAGS_TASK_RECURRENCE_DAY_OF_WEEK;
extern int const TAGS_TASK_RECURRENCE_WEEK_OF_MONTH;
extern int const TAGS_TASK_RECURRENCE_MONTH_OF_YEAR;
extern int const TAGS_TASK_RECURRENCE_REGENERATE;
extern int const TAGS_TASK_RECURRENCE_DEAD_OCCUR;
extern int const TAGS_TASK_REMINDER_SET;
extern int const TAGS_TASK_REMINDER_TIME;
extern int const TAGS_TASK_SENSITIVITY;
extern int const TAGS_TASK_START_DATE;
extern int const TAGS_TASK_UTC_START_DATE;
extern int const TAGS_TASK_SUBJECT;
extern int const TAGS_COMPRESSED_RTF;
extern int const TAGS_ORDINAL_DATE;
extern int const TAGS_SUBORDINAL_DATE;


extern int const TAGS_MOVE_PAGE;
extern int const TAGS_MOVE_MOVE_ITEMS;
extern int const TAGS_MOVE_MOVE;
extern int const TAGS_MOVE_SRCMSGID;
extern int const TAGS_MOVE_SRCFLDID;
extern int const TAGS_MOVE_DSTFLDID;
extern int const TAGS_MOVE_RESPONSE;
extern int const TAGS_MOVE_STATUS;
extern int const TAGS_MOVE_DSTMSGID;


extern int const TAGS_CONTACTS2_PAGE;
extern int const TAGS_CONTACTS2_CUSTOMER_ID;
extern int const TAGS_CONTACTS2_GOVERNMENT_ID;
extern int const TAGS_CONTACTS2_IM_ADDRESS;
extern int const TAGS_CONTACTS2_IM_ADDRESS_2;
extern int const TAGS_CONTACTS2_IM_ADDRESS_3;
extern int const TAGS_CONTACTS2_MANAGER_NAME;
extern int const TAGS_CONTACTS2_COMPANY_MAIN_PHONE;
extern int const TAGS_CONTACTS2_ACCOUNT_NAME;
extern int const TAGS_CONTACTS2_NICKNAME;
extern int const TAGS_CONTACTS2_MMS;


extern int const TAGS_PING_PAGE;
extern int const TAGS_PING_PING;
extern int const TAGS_PING_AUTD_STATE;
extern int const TAGS_PING_STATUS;
extern int const TAGS_PING_HEARTBEAT_INTERVAL;
extern int const TAGS_PING_FOLDERS;
extern int const TAGS_PING_FOLDER;
extern int const TAGS_PING_ID;
extern int const TAGS_PING_CLASS;
extern int const TAGS_PING_MAX_FOLDERS;


extern int const TAGS_SEARCH_PAGE;
extern int const TAGS_SEARCH_SEARCH;
extern int const TAGS_SEARCH_STORES;
extern int const TAGS_SEARCH_STORE;
extern int const TAGS_SEARCH_NAME;
extern int const TAGS_SEARCH_QUERY;
extern int const TAGS_SEARCH_OPTIONS;
extern int const TAGS_SEARCH_RANGE;
extern int const TAGS_SEARCH_STATUS;
extern int const TAGS_SEARCH_RESPONSE;
extern int const TAGS_SEARCH_RESULT;
extern int const TAGS_SEARCH_PROPERTIES;
extern int const TAGS_SEARCH_TOTAL;
extern int const TAGS_SEARCH_EQUAL_TO;
extern int const TAGS_SEARCH_VALUE;
extern int const TAGS_SEARCH_AND;
extern int const TAGS_SEARCH_OR;
extern int const TAGS_SEARCH_FREE_TEXT;
extern int const TAGS_SEARCH_SUBSTRING_OP;
extern int const TAGS_SEARCH_DEEP_TRAVERSAL;
extern int const TAGS_SEARCH_LONG_ID;
extern int const TAGS_SEARCH_REBUILD_RESULTS;
extern int const TAGS_SEARCH_LESS_THAN;
extern int const TAGS_SEARCH_GREATER_THAN;
extern int const TAGS_SEARCH_SCHEMA;
extern int const TAGS_SEARCH_SUPPORTED;
extern int const TAGS_SEARCH_USER_NAME;
extern int const TAGS_SEARCH_PASSWORD;
extern int const TAGS_SEARCH_CONVERSATION_ID;
// The following tags are supported in MS-AS 14.1 and above
extern int const TAGS_SEARCH_PICTURE;
extern int const TAGS_SEARCH_MAX_SIZE;
extern int const TAGS_SEARCH_MAX_PICTURES;


extern int const TAGS_GAL_PAGE;
extern int const TAGS_GAL_DISPLAY_NAME;
extern int const TAGS_GAL_PHONE;
extern int const TAGS_GAL_OFFICE;
extern int const TAGS_GAL_TITLE;
extern int const TAGS_GAL_COMPANY;
extern int const TAGS_GAL_ALIAS;
extern int const TAGS_GAL_FIRST_NAME;
extern int const TAGS_GAL_LAST_NAME;
extern int const TAGS_GAL_HOME_PHONE;
extern int const TAGS_GAL_MOBILE_PHONE;
extern int const TAGS_GAL_EMAIL_ADDRESS;
// The following tags are supported in MS-AS 14.1 and above
extern int const TAGS_GAL_PICTURE;
extern int const TAGS_GAL_STATUS;
extern int const TAGS_GAL_DATA;


extern int const TAGS_PROVISION_PAGE;
// EAS 2.5
extern int const TAGS_PROVISION_PROVISION;
extern int const TAGS_PROVISION_POLICIES;
extern int const TAGS_PROVISION_POLICY;
extern int const TAGS_PROVISION_POLICY_TYPE;
extern int const TAGS_PROVISION_POLICY_KEY;
extern int const TAGS_PROVISION_DATA;
extern int const TAGS_PROVISION_STATUS;
extern int const TAGS_PROVISION_REMOTE_WIPE;
// EAS 12.0
extern int const TAGS_PROVISION_EAS_PROVISION_DOC;
extern int const TAGS_PROVISION_DEVICE_PASSWORD_ENABLED;
extern int const TAGS_PROVISION_ALPHA_DEVICE_PASSWORD_ENABLED;
extern int const TAGS_PROVISION_DEVICE_ENCRYPTION_ENABLED;
extern int const TAGS_PROVISION_PASSWORD_RECOVERY_ENABLED;
extern int const TAGS_PROVISION_ATTACHMENTS_ENABLED;
extern int const TAGS_PROVISION_MIN_DEVICE_PASSWORD_LENGTH;
extern int const TAGS_PROVISION_MAX_INACTIVITY_TIME_DEVICE_LOCK;
extern int const TAGS_PROVISION_MAX_DEVICE_PASSWORD_FAILED_ATTEMPTS;
extern int const TAGS_PROVISION_MAX_ATTACHMENT_SIZE;
extern int const TAGS_PROVISION_ALLOW_SIMPLE_DEVICE_PASSWORD;
extern int const TAGS_PROVISION_DEVICE_PASSWORD_EXPIRATION;
extern int const TAGS_PROVISION_DEVICE_PASSWORD_HISTORY;
extern int const TAGS_PROVISION_MAX_SUPPORTED_TAG;
// EAS 12.1
extern int const TAGS_PROVISION_ALLOW_STORAGE_CARD;
extern int const TAGS_PROVISION_ALLOW_CAMERA;
extern int const TAGS_PROVISION_REQUIRE_DEVICE_ENCRYPTION;
extern int const TAGS_PROVISION_ALLOW_UNSIGNED_APPLICATIONS;
extern int const TAGS_PROVISION_ALLOW_UNSIGNED_INSTALLATION_PACKAGES;
extern int const TAGS_PROVISION_MIN_DEVICE_PASSWORD_COMPLEX_CHARS;
extern int const TAGS_PROVISION_ALLOW_WIFI;
extern int const TAGS_PROVISION_ALLOW_TEXT_MESSAGING;
extern int const TAGS_PROVISION_ALLOW_POP_IMAP_EMAIL;
extern int const TAGS_PROVISION_ALLOW_BLUETOOTH;
extern int const TAGS_PROVISION_ALLOW_IRDA;
extern int const TAGS_PROVISION_REQUIRE_MANUAL_SYNC_WHEN_ROAMING;
extern int const TAGS_PROVISION_ALLOW_DESKTOP_SYNC;
extern int const TAGS_PROVISION_MAX_CALENDAR_AGE_FILTER;
extern int const TAGS_PROVISION_ALLOW_HTML_EMAIL;
extern int const TAGS_PROVISION_MAX_EMAIL_AGE_FILTER;
extern int const TAGS_PROVISION_MAX_EMAIL_BODY_TRUNCATION_SIZE;
extern int const TAGS_PROVISION_MAX_EMAIL_HTML_BODY_TRUNCATION_SIZE;
extern int const TAGS_PROVISION_REQUIRE_SIGNED_SMIME_MESSAGES;
extern int const TAGS_PROVISION_REQUIRE_ENCRYPTED_SMIME_MESSAGES;
extern int const TAGS_PROVISION_REQUIRE_SIGNED_SMIME_ALGORITHM;
extern int const TAGS_PROVISION_REQUIRE_ENCRYPTION_SMIME_ALGORITHM;
extern int const TAGS_PROVISION_ALLOW_SMIME_ENCRYPTION_NEGOTIATION;
extern int const TAGS_PROVISION_ALLOW_SMIME_SOFT_CERTS;
extern int const TAGS_PROVISION_ALLOW_BROWSER;
extern int const TAGS_PROVISION_ALLOW_CONSUMER_EMAIL;
extern int const TAGS_PROVISION_ALLOW_REMOTE_DESKTOP;
extern int const TAGS_PROVISION_ALLOW_INTERNET_SHARING;
extern int const TAGS_PROVISION_UNAPPROVED_IN_ROM_APPLICATION_LIST;
extern int const TAGS_PROVISION_APPLICATION_NAME;
extern int const TAGS_PROVISION_APPROVED_APPLICATION_LIST;
extern int const TAGS_PROVISION_HASH;

extern int const TAGS_BASE_PAGE;
extern int const TAGS_BASE_BODY_PREFERENCE;
extern int const TAGS_BASE_TYPE;
extern int const TAGS_BASE_TRUNCATION_SIZE;
extern int const TAGS_BASE_ALL_OR_NONE;
extern int const TAGS_BASE_RESERVED;
extern int const TAGS_BASE_BODY;
extern int const TAGS_BASE_DATA;
extern int const TAGS_BASE_ESTIMATED_DATA_SIZE;
extern int const TAGS_BASE_TRUNCATED;
extern int const TAGS_BASE_ATTACHMENTS;
extern int const TAGS_BASE_ATTACHMENT;
extern int const TAGS_BASE_DISPLAY_NAME;
extern int const TAGS_BASE_FILE_REFERENCE;
extern int const TAGS_BASE_METHOD;
extern int const TAGS_BASE_CONTENT_ID;
extern int const TAGS_BASE_CONTENT_LOCATION;
extern int const TAGS_BASE_IS_INLINE;
extern int const TAGS_BASE_NATIVE_BODY_TYPE;
extern int const TAGS_BASE_CONTENT_TYPE;

extern int const TAGS_SETTINGS_PAGE;
extern int const TAGS_SETTINGS_SETTINGS;
extern int const TAGS_SETTINGS_STATUS;
extern int const TAGS_SETTINGS_GET;
extern int const TAGS_SETTINGS_SET;
extern int const TAGS_SETTINGS_OOF;
extern int const TAGS_SETTINGS_OOF_STATE;
extern int const TAGS_SETTINGS_START_TIME;
extern int const TAGS_SETTINGS_END_TIME;
extern int const TAGS_SETTINGS_OOF_MESSAGE;
extern int const TAGS_SETTINGS_APPLIES_TO_INTERNAL;
extern int const TAGS_SETTINGS_APPLIES_TO_EXTERNAL_KNOWN;
extern int const TAGS_SETTINGS_APPLIES_TO_EXTERNAL_UNKNOWN;
extern int const TAGS_SETTINGS_ENABLED;
extern int const TAGS_SETTINGS_REPLY_MESSAGE;
extern int const TAGS_SETTINGS_BODY_TYPE;
extern int const TAGS_SETTINGS_DEVICE_PASSWORD;
extern int const TAGS_SETTINGS_PASSWORD;
extern int const TAGS_SETTINGS_DEVICE_INFORMATION;
extern int const TAGS_SETTINGS_MODEL;
extern int const TAGS_SETTINGS_IMEI;
extern int const TAGS_SETTINGS_FRIENDLY_NAME;
extern int const TAGS_SETTINGS_OS;
extern int const TAGS_SETTINGS_OS_LANGUAGE;
extern int const TAGS_SETTINGS_PHONE_NUMBER;
extern int const TAGS_SETTINGS_USER_INFORMATION;
extern int const TAGS_SETTINGS_EMAIL_ADDRESS;
extern int const TAGS_SETTINGS_SMTP_ADDRESS;
extern int const TAGS_SETTINGS_USER_AGENT;
extern int const TAGS_SETTINGS_ENABLE_OUTGOING_SMS;
extern int const TAGS_SETTINGS_MOBILE_OPERATOR;

extern int const TAGS_ITEMS_PAGE;
extern int const TAGS_ITEMS_ITEMS;
extern int const TAGS_ITEMS_FETCH;
extern int const TAGS_ITEMS_STORE;
extern int const TAGS_ITEMS_OPTIONS;
extern int const TAGS_ITEMS_RANGE;
extern int const TAGS_ITEMS_TOTAL;
extern int const TAGS_ITEMS_PROPERTIES;
extern int const TAGS_ITEMS_DATA;
extern int const TAGS_ITEMS_STATUS;
extern int const TAGS_ITEMS_RESPONSE;
extern int const TAGS_ITEMS_VERSION;
extern int const TAGS_ITEMS_SCHEMA;
extern int const TAGS_ITEMS_PART;
extern int const TAGS_ITEMS_EMPTY_FOLDER;
extern int const TAGS_ITEMS_DELETE_SUB_FOLDERS;
extern int const TAGS_ITEMS_USERNAME;
extern int const TAGS_ITEMS_PASSWORD;
extern int const TAGS_ITEMS_MOVE;
extern int const TAGS_ITEMS_DSTFLDID;
extern int const TAGS_ITEMS_CONVERSATION_ID;
extern int const TAGS_ITEMS_MOVE_ALWAYS;

extern int const TAGS_COMPOSE_PAGE;
extern int const TAGS_COMPOSE_SEND_MAIL;
extern int const TAGS_COMPOSE_SMART_FORWARD;
extern int const TAGS_COMPOSE_SMART_REPLY;
extern int const TAGS_COMPOSE_SAVE_IN_SENT_ITEMS;
extern int const TAGS_COMPOSE_REPLACE_MIME;
// There is no tag for COMPOSE_PAGE + 0xA
extern int const TAGS_COMPOSE_SOURCE;
extern int const TAGS_COMPOSE_FOLDER_ID;
extern int const TAGS_COMPOSE_ITEM_ID;
extern int const TAGS_COMPOSE_LONG_ID;
extern int const TAGS_COMPOSE_INSTANCE_ID;
extern int const TAGS_COMPOSE_MIME;
extern int const TAGS_COMPOSE_CLIENT_ID;
extern int const TAGS_COMPOSE_STATUS;
extern int const TAGS_COMPOSE_ACCOUNT_ID;

extern int const TAGS_EMAIL2_PAGE;
extern int const TAGS_EMAIL2_UM_CALLER_ID;
extern int const TAGS_EMAIL2_UM_USER_NOTES;
extern int const TAGS_EMAIL2_UM_ATT_DURATION;
extern int const TAGS_EMAIL2_UM_ATT_ORDER;
extern int const TAGS_EMAIL2_CONVERSATION_ID;
extern int const TAGS_EMAIL2_CONVERSATION_INDEX;
extern int const TAGS_EMAIL2_LAST_VERB_EXECUTED;
extern int const TAGS_EMAIL2_LAST_VERB_EXECUTION_TIME;
extern int const TAGS_EMAIL2_RECEIVED_AS_BCC;
extern int const TAGS_EMAIL2_SENDER;
extern int const TAGS_EMAIL2_CALENDAR_TYPE;
extern int const TAGS_EMAIL2_IS_LEAP_MONTH;
extern int const TAGS_EMAIL2_ACCOUNT_ID;
extern int const TAGS_EMAIL2_FIRST_DAY_OF_WEEK;
extern int const TAGS_EMAIL2_MEETING_MESSAGE_TYPE;

extern int const TAGS_RIGHTS_PAGE;
extern int const TAGS_RIGHTS_SUPPORT;
extern int const TAGS_RIGHTS_TEMPLATES;
extern int const TAGS_RIGHTS_TEMPLATE;
extern int const TAGS_RIGHTS_LICENSE;
extern int const TAGS_RIGHTS_EDIT_ALLOWED;
extern int const TAGS_RIGHTS_REPLY_ALLOWED;
extern int const TAGS_RIGHTS_REPLY_ALL_ALLOWED;
extern int const TAGS_RIGHTS_FORWARD_ALLOWED;
extern int const TAGS_RIGHTS_MODIFY_RECIPIENTS_ALLOWED;
extern int const TAGS_RIGHTS_EXTRACT_ALLOWED;
extern int const TAGS_RIGHTS_PRINT_ALLOWED;
extern int const TAGS_RIGHTS_EXPORT_ALLOWED;
extern int const TAGS_RIGHTS_PROGRAMMATIC_ACCESS_ALLOWED;
extern int const TAGS_RIGHTS_OWNER;
extern int const TAGS_RIGHTS_CONTENT_EXPIRY_DATE;
extern int const TAGS_RIGHTS_TEMPLATE_ID;
extern int const TAGS_RIGHTS_TEMPLATE_NAME;
extern int const TAGS_RIGHTS_TEMPLATE_DESCRIPTION;
extern int const TAGS_RIGHTS_CONTENT_OWNER;
extern int const TAGS_RIGHTS_REMOVE_RM_DISTRIBUTION;

@end
