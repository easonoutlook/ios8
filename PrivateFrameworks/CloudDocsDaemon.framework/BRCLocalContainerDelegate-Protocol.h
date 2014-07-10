/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol BRCLocalContainerDelegate <NSObject>
- (void)containerDidBecomeBackground:(id)arg1;
- (void)containerDidBecomeForeground:(id)arg1;
- (void)didInitialSyncDownForContainer:(id)arg1;
- (void)willInitialSyncDownForContainer:(id)arg1;
- (void)endWriteCoordinationInContainer:(id)arg1;
- (_Bool)startWriteCoordinationInContainer:(id)arg1;
- (void)endReadCoordinationInContainer:(id)arg1;
- (_Bool)startReadCoordinationInContainer:(id)arg1;
- (void)didMarkItemNeedsUploadInContainer:(id)arg1 oldState:(unsigned int)arg2 newState:(unsigned int)arg3;
- (void)didMarkItemNeedsDownloadInContainer:(id)arg1 oldState:(unsigned int)arg2 newState:(unsigned int)arg3;
- (void)didChangeApplyChangesStatusForContainer:(id)arg1;
- (void)didChangeThrottleStatusForContainer:(id)arg1 now:(unsigned long long)arg2;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)didChangeSyncStatusForContainer:(id)arg1;
- (void)didChangeReaderStatusForContainer:(id)arg1;
- (void)didChangeLostScanStatusForContainer:(id)arg1;
@end

