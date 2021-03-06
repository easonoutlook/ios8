/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

@class NSMutableArray;

// Not exported
@interface TSTCellDiffMap : TSPObject
{
    vector_40b16ab8 _cellIDs;
    NSMutableArray *_cellDiffs;
}

+ (id)cellDiffMapWithContext:(id)arg1 andCapacity:(unsigned long long)arg2;
@property(readonly, nonatomic) NSMutableArray *cellDiffs; // @synthesize cellDiffs=_cellDiffs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)addCellDiff:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 andCapacity:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1;

@end

