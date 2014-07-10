/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CallHistory/CHLogger.h>

@class CallDBManager, CallDBProperties, NSManagedObjectContext, NSString;

@interface CallHistoryDBHandle : CHLogger
{
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    CallDBProperties *fCallDBProperties;
    CallDBManager *callDBManager;
    NSString *objectId;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
}

+ (id)create;
+ (id)createWithDBManager:(id)arg1;
@property(readonly, nonatomic) CallDBManager *callDBManager; // @synthesize callDBManager;
@property(readonly, nonatomic) NSString *objectId; // @synthesize objectId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetTimers;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (id)timerIncoming;
- (_Bool)save;
- (void)handleCallRecordMergeConflicts:(id)arg1;
- (void)updateCallDBProperties;
- (void)deleteAll;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (id)createCallRecord;
- (id)fetchAll;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)postTimersChangedNotification;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (void)unRegisterForNotifications;
- (void)registerForNotifications:(id)arg1;
- (id)callRecordContext;
- (void)setCallDBProperties;
- (id)initWithDBManager:(id)arg1;

@end

