/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol CADReminderInterface
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(id)arg1;
- (void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(id)arg3;
- (void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(id)arg2;
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(CDStruct_f683c4ba)arg1;
- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(id)arg1;
@end

