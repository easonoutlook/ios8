/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BBObserverClientProxy, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_source>, NSString;

@interface BBObserverGatewayHolder : NSObject
{
    NSMutableSet *_observersByFeed[9];
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableArray *_timeouts;
    _Bool _didHandleObservers;
    BBObserverClientProxy *_gateway;
    unsigned long long _gatewayPriority;
    unsigned long long _feed;
    NSString *_name;
}

@property(nonatomic) _Bool didHandleObservers; // @synthesize didHandleObservers=_didHandleObservers;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long feed; // @synthesize feed=_feed;
@property(nonatomic) unsigned long long gatewayPriority; // @synthesize gatewayPriority=_gatewayPriority;
@property(retain, nonatomic) BBObserverClientProxy *gateway; // @synthesize gateway=_gateway;
- (void)dealloc;
- (void)sendAddBulletinToObservers:(id)arg1 bulletinID:(id)arg2 feeds:(unsigned long long)arg3 shouldPlayLightsAndSirens:(_Bool)arg4;
- (void)sendAddBulletin:(id)arg1 bulletinID:(id)arg2 feeds:(unsigned long long)arg3 shouldPlayLightsAndSirens:(_Bool)arg4 timeout:(double)arg5 handler:(id)arg6;
- (id)_addTimeout:(double)arg1 handler:(id)arg2;
- (void)_handleTimeout;
- (_Bool)_invalidateTimeout:(id)arg1;
- (void)_startNextTimer;
- (void)sendAddBulletin:(id)arg1 bulletinID:(id)arg2 feeds:(unsigned long long)arg3 shouldPlayLightsAndSirens:(_Bool)arg4;
- (id)initWithQueue:(id)arg1 name:(id)arg2;

@end

