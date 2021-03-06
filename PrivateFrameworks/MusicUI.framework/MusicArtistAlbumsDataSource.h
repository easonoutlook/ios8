/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicQueryDataSource.h>

@class NSArray, NSMutableDictionary;

@interface MusicArtistAlbumsDataSource : MusicQueryDataSource
{
    NSArray *_sectionEntities;
    NSMutableDictionary *_sectionRanges;
}

- (void).cxx_destruct;
- (void)_invalidateCalculatedEntities;
- (_Bool)usesSections;
- (_Bool)showsIndexBar;
- (void)removeOverlayCompletionForSectionAtIndex:(unsigned long long)arg1;
- (void)overlayCompletionForSectionAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;
- (_Bool)shouldShowCompletions;
- (_Bool)shouldAutomaticallyLoadCompletions;
- (unsigned long long)numberOfSections;
- (id)sectionEntities;
- (id)entities;

@end

