/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAssetChangeObserver-Protocol.h"
#import "PLCloudCommentsChangeObserver-Protocol.h"
#import "PLCloudFeedEntriesObserver-Protocol.h"
#import "PLPhotoLibraryShouldReloadObserver-Protocol.h"

@class NSDate, NSMapTable, NSMutableArray, PLPhotoLibrary;

@interface PUFeedSectionInfosManager : NSObject <PLCloudFeedEntriesObserver, PLCloudCommentsChangeObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver>
{
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_sectionInfos;
    NSMapTable *_sectionInfosByCloudFeedEntry;
    NSDate *_earliestDate;
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingCommentsChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
    id <PUFeedSectionInfosManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <PUFeedSectionInfosManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_sectionInfoSortingComparator;
- (void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3;
- (_Bool)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)shouldReload:(id)arg1;
- (void)assetsDidChange:(id)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)_getEarliestDate:(out id *)arg1 mostRecentEntries:(out id *)arg2 forBatchWithLatestDate:(id)arg3;
- (void)_rebuildSectionInfos;
- (id)indexesOfInvitationsReceivedSectionInfos;
- (long long)numberOfInvitationsReceived;
- (void)loadSectionInfosAtIndexes:(id)arg1;
- (id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg1;
- (long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1;
- (id)sectionInfoWithIdentifier:(id)arg1;
- (long long)indexOfSectionInfo:(id)arg1;
- (id)sectionInfosAtIndexes:(id)arg1;
- (id)sectionInfoAtIndex:(long long)arg1;
- (_Bool)hasEnoughCloudFeedAssetEntriesToDisplay;
- (long long)numberOfSectionInfos;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

@end

