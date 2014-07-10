/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBObserverClientInterface-Protocol.h"
#import "BBObserverServerInterface-Protocol.h"

@class BBObserver, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface>
{
    _Bool _isValid;
    _Bool _isEstablished;
    BBObserver *_observerWeak;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)xpcInterface;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) BBObserver *observerWeak; // @synthesize observerWeak=_observerWeak;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1 inCategory:(long long)arg2;
- (void)updateSectionOrder:(id)arg1 forCategory:(long long)arg2;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withHandler:(id)arg3;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getPrivilegedSenderTypesWithHandler:(id)arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)arg1;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (void)getActiveAlertBehaviorOverridesWithHandler:(id)arg1;
- (void)getSectionInfoForCategory:(long long)arg1 withHandler:(id)arg2;
- (void)requestFutureBulletinsForSectionID:(id)arg1;
- (void)requestTodayBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)clearSection:(id)arg1;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)handleResponse:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (_Bool)established;
- (_Bool)isValid;
- (void)invalidate;
- (id)observer;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;

@end

