/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol CADAlarmEngineInterface
- (void)CADDatabaseGetLocationBasedAlarmsWithReply:(id)arg1;
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(id)arg4;
- (void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(id)arg2;
@end

