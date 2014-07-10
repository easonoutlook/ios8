/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

// Not exported
@interface NSRunStorage : NSObject <NSCopying>
{
    unsigned long long _count;
    unsigned long long _elementSize;
    unsigned long long _numBlocks;
    unsigned long long _maxBlocks;
    unsigned long long _indexDeltaStartBlock;
    long long _indexDelta;
    struct _NSRunBlock *_runs;
    unsigned long long _cachedBlock;
    struct _NSRange _cachedBlockRange;
    unsigned long long _gapBlockIndex;
}

+ (void)initialize;
+ (void)_setConsistencyCheckingEnabled:(_Bool)arg1 superCheckEnabled:(_Bool)arg2;
- (id)description;
- (void)removeElementsInRange:(struct _NSRange)arg1 coalesceRuns:(_Bool)arg2;
- (void)insertElement:(void *)arg1 range:(struct _NSRange)arg2 coalesceRuns:(_Bool)arg3;
- (void)replaceElementsInRange:(struct _NSRange)arg1 withElement:(void *)arg2 coalesceRuns:(_Bool)arg3;
- (void *)elementAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned long long)elementSize;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRunStorage:(id)arg1;
- (id)init;
- (id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void)_deallocData;
- (void)_reallocData:(unsigned long long)arg1;
- (void)_allocData:(unsigned long long)arg1;
- (void)_consistencyError:(long long)arg1 startAtZeroError:(_Bool)arg2 cacheError:(_Bool)arg3 inconsistentBlockError:(_Bool)arg4;
- (void)_consistencyCheck:(long long)arg1;
- (void)_moveGapAndMergeWithBlockRange:(struct _NSRange)arg1;
- (void)_moveGapToBlockIndex:(unsigned long long)arg1;
- (void)_ensureCapacity:(unsigned long long)arg1;

@end

