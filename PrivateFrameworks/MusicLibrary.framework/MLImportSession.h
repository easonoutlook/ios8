/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseConnection, ML3ImportPersistentIDGenerator, ML3MusicLibrary, ML3SortMap, MLDStatementAccumulator, NSCache, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface MLImportSession : NSObject
{
    ML3DatabaseConnection *_readerConnection;
    MLDStatementAccumulator *_accumulator;
    ML3SortMap *_sortMap;
    struct unordered_map<long long, ML3CollectionPIDSet, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, ML3CollectionPIDSet>>> collectionPIDSetForTrackPID;
    NSMutableSet *_albumPIDsToRecomputeAlbumYear;
    struct {
        unsigned int addCount;
        unsigned int updateCount;
        unsigned int deleteCount;
        double importStartTime;
    } _stats;
    int _sourceType;
    _Bool _rebuildIndexes;
    _Bool _rebuildCollections;
    ML3ImportPersistentIDGenerator *_persistentIDGenerator;
    NSMutableDictionary *_persistentIdHintMap;
    NSCache *_artistPIDsForGroupingKeys;
    NSCache *_albumArtistPIDsForGroupingKeys;
    NSCache *_composerPIDsForGroupingKeys;
    NSCache *_genrePIDsForGroupingKeys;
    NSCache *_albumDataForGroupingIdentifier;
    struct vector<MLRowDataSource *, std::__1::allocator<MLRowDataSource *>> _rowDataSources;
    ML3MusicLibrary *_library;
    ML3DatabaseConnection *_connection;
    NSDictionary *_cachedNameOrders;
}

@property(retain, nonatomic) NSDictionary *cachedNameOrders; // @synthesize cachedNameOrders=_cachedNameOrders;
@property(retain, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_populateNameOrderWithNameOrderForPIDMap:(unordered_map_0a3fc58b *)arg1 tableName:(id)arg2 nameSQL:(id)arg3;
- (long long)_locationKindPIDForTrack:(id)arg1;
- (long long)_genrePIDForTrack:(id)arg1;
- (long long)_composerPIDForTrack:(id)arg1;
- (long long)_albumPIDForTrack:(id)arg1 albumArtistPID:(long long)arg2 isUpdate:(_Bool)arg3;
- (id)_existingAlbumStateForGroupingIdentifier:(id)arg1;
- (id)_albumGroupingIdentifierWithAlbumArtistPersistentID:(long long)arg1 withTrack:(id)arg2;
- (long long)_albumArtistPIDForTrack:(id)arg1 isUpdate:(_Bool)arg2;
- (id)_existingAlbumArtistForGroupingKey:(id)arg1;
- (long long)_artistPIDForTrack:(id)arg1 isUpdate:(_Bool)arg2;
- (id)_existingArtistPidForGroupingKey:(id)arg1;
- (id)_insertIntoGenreSQL;
- (id)_insertIntoComposerSQL;
- (id)_insertIntoAlbumSQL;
- (id)_insertIntoAlbumArtistSQL;
- (id)_insertIntoItemArtistSQL;
- (id)_generateInsertionSQLWithInsertPart:(id)arg1 numberOfValues:(unsigned long long)arg2;
- (id)_existingCollectionPidForTable:(id)arg1 groupingKey:(id)arg2;
- (id)_genreGroupingNameFromDataSource:(id)arg1;
- (id)_composerGroupingNameFromDataSource:(id)arg1;
- (id)_albumArtistGroupingNameFromDataSource:(id)arg1;
- (id)_artistGroupingNameFromDataSource:(id)arg1;
- (long long)persistentIdentifierForItem:(id)arg1 existing:(_Bool *)arg2;
- (_Bool)updateCollectionRepresentativePIDs;
- (_Bool)updateEntityRevisionTable;
- (_Bool)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2;
- (_Bool)finish;
- (_Bool)removeTrack:(id)arg1;
- (_Bool)_prepareCollectionsForTrack:(id)arg1 isUpdate:(_Bool)arg2;
- (_Bool)_prepareSortDataForTrack:(id)arg1 isUpdate:(_Bool)arg2;
- (_Bool)_updateTrackData:(id)arg1 isUpdate:(_Bool)arg2;
- (_Bool)updateTrack:(id)arg1;
- (_Bool)addTrack:(id)arg1;
- (_Bool)begin:(unsigned long long)arg1;
- (_Bool)begin;
- (CDStruct_bd6d074e)collectionPIDSetForTrackPID:(long long)arg1;
- (void)dealloc;
- (void)addPersistentIdMapping:(id)arg1 forProperty:(unsigned int)arg2;
- (id)initWithLibrary:(id)arg1 onConnection:(id)arg2;

@end

