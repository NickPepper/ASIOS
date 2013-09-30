//
//  Constants_Tags.h
//  ASIOS
//
//  Created by  Nick Pershin on 9/30/13.
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


#import <Foundation/Foundation.h>

@interface Constants_Tags : NSObject
{
    
}

// Wbxml page definitions for EAS
extern int const AIRSYNC;
extern int const CONTACTS;
extern int const EMAIL;
extern int const CALENDAR;
extern int const MOVE;
extern int const GIE;
extern int const FOLDER;
extern int const MREQ;
extern int const TASK;
extern int const CONTACTS2;
extern int const PING;
extern int const PROVISION;
extern int const SEARCH;
extern int const GAL;
extern int const BASE;
extern int const SETTINGS;
extern int const DOCS;
extern int const ITEMS;
// 14.0
extern int const COMPOSE;
extern int const EMAIL2;
// 14.1
extern int const NOTES;
extern int const RIGHTS;

// Shift applied to page numbers to generate tag
extern int const PAGESHIFT;


extern int const SYNC_PAGE;
extern int const SYNC_SYNC;
extern int const SYNC_RESPONSES;
extern int const SYNC_ADD;
extern int const SYNC_CHANGE;
extern int const SYNC_DELETE;
extern int const SYNC_FETCH;
extern int const SYNC_SYNC_KEY;
extern int const SYNC_CLIENT_ID;
extern int const SYNC_SERVER_ID;
extern int const SYNC_STATUS;
extern int const SYNC_COLLECTION;
extern int const SYNC_CLASS;
extern int const SYNC_VERSION;
extern int const SYNC_COLLECTION_ID;
extern int const SYNC_GET_CHANGES;
extern int const SYNC_MORE_AVAILABLE;
extern int const SYNC_WINDOW_SIZE;
extern int const SYNC_COMMANDS;
extern int const SYNC_OPTIONS;
extern int const SYNC_FILTER_TYPE;
extern int const SYNC_TRUNCATION;
extern int const SYNC_RTF_TRUNCATION;
extern int const SYNC_CONFLICT;
extern int const SYNC_COLLECTIONS;
extern int const SYNC_APPLICATION_DATA;
extern int const SYNC_DELETES_AS_MOVES;
extern int const SYNC_NOTIFY_GUID;
extern int const SYNC_SUPPORTED;
extern int const SYNC_SOFT_DELETE;
extern int const SYNC_MIME_SUPPORT;
extern int const SYNC_MIME_TRUNCATION;
extern int const SYNC_WAIT;
extern int const SYNC_LIMIT;
extern int const SYNC_PARTIAL;


extern int const GIE_PAGE;
extern int const GIE_GET_ITEM_ESTIMATE;
extern int const GIE_VERSION;
extern int const GIE_COLLECTIONS;
extern int const GIE_COLLECTION;
extern int const GIE_CLASS;
extern int const GIE_COLLECTION_ID;
extern int const GIE_DATE_TIME;
extern int const GIE_ESTIMATE;
extern int const GIE_RESPONSE;
extern int const GIE_STATUS;


extern int const CONTACTS_PAGE;
extern int const CONTACTS_ANNIVERSARY;
extern int const CONTACTS_ASSISTANT_NAME;
extern int const CONTACTS_ASSISTANT_TELEPHONE_NUMBER;
extern int const CONTACTS_BIRTHDAY;
extern int const CONTACTS_BODY;
extern int const CONTACTS_BODY_SIZE;
extern int const CONTACTS_BODY_TRUNCATED;
extern int const CONTACTS_BUSINESS2_TELEPHONE_NUMBER;
extern int const CONTACTS_BUSINESS_ADDRESS_CITY;
extern int const CONTACTS_BUSINESS_ADDRESS_COUNTRY;
extern int const CONTACTS_BUSINESS_ADDRESS_POSTAL_CODE;
extern int const CONTACTS_BUSINESS_ADDRESS_STATE;
extern int const CONTACTS_BUSINESS_ADDRESS_STREET;
extern int const CONTACTS_BUSINESS_FAX_NUMBER;
extern int const CONTACTS_BUSINESS_TELEPHONE_NUMBER;
extern int const CONTACTS_CAR_TELEPHONE_NUMBER;
extern int const CONTACTS_CATEGORIES;
extern int const CONTACTS_CATEGORY;
extern int const CONTACTS_CHILDREN;
extern int const CONTACTS_CHILD;
extern int const CONTACTS_COMPANY_NAME;
extern int const CONTACTS_DEPARTMENT;
extern int const CONTACTS_EMAIL1_ADDRESS;
extern int const CONTACTS_EMAIL2_ADDRESS;
extern int const CONTACTS_EMAIL3_ADDRESS;
extern int const CONTACTS_FILE_AS;
extern int const CONTACTS_FIRST_NAME;
extern int const CONTACTS_HOME2_TELEPHONE_NUMBER;
extern int const CONTACTS_HOME_ADDRESS_CITY;
extern int const CONTACTS_HOME_ADDRESS_COUNTRY;
extern int const CONTACTS_HOME_ADDRESS_POSTAL_CODE;
extern int const CONTACTS_HOME_ADDRESS_STATE;
extern int const CONTACTS_HOME_ADDRESS_STREET;
extern int const CONTACTS_HOME_FAX_NUMBER;
extern int const CONTACTS_HOME_TELEPHONE_NUMBER;
extern int const CONTACTS_JOB_TITLE;
extern int const CONTACTS_LAST_NAME;
extern int const CONTACTS_MIDDLE_NAME;
extern int const CONTACTS_MOBILE_TELEPHONE_NUMBER;
extern int const CONTACTS_OFFICE_LOCATION;
extern int const CONTACTS_OTHER_ADDRESS_CITY;
extern int const CONTACTS_OTHER_ADDRESS_COUNTRY;
extern int const CONTACTS_OTHER_ADDRESS_POSTAL_CODE;
extern int const CONTACTS_OTHER_ADDRESS_STATE;
extern int const CONTACTS_OTHER_ADDRESS_STREET;
extern int const CONTACTS_PAGER_NUMBER;
extern int const CONTACTS_RADIO_TELEPHONE_NUMBER;
extern int const CONTACTS_SPOUSE;
extern int const CONTACTS_SUFFIX;
extern int const CONTACTS_TITLE;
extern int const CONTACTS_WEBPAGE;
extern int const CONTACTS_YOMI_COMPANY_NAME;
extern int const CONTACTS_YOMI_FIRST_NAME;
extern int const CONTACTS_YOMI_LAST_NAME;
extern int const CONTACTS_COMPRESSED_RTF;
extern int const CONTACTS_PICTURE;


extern int const CALENDAR_PAGE;
extern int const CALENDAR_TIME_ZONE;
extern int const CALENDAR_ALL_DAY_EVENT;
extern int const CALENDAR_ATTENDEES;
extern int const CALENDAR_ATTENDEE;
extern int const CALENDAR_ATTENDEE_EMAIL;
extern int const CALENDAR_ATTENDEE_NAME;
extern int const CALENDAR_BODY;
extern int const CALENDAR_BODY_TRUNCATED;
extern int const CALENDAR_BUSY_STATUS;
extern int const CALENDAR_CATEGORIES;
extern int const CALENDAR_CATEGORY;
extern int const CALENDAR_COMPRESSED_RTF;
extern int const CALENDAR_DTSTAMP;
extern int const CALENDAR_END_TIME;
extern int const CALENDAR_EXCEPTION;
extern int const CALENDAR_EXCEPTIONS;
extern int const CALENDAR_EXCEPTION_IS_DELETED;
extern int const CALENDAR_EXCEPTION_START_TIME;
extern int const CALENDAR_LOCATION;
extern int const CALENDAR_MEETING_STATUS;
extern int const CALENDAR_ORGANIZER_EMAIL;
extern int const CALENDAR_ORGANIZER_NAME;
extern int const CALENDAR_RECURRENCE;
extern int const CALENDAR_RECURRENCE_TYPE;
extern int const CALENDAR_RECURRENCE_UNTIL;
extern int const CALENDAR_RECURRENCE_OCCURRENCES;
extern int const CALENDAR_RECURRENCE_INTERVAL;
extern int const CALENDAR_RECURRENCE_DAYOFWEEK;
extern int const CALENDAR_RECURRENCE_DAYOFMONTH;
extern int const CALENDAR_RECURRENCE_WEEKOFMONTH;
extern int const CALENDAR_RECURRENCE_MONTHOFYEAR;
extern int const CALENDAR_REMINDER_MINS_BEFORE;
extern int const CALENDAR_SENSITIVITY;
extern int const CALENDAR_SUBJECT;
extern int const CALENDAR_START_TIME;
extern int const CALENDAR_UID;
extern int const CALENDAR_ATTENDEE_STATUS;
extern int const CALENDAR_ATTENDEE_TYPE;
extern int const CALENDAR_ATTACHMENT;
extern int const CALENDAR_ATTACHMENTS;
extern int const CALENDAR_ATT_NAME;
extern int const CALENDAR_ATT_SIZE;
extern int const CALENDAR_ATT_OID;
extern int const CALENDAR_ATT_METHOD;
extern int const CALENDAR_ATT_REMOVED;
extern int const CALENDAR_DISPLAY_NAME;
extern int const CALENDAR_DISALLOW_NEW_TIME_PROPOSAL;
extern int const CALENDAR_RESPONSE_REQUESTED;
extern int const CALENDAR_APPOINTMENT_REPLY_TIME;
extern int const CALENDAR_RESPONSE_TYPE;
extern int const CALENDAR_CALENDAR_TYPE;
extern int const CALENDAR_IS_LEAP_MONTH;
extern int const CALENDAR_FIRST_DAY_OF_WEEK;
extern int const CALENDAR_ONLINE_MEETING_CONFLINK;
extern int const CALENDAR_ONLINE_MEETING_EXTERNAL_LINK;


extern int const FOLDER_PAGE;
extern int const FOLDER_FOLDERS;
extern int const FOLDER_FOLDER;
extern int const FOLDER_DISPLAY_NAME;
extern int const FOLDER_SERVER_ID;
extern int const FOLDER_PARENT_ID;
extern int const FOLDER_TYPE;
extern int const FOLDER_RESPONSE;
extern int const FOLDER_STATUS;
extern int const FOLDER_CONTENT_CLASS;
extern int const FOLDER_CHANGES;
extern int const FOLDER_ADD;
extern int const FOLDER_DELETE;
extern int const FOLDER_UPDATE;
extern int const FOLDER_SYNC_KEY;
extern int const FOLDER_FOLDER_CREATE;
extern int const FOLDER_FOLDER_DELETE;
extern int const FOLDER_FOLDER_UPDATE;
extern int const FOLDER_FOLDER_SYNC;
extern int const FOLDER_COUNT;
extern int const FOLDER_VERSION;


extern int const MREQ_PAGE;
extern int const MREQ_CAL_ID;
extern int const MREQ_COLLECTION_ID;
extern int const MREQ_MEETING_RESPONSE;
extern int const MREQ_REQ_ID;
extern int const MREQ_REQUEST;
extern int const MREQ_RESULT;
extern int const MREQ_STATUS;
extern int const MREQ_USER_RESPONSE;
extern int const MREQ_VERSION;


extern int const EMAIL_PAGE;
extern int const EMAIL_ATTACHMENT;
extern int const EMAIL_ATTACHMENTS;
extern int const EMAIL_ATT_NAME;
extern int const EMAIL_ATT_SIZE;
extern int const EMAIL_ATT0ID;
extern int const EMAIL_ATT_METHOD;
extern int const EMAIL_ATT_REMOVED;
extern int const EMAIL_BODY;
extern int const EMAIL_BODY_SIZE;
extern int const EMAIL_BODY_TRUNCATED;
extern int const EMAIL_DATE_RECEIVED;
extern int const EMAIL_DISPLAY_NAME;
extern int const EMAIL_DISPLAY_TO;
extern int const EMAIL_IMPORTANCE;
extern int const EMAIL_MESSAGE_CLASS;
extern int const EMAIL_SUBJECT;
extern int const EMAIL_READ;
extern int const EMAIL_TO;
extern int const EMAIL_CC;
extern int const EMAIL_FROM;
extern int const EMAIL_REPLY_TO;
extern int const EMAIL_ALL_DAY_EVENT;
extern int const EMAIL_CATEGORIES;
extern int const EMAIL_CATEGORY;
extern int const EMAIL_DTSTAMP;
extern int const EMAIL_END_TIME;
extern int const EMAIL_INSTANCE_TYPE;
extern int const EMAIL_INTD_BUSY_STATUS;
extern int const EMAIL_LOCATION;
extern int const EMAIL_MEETING_REQUEST;
extern int const EMAIL_ORGANIZER;
extern int const EMAIL_RECURRENCE_ID;
extern int const EMAIL_REMINDER;
extern int const EMAIL_RESPONSE_REQUESTED;
extern int const EMAIL_RECURRENCES;
extern int const EMAIL_RECURRENCE;
extern int const EMAIL_RECURRENCE_TYPE;
extern int const EMAIL_RECURRENCE_UNTIL;
extern int const EMAIL_RECURRENCE_OCCURRENCES;
extern int const EMAIL_RECURRENCE_INTERVAL;
extern int const EMAIL_RECURRENCE_DAYOFWEEK;
extern int const EMAIL_RECURRENCE_DAYOFMONTH;
extern int const EMAIL_RECURRENCE_WEEKOFMONTH;
extern int const EMAIL_RECURRENCE_MONTHOFYEAR;
extern int const EMAIL_START_TIME;
extern int const EMAIL_SENSITIVITY;
extern int const EMAIL_TIME_ZONE;
extern int const EMAIL_GLOBAL_OBJID;
extern int const EMAIL_THREAD_TOPIC;
extern int const EMAIL_MIME_DATA;
extern int const EMAIL_MIME_TRUNCATED;
extern int const EMAIL_MIME_SIZE;
extern int const EMAIL_INTERNET_CPID;
extern int const EMAIL_FLAG;
extern int const EMAIL_FLAG_STATUS;
extern int const EMAIL_CONTENT_CLASS;
extern int const EMAIL_FLAG_TYPE;
extern int const EMAIL_COMPLETE_TIME;
extern int const EMAIL_DISALLOW_NEW_TIME_PROPOSAL;


extern int const TASK_PAGE;
extern int const TASK_BODY;
extern int const TASK_BODY_SIZE;
extern int const TASK_BODY_TRUNCATED;
extern int const TASK_CATEGORIES;
extern int const TASK_CATEGORY;
extern int const TASK_COMPLETE;
extern int const TASK_DATE_COMPLETED;
extern int const TASK_DUE_DATE;
extern int const TASK_UTC_DUE_DATE;
extern int const TASK_IMPORTANCE;
extern int const TASK_RECURRENCE;
extern int const TASK_RECURRENCE_TYPE;
extern int const TASK_RECURRENCE_START;
extern int const TASK_RECURRENCE_UNTIL;
extern int const TASK_RECURRENCE_OCCURRENCES;
extern int const TASK_RECURRENCE_INTERVAL;
extern int const TASK_RECURRENCE_DAY_OF_MONTH;
extern int const TASK_RECURRENCE_DAY_OF_WEEK;
extern int const TASK_RECURRENCE_WEEK_OF_MONTH;
extern int const TASK_RECURRENCE_MONTH_OF_YEAR;
extern int const TASK_RECURRENCE_REGENERATE;
extern int const TASK_RECURRENCE_DEAD_OCCUR;
extern int const TASK_REMINDER_SET;
extern int const TASK_REMINDER_TIME;
extern int const TASK_SENSITIVITY;
extern int const TASK_START_DATE;
extern int const TASK_UTC_START_DATE;
extern int const TASK_SUBJECT;
extern int const COMPRESSED_RTF;
extern int const ORDINAL_DATE;
extern int const SUBORDINAL_DATE;


extern int const MOVE_PAGE;
extern int const MOVE_MOVE_ITEMS;
extern int const MOVE_MOVE;
extern int const MOVE_SRCMSGID;
extern int const MOVE_SRCFLDID;
extern int const MOVE_DSTFLDID;
extern int const MOVE_RESPONSE;
extern int const MOVE_STATUS;
extern int const MOVE_DSTMSGID;


extern int const CONTACTS2_PAGE;
extern int const CONTACTS2_CUSTOMER_ID;
extern int const CONTACTS2_GOVERNMENT_ID;
extern int const CONTACTS2_IM_ADDRESS;
extern int const CONTACTS2_IM_ADDRESS_2;
extern int const CONTACTS2_IM_ADDRESS_3;
extern int const CONTACTS2_MANAGER_NAME;
extern int const CONTACTS2_COMPANY_MAIN_PHONE;
extern int const CONTACTS2_ACCOUNT_NAME;
extern int const CONTACTS2_NICKNAME;
extern int const CONTACTS2_MMS;


extern int const PING_PAGE;
extern int const PING_PING;
extern int const PING_AUTD_STATE;
extern int const PING_STATUS;
extern int const PING_HEARTBEAT_INTERVAL;
extern int const PING_FOLDERS;
extern int const PING_FOLDER;
extern int const PING_ID;
extern int const PING_CLASS;
extern int const PING_MAX_FOLDERS;


extern int const SEARCH_PAGE;
extern int const SEARCH_SEARCH;
extern int const SEARCH_STORES;
extern int const SEARCH_STORE;
extern int const SEARCH_NAME;
extern int const SEARCH_QUERY;
extern int const SEARCH_OPTIONS;
extern int const SEARCH_RANGE;
extern int const SEARCH_STATUS;
extern int const SEARCH_RESPONSE;
extern int const SEARCH_RESULT;
extern int const SEARCH_PROPERTIES;
extern int const SEARCH_TOTAL;
extern int const SEARCH_EQUAL_TO;
extern int const SEARCH_VALUE;
extern int const SEARCH_AND;
extern int const SEARCH_OR;
extern int const SEARCH_FREE_TEXT;
extern int const SEARCH_SUBSTRING_OP;
extern int const SEARCH_DEEP_TRAVERSAL;
extern int const SEARCH_LONG_ID;
extern int const SEARCH_REBUILD_RESULTS;
extern int const SEARCH_LESS_THAN;
extern int const SEARCH_GREATER_THAN;
extern int const SEARCH_SCHEMA;
extern int const SEARCH_SUPPORTED;
extern int const SEARCH_USER_NAME;
extern int const SEARCH_PASSWORD;
extern int const SEARCH_CONVERSATION_ID;
// The following tags are supported in MS-AS 14.1 and above
extern int const SEARCH_PICTURE;
extern int const SEARCH_MAX_SIZE;
extern int const SEARCH_MAX_PICTURES;


extern int const GAL_PAGE;
extern int const GAL_DISPLAY_NAME;
extern int const GAL_PHONE;
extern int const GAL_OFFICE;
extern int const GAL_TITLE;
extern int const GAL_COMPANY;
extern int const GAL_ALIAS;
extern int const GAL_FIRST_NAME;
extern int const GAL_LAST_NAME;
extern int const GAL_HOME_PHONE;
extern int const GAL_MOBILE_PHONE;
extern int const GAL_EMAIL_ADDRESS;
// The following tags are supported in MS-AS 14.1 and above
extern int const GAL_PICTURE;
extern int const GAL_STATUS;
extern int const GAL_DATA;


extern int const PROVISION_PAGE;
// EAS 2.5
extern int const PROVISION_PROVISION;
extern int const PROVISION_POLICIES;
extern int const PROVISION_POLICY;
extern int const PROVISION_POLICY_TYPE;
extern int const PROVISION_POLICY_KEY;
extern int const PROVISION_DATA;
extern int const PROVISION_STATUS;
extern int const PROVISION_REMOTE_WIPE;
// EAS 12.0
extern int const PROVISION_EAS_PROVISION_DOC;
extern int const PROVISION_DEVICE_PASSWORD_ENABLED;
extern int const PROVISION_ALPHA_DEVICE_PASSWORD_ENABLED;
extern int const PROVISION_DEVICE_ENCRYPTION_ENABLED;
extern int const PROVISION_PASSWORD_RECOVERY_ENABLED;
extern int const PROVISION_ATTACHMENTS_ENABLED;
extern int const PROVISION_MIN_DEVICE_PASSWORD_LENGTH;
extern int const PROVISION_MAX_INACTIVITY_TIME_DEVICE_LOCK;
extern int const PROVISION_MAX_DEVICE_PASSWORD_FAILED_ATTEMPTS;
extern int const PROVISION_MAX_ATTACHMENT_SIZE;
extern int const PROVISION_ALLOW_SIMPLE_DEVICE_PASSWORD;
extern int const PROVISION_DEVICE_PASSWORD_EXPIRATION;
extern int const PROVISION_DEVICE_PASSWORD_HISTORY;
extern int const PROVISION_MAX_SUPPORTED_TAG;
// EAS 12.1
extern int const PROVISION_ALLOW_STORAGE_CARD;
extern int const PROVISION_ALLOW_CAMERA;
extern int const PROVISION_REQUIRE_DEVICE_ENCRYPTION;
extern int const PROVISION_ALLOW_UNSIGNED_APPLICATIONS;
extern int const PROVISION_ALLOW_UNSIGNED_INSTALLATION_PACKAGES;
extern int const PROVISION_MIN_DEVICE_PASSWORD_COMPLEX_CHARS;
extern int const PROVISION_ALLOW_WIFI;
extern int const PROVISION_ALLOW_TEXT_MESSAGING;
extern int const PROVISION_ALLOW_POP_IMAP_EMAIL;
extern int const PROVISION_ALLOW_BLUETOOTH;
extern int const PROVISION_ALLOW_IRDA;
extern int const PROVISION_REQUIRE_MANUAL_SYNC_WHEN_ROAMING;
extern int const PROVISION_ALLOW_DESKTOP_SYNC;
extern int const PROVISION_MAX_CALENDAR_AGE_FILTER;
extern int const PROVISION_ALLOW_HTML_EMAIL;
extern int const PROVISION_MAX_EMAIL_AGE_FILTER;
extern int const PROVISION_MAX_EMAIL_BODY_TRUNCATION_SIZE;
extern int const PROVISION_MAX_EMAIL_HTML_BODY_TRUNCATION_SIZE;
extern int const PROVISION_REQUIRE_SIGNED_SMIME_MESSAGES;
extern int const PROVISION_REQUIRE_ENCRYPTED_SMIME_MESSAGES;
extern int const PROVISION_REQUIRE_SIGNED_SMIME_ALGORITHM;
extern int const PROVISION_REQUIRE_ENCRYPTION_SMIME_ALGORITHM;
extern int const PROVISION_ALLOW_SMIME_ENCRYPTION_NEGOTIATION;
extern int const PROVISION_ALLOW_SMIME_SOFT_CERTS;
extern int const PROVISION_ALLOW_BROWSER;
extern int const PROVISION_ALLOW_CONSUMER_EMAIL;
extern int const PROVISION_ALLOW_REMOTE_DESKTOP;
extern int const PROVISION_ALLOW_INTERNET_SHARING;
extern int const PROVISION_UNAPPROVED_IN_ROM_APPLICATION_LIST;
extern int const PROVISION_APPLICATION_NAME;
extern int const PROVISION_APPROVED_APPLICATION_LIST;
extern int const PROVISION_HASH;

extern int const BASE_PAGE;
extern int const BASE_BODY_PREFERENCE;
extern int const BASE_TYPE;
extern int const BASE_TRUNCATION_SIZE;
extern int const BASE_ALL_OR_NONE;
extern int const BASE_RESERVED;
extern int const BASE_BODY;
extern int const BASE_DATA;
extern int const BASE_ESTIMATED_DATA_SIZE;
extern int const BASE_TRUNCATED;
extern int const BASE_ATTACHMENTS;
extern int const BASE_ATTACHMENT;
extern int const BASE_DISPLAY_NAME;
extern int const BASE_FILE_REFERENCE;
extern int const BASE_METHOD;
extern int const BASE_CONTENT_ID;
extern int const BASE_CONTENT_LOCATION;
extern int const BASE_IS_INLINE;
extern int const BASE_NATIVE_BODY_TYPE;
extern int const BASE_CONTENT_TYPE;

extern int const SETTINGS_PAGE;
extern int const SETTINGS_SETTINGS;
extern int const SETTINGS_STATUS;
extern int const SETTINGS_GET;
extern int const SETTINGS_SET;
extern int const SETTINGS_OOF;
extern int const SETTINGS_OOF_STATE;
extern int const SETTINGS_START_TIME;
extern int const SETTINGS_END_TIME;
extern int const SETTINGS_OOF_MESSAGE;
extern int const SETTINGS_APPLIES_TO_INTERNAL;
extern int const SETTINGS_APPLIES_TO_EXTERNAL_KNOWN;
extern int const SETTINGS_APPLIES_TO_EXTERNAL_UNKNOWN;
extern int const SETTINGS_ENABLED;
extern int const SETTINGS_REPLY_MESSAGE;
extern int const SETTINGS_BODY_TYPE;
extern int const SETTINGS_DEVICE_PASSWORD;
extern int const SETTINGS_PASSWORD;
extern int const SETTINGS_DEVICE_INFORMATION;
extern int const SETTINGS_MODEL;
extern int const SETTINGS_IMEI;
extern int const SETTINGS_FRIENDLY_NAME;
extern int const SETTINGS_OS;
extern int const SETTINGS_OS_LANGUAGE;
extern int const SETTINGS_PHONE_NUMBER;
extern int const SETTINGS_USER_INFORMATION;
extern int const SETTINGS_EMAIL_ADDRESS;
extern int const SETTINGS_SMTP_ADDRESS;
extern int const SETTINGS_USER_AGENT;
extern int const SETTINGS_ENABLE_OUTGOING_SMS;
extern int const SETTINGS_MOBILE_OPERATOR;

extern int const ITEMS_PAGE;
extern int const ITEMS_ITEMS;
extern int const ITEMS_FETCH;
extern int const ITEMS_STORE;
extern int const ITEMS_OPTIONS;
extern int const ITEMS_RANGE;
extern int const ITEMS_TOTAL;
extern int const ITEMS_PROPERTIES;
extern int const ITEMS_DATA;
extern int const ITEMS_STATUS;
extern int const ITEMS_RESPONSE;
extern int const ITEMS_VERSION;
extern int const ITEMS_SCHEMA;
extern int const ITEMS_PART;
extern int const ITEMS_EMPTY_FOLDER;
extern int const ITEMS_DELETE_SUB_FOLDERS;
extern int const ITEMS_USERNAME;
extern int const ITEMS_PASSWORD;
extern int const ITEMS_MOVE;
extern int const ITEMS_DSTFLDID;
extern int const ITEMS_CONVERSATION_ID;
extern int const ITEMS_MOVE_ALWAYS;

extern int const COMPOSE_PAGE;
extern int const COMPOSE_SEND_MAIL;
extern int const COMPOSE_SMART_FORWARD;
extern int const COMPOSE_SMART_REPLY;
extern int const COMPOSE_SAVE_IN_SENT_ITEMS;
extern int const COMPOSE_REPLACE_MIME;
// There is no tag for COMPOSE_PAGE + 0xA
extern int const COMPOSE_SOURCE;
extern int const COMPOSE_FOLDER_ID;
extern int const COMPOSE_ITEM_ID;
extern int const COMPOSE_LONG_ID;
extern int const COMPOSE_INSTANCE_ID;
extern int const COMPOSE_MIME;
extern int const COMPOSE_CLIENT_ID;
extern int const COMPOSE_STATUS;
extern int const COMPOSE_ACCOUNT_ID;

extern int const EMAIL2_PAGE;
extern int const EMAIL2_UM_CALLER_ID;
extern int const EMAIL2_UM_USER_NOTES;
extern int const EMAIL2_UM_ATT_DURATION;
extern int const EMAIL2_UM_ATT_ORDER;
extern int const EMAIL2_CONVERSATION_ID;
extern int const EMAIL2_CONVERSATION_INDEX;
extern int const EMAIL2_LAST_VERB_EXECUTED;
extern int const EMAIL2_LAST_VERB_EXECUTION_TIME;
extern int const EMAIL2_RECEIVED_AS_BCC;
extern int const EMAIL2_SENDER;
extern int const EMAIL2_CALENDAR_TYPE;
extern int const EMAIL2_IS_LEAP_MONTH;
extern int const EMAIL2_ACCOUNT_ID;
extern int const EMAIL2_FIRST_DAY_OF_WEEK;
extern int const EMAIL2_MEETING_MESSAGE_TYPE;

extern int const RIGHTS_PAGE;
extern int const RIGHTS_SUPPORT;
extern int const RIGHTS_TEMPLATES;
extern int const RIGHTS_TEMPLATE;
extern int const RIGHTS_LICENSE;
extern int const RIGHTS_EDIT_ALLOWED;
extern int const RIGHTS_REPLY_ALLOWED;
extern int const RIGHTS_REPLY_ALL_ALLOWED;
extern int const RIGHTS_FORWARD_ALLOWED;
extern int const RIGHTS_MODIFY_RECIPIENTS_ALLOWED;
extern int const RIGHTS_EXTRACT_ALLOWED;
extern int const RIGHTS_PRINT_ALLOWED;
extern int const RIGHTS_EXPORT_ALLOWED;
extern int const RIGHTS_PROGRAMMATIC_ACCESS_ALLOWED;
extern int const RIGHTS_OWNER;
extern int const RIGHTS_CONTENT_EXPIRY_DATE;
extern int const RIGHTS_TEMPLATE_ID;
extern int const RIGHTS_TEMPLATE_NAME;
extern int const RIGHTS_TEMPLATE_DESCRIPTION;
extern int const RIGHTS_CONTENT_OWNER;
extern int const RIGHTS_REMOVE_RM_DISTRIBUTION;

@end
