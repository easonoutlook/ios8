/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable
{
    CallHistoryDBHandle *dbStoreHandle;
    id _observerCallRecordRef;
    id _observerCallTimersRef;
}

@property(readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle; // @synthesize dbStoreHandle;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2;
- (id)updateAllCallRecords_sync:(id)arg1;
- (id)updateCallRecords_sync:(id)arg1;
- (_Bool)willHandleNotification_sync:(id)arg1;
- (void)handleCallTimersSave_sync:(id)arg1;
- (void)handleCallRecordSave_sync:(id)arg1;
- (void)resetTimers;
- (id)timerLifetime;
- (id)timerLastReset;
- (id)timerOutgoing;
- (id)timerIncoming;
- (id)updateAllCallRecords:(id)arg1;
- (id)updateCallRecords:(id)arg1;
- (_Bool)createCallRecords:(id)arg1;
- (void)createCallRecord:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (void)deleteAll;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchAll;
- (void)unRegisterForNotifications;
- (void)registerForNotifications;
- (id)init;
- (id)convertToCHRecentCalls_sync:(id)arg1;
- (void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2;
- (void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2;
- (unsigned int)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3;
- (void)parseCallStatus_sync:(unsigned int)arg1 isAnswered:(_Bool *)arg2 isOriginated:(_Bool *)arg3;

@end

