/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class MPMediaQuery, NSArray, NSMutableArray;

@interface MPMediaQueryShuffledItems : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _activeShuffleType;
    _Bool _dirty;
    NSMutableArray *_orderedArray;
    MPMediaQuery *_sourceMediaQuery;
    NSArray *_sourceMediaQueryItems;
    struct _NSRange _focusedRange;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct _NSRange focusedRange; // @synthesize focusedRange=_focusedRange;
@property(readonly, nonatomic) MPMediaQuery *sourceMediaQuery; // @synthesize sourceMediaQuery=_sourceMediaQuery;
- (void).cxx_destruct;
- (void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned long long)arg1;
- (void)_resetCaches;
- (void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned long long)arg1;
- (void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned long long)arg1;
- (void)_rebuildCachesWithInitialSourceIndex:(unsigned long long)arg1;
- (void)_rebuildCaches;
- (id)_includeInShuffleItemsForQuery:(id)arg1;
- (void)unshuffle;
- (void)shuffleItemsWithInitialIndex:(unsigned long long)arg1;
- (void)shuffleAlbumsWithInitialIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *items;
- (void)invalidateSourceMediaQueryAndLoadItems;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 greaterThanOrEqualToIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfItemWithPersistentID:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithPersistentID:(unsigned long long)arg1 greaterThanOrEqualToIndex:(unsigned long long)arg2;
- (unsigned long long)count;
@property(readonly, nonatomic) unsigned long long realShuffleType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceMediaQuery:(id)arg1;
- (id)initWithSourceMediaQuery:(id)arg1 orderedItems:(id)arg2 shuffleType:(unsigned long long)arg3;

@end

