/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPMediaLibraryDataProvider-Protocol.h"

@class NSArray, NSString;

@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>

@optional
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property(readonly, nonatomic) NSArray *preferredSubtitleLanguages;
@property(readonly, nonatomic) NSArray *preferredAudioLanguages;
@property(readonly, nonatomic) _Bool isGeniusEnabled;
@property(readonly, nonatomic) NSString *databasePath;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (void)updateEntitesToCurrentRevision;
- (_Bool)supportsEntityChangeTrackingForMediaEntityType:(unsigned long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class *)arg3;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2;
- (void)releaseGeniusClusterPlaylist:(void *)arg1;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned long long *)arg2 error:(id *)arg3;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsWithIdentifiers:(long long *)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)addItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (_Bool)removePlaylistWithIdentifier:(long long)arg1;
- (_Bool)removeItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 hideFromPurchaseHistory:(_Bool)arg3;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(id)arg5;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (_Bool)isCurrentThreadInTransaction;
- (void)performReadTransactionWithBlock:(id)arg1;
- (_Bool)performTransactionWithBlock:(id)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (_Bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long *)arg4;
- (_Bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (_Bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)hasUbiquitousBookmarkableItems;
- (_Bool)hasGeniusMixes;
- (_Bool)hasMediaOfType:(unsigned long long)arg1;
- (id)lastModifiedDate;
@end

