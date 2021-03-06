/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol BBObserverServerInterface
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
@end

