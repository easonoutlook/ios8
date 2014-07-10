/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicQueryDataSource.h>

@class NSCache, NSObject<OS_dispatch_queue>;

@interface MusicPlaylistsDataSource : MusicQueryDataSource
{
    _Bool _hasParentPlaylist;
    NSCache *_cachedDurations;
    NSCache *_cachedCounts;
    NSCache *_cachedRepresentativeItems;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

- (void).cxx_destruct;
- (void)_breadthFirstVisitNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitor:(id)arg2;
- (void)_bfsNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitedPlaylistPIDs:(id)arg2 stop:(_Bool *)arg3 visitor:(id)arg4;
- (id)_representativePlaylistForEntityAtIndex:(unsigned long long)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (_Bool)showsIndexBar;
- (_Bool)showsEntityCountFooter;
- (id)entityCountFormat;
- (void)_invalidateCalculatedEntities;
- (_Bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;
- (void)resetCaches;
- (id)representativeItemForEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)countForEntityAtIndex:(unsigned long long)arg1;
- (double)durationForEntityAtIndex:(unsigned long long)arg1;
- (id)cachedRepresentativeItemForEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)cachedCountForEntityAtIndex:(unsigned long long)arg1;
- (double)cachedDurationForEntityAtIndex:(unsigned long long)arg1;
- (_Bool)isFolderForEntityAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;

@end

