/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BSBaseXPCClient.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BKSApplicationDataStoreRepositoryClient : BSBaseXPCClient
{
    NSMutableDictionary *_prefetchedKeyCounts;
    NSMutableDictionary *_prefetchedKeyValues;
    NSMutableDictionary *_pendingChangesToPrefetchedKeys;
    NSObject<OS_dispatch_queue> *_prefetchedDataQueue;
}

- (void)fireCompletion:(id)arg1 arrayResults:(void)arg2 error:(id)arg3;
- (void)fireCompletion:(id)arg1 result:(void)arg2 error:(id)arg3;
- (void)fireCompletion:(id)arg1 error:(void)arg2;
- (id)clientCallbackQueue;
- (void)_sendMessageType:(int)arg1 withMessage:(id)arg2 withReplyHandler:(void)arg3 waitForReply:(id)arg4;
- (_Bool)_prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id *)arg3;
- (void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3;
- (void)_handleStoreInvalidated:(id)arg1;
- (id)_allPrefetchedChangesInFlightForApplication:(id)arg1;
- (_Bool)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2;
- (void)_setChangeInFlight:(_Bool)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3;
- (void)_handleValueChanged:(id)arg1;
- (void)queue_handleMessage:(id)arg1;
- (void)queue_connectionWasCreated;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(id)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(id)arg4;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(id)arg3 checkPrefetch:(void)arg4;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(id)arg3;
- (void)availableDataStores:(id)arg1;
- (void)synchronizeWithCompletion:(id)arg1;
- (void)_sendPrefetchedKeys:(id)arg1 withCompletion:(id)arg2;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(id)arg2;
- (void)addPrefetchedKeys:(id)arg1 withCompletion:(id)arg2;
- (void)dealloc;
- (void)invalidate;
- (id)initWithEndpoint:(id)arg1;
- (id)init;

@end

