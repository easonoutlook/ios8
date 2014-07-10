/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol BRProtocol
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(id)arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(id)arg3;
- (void)computePurgableSpaceWithUrgency:(int)arg1 reply:(id)arg2;
- (void)getPublishedURLForItemAtURL:(id)arg1 reply:(id)arg2;
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(id)arg2;
- (void)getBookmarkDataForURL:(id)arg1 reply:(id)arg2;
- (void)getContainersNeedingUpload:(id)arg1;
- (void)currentAccountCopyTokenWithBundleID:(id)arg1 version:(id)arg2 reply:(id)arg3;
- (void)currentAccountLogoutWithReply:(id)arg1;
- (void)currentAccountCreateWithID:(id)arg1 reply:(id)arg2;
- (void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(id)arg3;
- (oneway void)bundleDidAccessExternalDocument:(id)arg1;
- (void)addExternalDocumentReferenceTo:(id)arg1 forPid:(int)arg2 inContainer:(id)arg3 underParent:(id)arg4 reply:(id)arg5;
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(id)arg2;
- (void)getTotalApplicationDocumentUsageWithReply:(id)arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 reply:(id)arg3;
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(id)arg2;
- (void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(id)arg3;
- (void)getNotificationInfoAtURL:(id)arg1 reply:(id)arg2;
- (void)thumbnailChangedForItemAtURL:(id)arg1 reply:(id)arg2;
- (void)evictItemAtURL:(id)arg1 reply:(id)arg2;
- (void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 reply:(id)arg3;
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(id)arg2;
- (oneway void)updateContainerMetadataForID:(id)arg1 properties:(id)arg2 bundleIcons:(id)arg3;
- (void)getContainerURLForID:(id)arg1 forPid:(int)arg2 reply:(id)arg3;
- (oneway void)checkinAskClientIfUsingUbiquity:(_Bool)arg1;
- (void)waitForFileSystemChangeProcessingWithReply:(id)arg1;
- (void)getContainersByIDWithReply:(id)arg1;
- (void)forceSyncContainerID:(id)arg1 reply:(id)arg2;
- (oneway void)log:(const char *)arg1 function:(const char *)arg2 source:(const char *)arg3 line:(int)arg4 message:(id)arg5;
- (void)gatherInformationForPath:(id)arg1 reply:(id)arg2;
- (void)printStatus:(id)arg1 reply:(id)arg2;
- (void)performSelfCheck:(id)arg1 reply:(id)arg2;
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 reply:(id)arg3;
- (void)setupInstanceWithDict:(id)arg1 reply:(id)arg2;
@end

