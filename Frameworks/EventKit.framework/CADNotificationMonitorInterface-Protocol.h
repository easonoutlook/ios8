/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol CADNotificationMonitorInterface
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(CDStruct_f683c4ba)arg2 error:(id)arg3;
- (void)CADInviteReplyNotification:(CDStruct_f683c4ba)arg1 setAlertedWithError:(id)arg2;
- (void)CADResourceChange:(CDStruct_f683c4ba)arg1 setAlertedWithError:(id)arg2;
- (void)CADCalendar:(CDStruct_f683c4ba)arg1 setAlertedWithError:(id)arg2;
- (void)CADEvent:(CDStruct_f683c4ba)arg1 setAlertedWithError:(id)arg2;
- (void)CADDatabaseGetInboxRepliedSectionItems:(id)arg1;
- (void)CADDatabaseGetInboxNotificationItems:(id)arg1;
- (void)CADDatabaseGetInviteReplyNotifications:(id)arg1;
- (void)CADDatabaseGetResourceChanges:(id)arg1;
- (void)CADCalendarSetClearedFromNotificationCenter:(CDStruct_f683c4ba)arg1 error:(id)arg2;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(id)arg1;
@end

