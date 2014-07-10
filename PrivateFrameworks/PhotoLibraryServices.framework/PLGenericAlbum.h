/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/_PLGenericAlbum.h>

#import "PLAlbumProtocol-Protocol.h"
#import "PLDerivedAlbumOrigin-Protocol.h"
#import "PLIndexMappersDataOrigin-Protocol.h"
#import "PLOrderKeyObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSObject<PLIndexMappingCache>, NSOrderedSet, NSString, NSURL, PLManagedAsset, PLPhotoLibrary, UIImage;

@interface PLGenericAlbum : _PLGenericAlbum <PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin, PLOrderKeyObject>
{
    _Bool _isSpecial;
    NSObject<PLIndexMappingCache> *_derivededAlbums[5];
    _Bool isRegisteredForChanges;
    _Bool didRegisteredWithUserInterfaceContext;
}

+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)albumsWithCloudGUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithCloudGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)allSyncedAlbumsInManagedObjectContext:(id)arg1;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (struct NSObject *)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)insertNewSyncedFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewFaceAlbumIntoLibrary:(id)arg1;
+ (id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewSyncedEventIntoLibrary:(id)arg1;
+ (id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewEventIntoLibrary:(id)arg1;
+ (id)insertNewEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)cloudAlbumsInLibrary:(id)arg1;
+ (id)albumsToResetInLibrary:(id)arg1;
+ (id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)trashBinAlbumInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)wallpaperAlbumInLibrary:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allFavoritesAlbumInLibrary:(id)arg1;
+ (id)allVideosAlbumInLibrary:(id)arg1;
+ (id)allHorizontalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allVerticalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allPanoramasAlbumInLibrary:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)cameraRollAlbumInLibrary:(id)arg1;
+ (id)rootFolderInLibrary:(id)arg1;
+ (id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)uuidFromGroupURL:(id)arg1;
+ (_Bool)isFolder:(int)arg1;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)localizedTitleForAlbumKind:(int)arg1;
+ (id)keyPathsForValuesAffectingName;
@property(nonatomic) _Bool didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property(nonatomic) _Bool isRegisteredForChanges; // @synthesize isRegisteredForChanges;
- (void)enumerateDerivedIndexMappers:(id)arg1;
- (_Bool)hasDerivedIndexMappers;
- (void)enumerateDerivedAlbums:(id)arg1;
- (void)unregisterAllDerivedAlbums;
- (void)registerDerivedAlbum:(struct NSObject *)arg1;
- (id)description;
- (id)_prettyDescription;
- (id)_compactDebugDescription;
- (id)_kindDescription;
- (void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
@property(readonly, copy, nonatomic) id sortingComparator;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isRootFolder;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) _Bool isStandInAlbum;
@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isRecentlyAddedAlbum;
@property(readonly, nonatomic) _Bool isCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isOwnPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isSmartAlbum;
@property(readonly, nonatomic) _Bool isWallpaperAlbum;
@property(readonly, nonatomic) _Bool isPanoramasAlbum;
@property(readonly, nonatomic) _Bool isCameraAlbum;
@property(readonly, nonatomic) _Bool isLibrary;
@property(nonatomic) int kindValue;
@property(readonly, retain, nonatomic) UIImage *posterImage;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(nonatomic) _Bool hasUnseenContentBoolValue;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) _Bool isEmpty;
- (unsigned long long)count;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(readonly, retain, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)applyTrashedState:(short)arg1;
- (void)_applyTrashedState:(short)arg1 date:(_Bool)arg2:(id)arg3;
- (_Bool)isInTrash;
- (_Bool)canMoveToTrash;
- (void)delete;
- (id)childKeyForOrdering;
- (id)newOrderKeyChild:(id)arg1;
- (id)sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (id)childToOrderKeyMap;
- (void)didSave;
- (id)childManagedObject;
- (id)secondaryOrderSortKey;
- (void)setIsSpecial:(_Bool)arg1;
- (_Bool)isSpecial;
- (void)setOrderValue:(long long)arg1;
- (long long)orderValue;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
- (void)setKind:(id)arg1;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(retain, nonatomic) NSString *title;
@property(nonatomic, getter=isPinned, setter=setPinned:) _Bool pinned;
@property(retain, nonatomic) NSString *uuid;
- (void)dealloc;
- (void)applyPropertiesFromAlbumChange:(id)arg1;
- (id)cplAlbumChange;
- (id)_itemIdentifier;

// Remaining properties
@property(readonly, retain, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property(retain, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(nonatomic) short cloudServerState; // @dynamic cloudServerState;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(retain, nonatomic) NSString *importSessionID; // @dynamic importSessionID;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @dynamic keyAsset;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets; // @dynamic mutableAssets;
@property(nonatomic) int pendingItemsCount; // @dynamic pendingItemsCount;
@property(nonatomic) int pendingItemsType; // @dynamic pendingItemsType;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset; // @dynamic secondaryKeyAsset;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset; // @dynamic tertiaryKeyAsset;
@property(retain, nonatomic) NSDate *trashedDate; // @dynamic trashedDate;
@property(nonatomic) short trashedState; // @dynamic trashedState;

@end

