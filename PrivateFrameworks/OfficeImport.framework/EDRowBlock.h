/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface EDRowBlock : NSObject
{
    struct __CFData *mPackedData;
    struct __CFData *mCellOffsets;
}

+ (id)rowBlock;
- (struct EDCellHeader *)addCellWithColumnNumber:(unsigned int)arg1 type:(int)arg2 isFormulaCell:(_Bool)arg3 rowInfo:(struct EDRowInfo **)arg4 rowBlocks:(id)arg5;
- (struct EDRowInfo *)addRowInfoWithRowNumber:(unsigned int)arg1 cellCountHint:(unsigned int)arg2;
- (struct EDCellHeader *)cellWithColumnNumber:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;
- (unsigned int)indexOfCellWithColumnNumber:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;
- (unsigned int)expectedIndexOfCellWithColumnNumber:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;
- (struct EDCellHeader *)cellAtIndex:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;
- (struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg1 createIfNil:(_Bool)arg2;
- (struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg1;
- (unsigned int)indexOfRowInfoWithRowNumber:(unsigned int)arg1;
- (struct EDRowInfo *)rowInfoAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int maxRowNumber;
@property(readonly, nonatomic) unsigned int minRowNumber;
@property(readonly, nonatomic) unsigned int lastRowNumber;
@property(readonly, nonatomic) unsigned int firstRowNumber;
@property(readonly, nonatomic) unsigned int rowCount;
- (void)doneWithContent;
- (void)dealloc;
- (id)init;
- (void)checkCellOffsetOrThrow:(unsigned long long)arg1;
- (unsigned long long)startOfCellsOrThrow;
- (void)removeCellAtIndex:(unsigned int)arg1 rowInfo:(struct EDRowInfo **)arg2;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;
- (void)incrementIndex;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)index;

@end

