/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSPointerArray;

// Not exported
@interface TSTStrokeLayerStack : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
    NSPointerArray *_strokeLayers;
    long long _stackKind;
    long long _type;
    long long _maxStrokeIndex;
}

+ (double)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 inRange:(struct TSTSimpleRange)arg3;
+ (double)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 inRange:(struct TSTSimpleRange)arg3;
+ (id)mergeLeftStrokes:(id)arg1 withRightStrokes:(id)arg2;
+ (id)mergeTopStrokes:(id)arg1 withBottomStrokes:(id)arg2;
+ (id)strokeLayerStackWithStackKind:(long long)arg1 andStrokeLayer:(id)arg2 atLayerIndex:(long long)arg3;
+ (id)strokeLayerStackWithStackKind:(long long)arg1;
@property(nonatomic) long long maxStrokeIndex; // @synthesize maxStrokeIndex=_maxStrokeIndex;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long stackKind; // @synthesize stackKind=_stackKind;
@property(retain, nonatomic) NSPointerArray *strokeLayers; // @synthesize strokeLayers=_strokeLayers;
- (void)unlock;
- (void)lockForWrite;
- (void)lockForRead;
- (void)p_invalidateStrokesAtLayerIndex:(long long)arg1;
- (void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange)arg1 usingBlock:(id)arg2;
- (void)enumerateStrokesAndCapsFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange)arg1 usingBlock:(id)arg2;
- (void)enumerateStrokesFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3;
- (id)lookupStrokeAtIndex:(long long)arg1;
- (void)invalidateStrokesAtLayerIndex:(long long)arg1 atRange:(struct TSTSimpleRange)arg2;
- (void)invalidateStrokesAtLayerIndex:(long long)arg1;
- (_Bool)replaceStrokeLayerAtLayerIndex:(long long)arg1 withStrokeLayer:(id)arg2;
- (void)insertStroke:(id)arg1 atRange:(struct TSTSimpleRange)arg2 atLayerIndex:(long long)arg3;
- (void)dealloc;
- (id)initMergedCopyWithMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;
- (id)initWithStackKind:(long long)arg1;

@end

