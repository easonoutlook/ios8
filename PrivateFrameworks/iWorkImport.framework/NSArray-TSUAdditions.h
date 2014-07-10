/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSArray.h"

@interface NSArray (TSUAdditions)
+ (id)arrayWithUIntegers:(unsigned long long *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithInts:(int *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithCGFloats:(double *)arg1 count:(unsigned long long)arg2;
- (id)uniqueObjects;
- (id)arrayByFlattening;
- (id)arrayByTransformingWithBlock:(id)arg1;
- (id)arrayOfObjectsPassingTest:(id)arg1;
- (id)firstObjectPassingTest:(id)arg1;
- (void)enumerateSnapshotObjectsUsingBlock:(id)arg1;
- (id)arrayByReversingOrder;
- (id)arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)intersectionWithArray:(id)arg1;
- (id)arrayWithObjectsInSet:(id)arg1;
- (id)indexesOfObjects:(id)arg1;
- (unsigned long long)indexOfSmallestObject;
- (id)rangeCheckedObjectAtIndex:(unsigned long long)arg1;
- (id)initWithUIntegers:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)initWithInts:(int *)arg1 count:(unsigned long long)arg2;
- (id)initWithCGFloats:(double *)arg1 count:(unsigned long long)arg2;
@end

