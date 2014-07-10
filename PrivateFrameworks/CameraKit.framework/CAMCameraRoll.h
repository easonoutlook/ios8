/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableSet, PHAssetCollection, PHFetchResult;

@interface CAMCameraRoll : NSObject
{
    _Bool _changeNotificationsEnabled;
    _Bool __weakAssetCollectionLoaded;
    _Bool __hasPendingInflightAssets;
    NSDate *_sessionIdentifier;
    PHFetchResult *__weakAssetCollectionFetchResult;
    PHAssetCollection *__weakAssetCollection;
    NSMutableSet *__cachedChangeObservers;
    NSMutableSet *__inflightAssetUUIDs;
}

+ (id)sharedCameraRoll;
@property(readonly, nonatomic) _Bool _hasPendingInflightAssets; // @synthesize _hasPendingInflightAssets=__hasPendingInflightAssets;
@property(readonly, nonatomic) NSMutableSet *_inflightAssetUUIDs; // @synthesize _inflightAssetUUIDs=__inflightAssetUUIDs;
@property(readonly, nonatomic) NSMutableSet *_cachedChangeObservers; // @synthesize _cachedChangeObservers=__cachedChangeObservers;
@property(readonly, nonatomic) PHAssetCollection *_weakAssetCollection; // @synthesize _weakAssetCollection=__weakAssetCollection;
@property(readonly, nonatomic) PHFetchResult *_weakAssetCollectionFetchResult; // @synthesize _weakAssetCollectionFetchResult=__weakAssetCollectionFetchResult;
@property(readonly, nonatomic, getter=_isWeakAssetCollectionLoaded) _Bool _weakAssetCollectionLoaded; // @synthesize _weakAssetCollectionLoaded=__weakAssetCollectionLoaded;
@property(nonatomic) _Bool changeNotificationsEnabled; // @synthesize changeNotificationsEnabled=_changeNotificationsEnabled;
@property(readonly, nonatomic) NSDate *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (_Bool)isCameraSessionActive;
- (_Bool)updateFromChanges:(id)arg1;
- (void)_removeAllInflightAssets;
- (void)_removeInflightAssets:(id)arg1;
- (void)addInflightAsset:(id)arg1;
- (id)_inflightLocalIdentifiers;
- (void)_ensureFetchedInflightAssets;
- (void)removeChangeNotificationsObserver:(id)arg1;
- (void)addChangeNotificationsObserver:(id)arg1;
- (void)_unregisterAllObjectsForChangeNotifications;
- (void)_unregisterChangeNotificationObserver:(id)arg1;
- (void)_registerAllChangeNotificationObservers;
- (void)_registerChangeNotificationObserver:(id)arg1;
- (id)album;
- (id)fetchResultContainingAssetCollection;
- (id)realizedWeakAssetCollection;
- (void)_ensureWeakAssetCollection;
- (void)_invalidateAssetCollection;
- (void)_updateWeakAlbumChangeNotificationsState;
- (void)finishSession;
- (void)startNewSession;
- (void)startNewSessionWithIdentifier:(id)arg1;
- (void)_updateWeakAssetCollectionFromSessionChange;
- (void)dealloc;
- (id)init;

@end

