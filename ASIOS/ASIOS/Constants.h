//
//  Constants.h
//  ASIOS
//
//  Created by  Nick Pershin on 9/29/13.
//  Copyright (c) 2013  Nick Pershin. All rights reserved.
//
//  Ported from The Android Open Source Project
//  Copyright (C) 2008-2009 Marc Blank
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#ifndef ASIOS_Constants_h
#define ASIOS_Constants_h

#pragma mark -
#pragma mark Strings used only for generating logging output

// 0x00 AirSync
#define AIR_SYNC @"Sync", @"Responses", @"Add", @"Change", @"Delete", @"Fetch", @"SyncKey", @"ClientId", @"ServerId", @"Status", @"Collection", @"Class", @"Version", @"CollectionId", @"GetChanges", @"MoreAvailable", @"WindowSize", @"Commands", @"Options", @"FilterType", @"Truncation", @"RTFTruncation", @"Conflict", @"Collections", @"ApplicationData", @"DeletesAsMoves", @"NotifyGUID", @"Supported", @"SoftDelete", @"MIMESupport", @"MIMETruncation", @"Wait", @"Limit", @"Partial"

// 0x01 Contacts
#define CONTACTS @"Anniversary", @"AssistantName", @"AssistantTelephoneNumber", @"Birthday", @"ContactsBody", @"ContactsBodySize", @"ContactsBodyTruncated", @"Business2TelephoneNumber", @"BusinessAddressCity", @"BusinessAddressCountry", @"BusinessAddressPostalCode", @"BusinessAddressState", @"BusinessAddressStreet", @"BusinessFaxNumber", @"BusinessTelephoneNumber", @"CarTelephoneNumber", @"ContactsCategories", @"ContactsCategory", @"Children", @"Child", @"CompanyName", @"Department", @"Email1Address", @"Email2Address", @"Email3Address", @"FileAs", @"FirstName", @"Home2TelephoneNumber", @"HomeAddressCity", @"HomeAddressCountry", @"HomeAddressPostalCode", @"HomeAddressState", @"HomeAddressStreet", @"HomeFaxNumber", @"HomeTelephoneNumber", @"JobTitle", @"LastName", @"MiddleName", @"MobileTelephoneNumber", @"OfficeLocation", @"OtherAddressCity", @"OtherAddressCountry", @"OtherAddressPostalCode", @"OtherAddressState", @"OtherAddressStreet", @"PagerNumber", @"RadioTelephoneNumber", @"Spouse", @"Suffix", @"Title", @"Webpage", @"YomiCompanyName", @"YomiFirstName", @"YomiLastName", @"CompressedRTF", @"Picture"

// 0x02 Email
#define EMAIL @"Attachment", @"Attachments", @"AttName", @"AttSize", @"Add0Id", @"AttMethod", @"AttRemoved", @"Body", @"BodySize", @"BodyTruncated", @"DateReceived", @"DisplayName", @"DisplayTo", @"Importance", @"MessageClass", @"Subject", @"Read", @"To", @"CC", @"From", @"ReplyTo", @"AllDayEvent", @"Categories", @"Category", @"DTStamp", @"EndTime", @"InstanceType", @"IntDBusyStatus", @"Location", @"MeetingRequest", @"Organizer", @"RecurrenceId", @"Reminder", @"ResponseRequested", @"Recurrences", @"Recurence", @"Recurrence_Type", @"Recurrence_Until", @"Recurrence_Occurrences", @"Recurrence_Interval", @"Recurrence_DayOfWeek", @"Recurrence_DayOfMonth", @"Recurrence_WeekOfMonth", @"Recurrence_MonthOfYear", @"StartTime", @"Sensitivity", @"TimeZone", @"GlobalObjId", @"ThreadTopic", @"MIMEData", @"MIMETruncated", @"MIMESize", @"InternetCPID", @"Flag", @"FlagStatus", @"EmailContentClass", @"FlagType", @"CompleteTime", @"DisallowNewTimeProposal"

// 0x03 AirNotify
#define AIR_NOTIFY @""

// 0x04 Calendar
#define CALENDAR @"CalTimeZone", @"CalAllDayEvent", @"CalAttendees", @"CalAttendee", @"CalAttendee_Email", @"CalAttendee_Name", @"CalBody", @"CalBodyTruncated", @"CalBusyStatus", @"CalCategories", @"CalCategory", @"CalCompressed_RTF", @"CalDTStamp", @"CalEndTime", @"CalExeption", @"CalExceptions", @"CalException_IsDeleted", @"CalException_StartTime", @"CalLocation", @"CalMeetingStatus", @"CalOrganizer_Email", @"CalOrganizer_Name", @"CalRecurrence", @"CalRecurrence_Type", @"CalRecurrence_Until", @"CalRecurrence_Occurrences", @"CalRecurrence_Interval", @"CalRecurrence_DayOfWeek", @"CalRecurrence_DayOfMonth", @"CalRecurrence_WeekOfMonth", @"CalRecurrence_MonthOfYear", @"CalReminder_MinsBefore", @"CalSensitivity", @"CalSubject", @"CalStartTime", @"CalUID", @"CalAttendee_Status", @"CalAttendee_Type", @"CalAttachment", @"CalAttachments", @"CalAttName", @"CalAttSize", @"CalAttOid", @"CalAttMethod", @"CalAttRemoved", @"CalDisplayName", @"CalDisallowNewTimeProposal", @"CalResponseRequested", @"CalAppointmentReplyTime", @"CalResponseType", @"CalCalendarType", @"CalIsLeapMonth", @"CalFirstDayOfWeek", @"CalOnlineMeetingConfLink", @"CalOnlineMeetingExternalLink"

// 0x05 Move
#define MOVE @"MoveItems", @"Move", @"SrcMsgId", @"SrcFldId", @"DstFldId", @"MoveResponse", @"MoveStatus", @"DstMsgId"

// 0x06 ItemEstimate
#define ITEM_ESTIMATE @"GetItemEstimate", @"Version", @"IECollections", @"IECollection", @"IEClass", @"IECollectionId", @"DateTime", @"Estimate", @"IEResponse", @"ItemEstimateStatus"

// 0x07 FolderHierarchy
#define FOLDER_HIERARCHY @"Folders", @"Folder", @"FolderDisplayName", @"FolderServerId", @"FolderParentId", @"Type", @"FolderResponse", @"FolderStatus", @"FolderContentClass", @"Changes", @"FolderAdd", @"FolderDelete", @"FolderUpdate", @"FolderSyncKey", @"FolderFolderCreate", @"FolderFolderDelete", @"FolderFolderUpdate", @"FolderSync", @"Count", @"FolderVersion"

// 0x08 MeetingResponse
#define MEETING_RESPONSE @"CalId", @"CollectionId", @"MeetingResponse", @"ReqId", @"Request", @"MeetingResponseResult", @"MeetingResponseStatus", @"UserResponse", @"Version"

// 0x09 Tasks
#define TASKS @"TasksBody", @"TasksBodySize", @"TasksBodyTruncated", @"TasksCategories", @"TasksCategory", @"Complete", @"DateCompleted", @"DueDate", @"UTCDueDate", @"TasksImportance", @"Recurrence", @"RecurrenceType", @"RecurrenceStart", @"RecurrenceUntil", @"RecurrenceOccurrences", @"RecurrenceInterval", @"RecurrenceDOM", @"RecurrenceDOW", @"RecurrenceWOM", @"RecurrenceMOY", @"RecurrenceRegenerate", @"RecurrenceDeadOccur", @"ReminderSet", @"ReminderTime", @"TasksSensitivity", @"StartDate", @"UTCStartDate", @"TasksSubject", @"TasksCompressedRTF", @"OrdinalDate", @"SubordinalDate"

// 0x0A ResolveRecipients
#define RESOLVE_RECIPIENTS @""

// 0x0B ValidateCert
#define VALIDATE_CERT @""

// 0x0C Contacts2
#define CONTACTS_2 @"CustomerId", @"GovernmentId", @"IMAddress", @"IMAddress2", @"IMAddress3", @"ManagerName", @"CompanyMainPhone", @"AccountName", @"NickName", @"MMS"

// 0x0D Ping
#define PING @"Ping", @"AutdState", @"PingStatus", @"HeartbeatInterval", @"PingFolders", @"PingFolder", @"PingId", @"PingClass", @"MaxFolders"

// 0x0E Provision
#define PROVISION @"Provision", @"Policies", @"Policy", @"PolicyType", @"PolicyKey", @"Data", @"ProvisionStatus", @"RemoteWipe", @"EASProvidionDoc", @"DevicePasswordEnabled", @"AlphanumericDevicePasswordRequired", @"DeviceEncryptionEnabled", @"PasswordRecoveryEnabled", @"-unused-", @"AttachmentsEnabled", @"MinDevicePasswordLength", @"MaxInactivityTimeDeviceLock", @"MaxDevicePasswordFailedAttempts", @"MaxAttachmentSize", @"AllowSimpleDevicePassword", @"DevicePasswordExpiration", @"DevicePasswordHistory", @"AllowStorageCard", @"AllowCamera", @"RequireDeviceEncryption", @"AllowUnsignedApplications", @"AllowUnsignedInstallationPackages", @"MinDevicePasswordComplexCharacters", @"AllowWiFi", @"AllowTextMessaging", @"AllowPOPIMAPEmail", @"AllowBluetooth", @"AllowIrDA", @"RequireManualSyncWhenRoaming", @"AllowDesktopSync", @"MaxCalendarAgeFilder", @"AllowHTMLEmail", @"MaxEmailAgeFilter", @"MaxEmailBodyTruncationSize", @"MaxEmailHTMLBodyTruncationSize", @"RequireSignedSMIMEMessages", @"RequireEncryptedSMIMEMessages", @"RequireSignedSMIMEAlgorithm", @"RequireEncryptionSMIMEAlgorithm", @"AllowSMIMEEncryptionAlgorithmNegotiation", @"AllowSMIMESoftCerts", @"AllowBrowser", @"AllowConsumerEmail", @"AllowRemoteDesktop", @"AllowInternetSharing", @"UnapprovedInROMApplicationList", @"ApplicationName", @"ApprovedApplicationList", @"Hash"

// 0x0F Search
#define SEARCH @"Search", @"Stores", @"Store", @"Name", @"Query", @"SearchOptions", @"Range", @"SearchStatus", @"Response", @"Result", @"Properties", @"Total", @"EqualTo", @"Value", @"And", @"Or", @"FreeText", @"SubstringOp", @"DeepTraversal", @"LongId", @"RebuildResults", @"LessThan", @"GreateerThan", @"Schema", @"SearchSupported", @"UserName", @"Password", @"ConversationId", @"Picture", @"MaxSize", @"MaxPictures"

// 0x10 Gal
#define GAL @"GalDisplayName", @"GalPhone", @"GalOffice", @"GalTitle", @"GalCompany", @"GalAlias", @"GalFirstName", @"GalLastName", @"GalHomePhone", @"GalMobilePhone", @"GalEmailAddress", @"Picture", @"Status", @"Data"

// 0x11 AirSyncBase
#define AIR_SYNC_BASE @"BodyPreference", @"BodyPreferenceType", @"BodyPreferenceTruncationSize", @"AllOrNone", @"--unused1--", @"BaseBody", @"BaseData", @"BaseEstimatedDataSize", @"BaseTruncated", @"BaseAttachments", @"BaseAttachment", @"BaseDisplayName", @"FileReference", @"BaseMethod", @"BaseContentId", @"BaseContentLocation", @"BaseIsInline", @"BaseNativeBodyType", @"BaseContentType"

// 0x12 Settings
#define SETTINGS @"Settings", @"SettingsStatus", @"Get", @"Set", @"Oof", @"OofState", @"SettingsStartTime", @"SettingsEndTime", @"OofMessage", @"AppliesToInternal", @"AppliesToExternalKnown", @"AppliesToExternalUnknown", @"Enabled", @"ReplyMessage", @"BodyType", @"DevicePassword", @"Password", @"DeviceInformation", @"Model", @"IMEI", @"FriendlyName", @"OS", @"OSLanguage", @"PhoneNumber", @"UserInformation", @"EmailAddress", @"StmpAddress", @"UserAgent", @"EnableOutboundSMS", @"MobileOperator"

// 0x13 DocumentLibrary
#define DOCUMENT_LIBRARY @""

// 0x14 ItemOperations
#define ITEM_OPERATIONS @"Items", @"ItemsFetch", @"ItemsStore", @"ItemsOptions", @"ItemsRange", @"ItemsTotal", @"ItemsProperties", @"ItemsData", @"ItemsStatus", @"ItemsResponse", @"ItemsVersion", @"ItemsSchema", @"ItemsPart", @"ItemsEmptyFolder", @"ItemsDeleteSubFolders", @"ItemsUserName", @"ItemsPassword", @"ItemsMove", @"ItemsDstFldId", @"ItemsConversationId", @"ItemsMoveAlways"

// 0x15 ComposeMail
#define COMPOSE_MAIL @"SendMail", @"SmartForward", @"SmartReply", @"SaveInSentItems", @"ReplaceMime", @"--unused2--", @"ComposeSource", @"ComposeFolderId", @"ComposeItemId", @"ComposeLongId", @"ComposeInstanceId", @"ComposeMime", @"ComposeClientId", @"ComposeStatus", @"ComposeAccountId"

// 0x16 Email2
#define EMAIL_2 @"UmCallerId", @"UmUserNotes", @"UmAttDuration", @"UmAttOrder", @"ConversationId", @"ConversationIndex", @"LastVerbExecuted", @"LastVerbExecutionTime", @"ReceivedAsBcc", @"Sender", @"CalendarType", @"IsLeapMonth", @"AccountId", @"FirstDayOfWeek", @"MeetingMessageType"

// 0x17 Notes
#define NOTES @""

// 0x18 Rights Management
#define RIGHTS_MANAGEMENT @"RMSupport", @"RMTemplates", @"RMTemplate", @"RMLicense", @"EditAllowed", @"ReplyAllowed", @"ReplyAllAllowed", @"ForwardAllowed", @"ModifyRecipientsAllowed", @"ExtractAllowed", @"PrintAllowed", @"ExportAllowed", @"ProgrammaticAccessAllowed", @"RMOwner", @"ContentExpiryDate", @"TemplateID", @"TemplateName", @"TemplateDescription", @"ContentOwner", @"RemoveRMDistribution"


#endif
