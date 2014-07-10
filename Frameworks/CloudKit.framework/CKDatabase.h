/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKContainer, NSOperationQueue;

@interface CKDatabase : NSObject
{
    int _statusReportToken;
    CKContainer *_container;
    long long _scope;
    NSOperationQueue *_operationQueue;
}

@property(nonatomic) int statusReportToken; // @synthesize statusReportToken=_statusReportToken;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)statusReport;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id)arg1;
- (void)clearAuthTokensForRecordWithID:(id)arg1;
- (void)clearRecordCache;
- (void)clearAssetCache;
- (void)deallocateAssetHandleWithUUID:(id)arg1;
- (void)allocateSaveAssetHandleWithUUID:(id)arg1 fileURL:(id)arg2 removeWhenDone:(_Bool)arg3;
- (id)daemonWithErrorHandler:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (void)dealloc;
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (id)init;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id)arg1;
- (void)fetchSubscriptionWithID:(id)arg1 completionHandler:(id)arg2;
- (void)deleteSubscriptionWithID:(id)arg1 completionHandler:(id)arg2;
- (void)saveSubscription:(id)arg1 completionHandler:(id)arg2;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(id)arg2;
- (void)saveRecordZone:(id)arg1 completionHandler:(id)arg2;
- (void)fetchRecordZoneWithID:(id)arg1 completionHandler:(id)arg2;
- (void)fetchAllRecordZonesWithCompletionHandler:(id)arg1;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(id)arg3;
- (void)deleteRecordWithID:(id)arg1 completionHandler:(id)arg2;
- (void)saveRecord:(id)arg1 completionHandler:(id)arg2;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(id)arg2;
- (void)_scheduleOperation:(id)arg1;

@end

