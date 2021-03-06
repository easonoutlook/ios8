/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAssetChangeObserver-Protocol.h"
#import "PLCloudFeedEntriesObserver-Protocol.h"
#import "PLPhotoLibraryShouldReloadObserver-Protocol.h"

@class NSMutableArray, NSOrderedSet, PLPhotoLibrary;

@interface PUFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver>
{
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
    PLPhotoLibrary *_photoLibrary;
    long long _count;
    id <PUFeedRecentsManagerDelegate> _delegate;
    NSOrderedSet *__cachedRecentAssets;
}

@property(copy, nonatomic, setter=_setCachedRecentAssets:) NSOrderedSet *_cachedRecentAssets; // @synthesize _cachedRecentAssets=__cachedRecentAssets;
@property(nonatomic) __weak id <PUFeedRecentsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setCount:(long long)arg1;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void)_setPhotoLibrary:(id)arg1;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void).cxx_destruct;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)shouldReload:(id)arg1;
- (void)assetsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)_invalidateCachedRecentAssets;
- (_Bool)_updateCachedRecentAssets;
@property(readonly, copy, nonatomic) NSOrderedSet *recentAssets;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1 count:(long long)arg2;

@end

