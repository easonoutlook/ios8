/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSIndexSet, PHFetchResult;

@interface PHFetchResultChangeDetails : NSObject
{
    PHFetchResult *_fetchResultBeforeChanges;
    PHFetchResult *_fetchResultAfterChanges;
    NSArray *_previousItems;
    NSArray *_currentItems;
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray *_movedFromIndexes;
    NSArray *_changedItems;
    NSIndexSet *_changedIndexes;
    _Bool _skipIncrementalChanges;
}

+ (id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasDiffs;
- (void)calculateDiffs;
- (id)_oidsForPHObjects:(id)arg1;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;
@property(readonly) _Bool hasMoves;
- (void)enumerateMovesWithBlock:(id)arg1;
@property(readonly) NSArray *changedObjects;
@property(readonly) NSIndexSet *changedIndexes;
@property(readonly) NSArray *insertedObjects;
@property(readonly) NSIndexSet *insertedIndexes;
@property(readonly) NSArray *removedObjects;
@property(readonly) NSIndexSet *removedIndexes;
- (id)currentItems;
@property(readonly) PHFetchResult *fetchResultAfterChanges;
@property(readonly) PHFetchResult *fetchResultBeforeChanges;
@property(readonly) _Bool hasIncrementalChanges;
- (_Bool)shouldReload;
- (id)initWithManualFetchResultAfterChanges:(id)arg1;
- (id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedItems:(id)arg3;

@end

