/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

@class NSString, TSTEditingState, TSTTableInfo;

// Not exported
@interface TSTTableCommand : TSKCommand
{
    NSString *mCommandName;
    TSTTableInfo *mTableInfo;
    _Bool mShouldRunSynchronously;
    int mEditingModeAtStart;
}

- (void)endActiveTextEditingSession;
- (void)simpleApplyCellMap:(id)arg1;
- (void)applyCellMap:(id)arg1 inCellRegion:(id)arg2 majorDirection:(int)arg3;
- (void)applyCellMap:(id)arg1 inCellRegion:(id)arg2;
- (void)applyCellMap:(id)arg1 inCellRange:(CDStruct_5f1f7aa9)arg2 majorDirection:(int)arg3;
- (void)applyCellMap:(id)arg1 inCellRange:(CDStruct_5f1f7aa9)arg2;
- (void)applyRedoCellMap:(id)arg1 inCellRegion:(id)arg2 defaultCells:(struct _TSTDefaultCellBlock *)arg3;
- (void)applyUndoCellMap:(id)arg1 inCellRegion:(id)arg2 defaultCells:(struct _TSTDefaultCellBlock *)arg3;
- (void)applyRedoCellMap:(id)arg1 inCellRange:(CDStruct_5f1f7aa9)arg2 defaultCells:(struct _TSTDefaultCellBlock *)arg3;
- (void)applyUndoCellMap:(id)arg1 inCellRange:(CDStruct_5f1f7aa9)arg2 defaultCells:(struct _TSTDefaultCellBlock *)arg3;
- (void)p_applyCellMap:(id)arg1 inCellRegion:(id)arg2 majorDirection:(int)arg3 defaultCells:(struct _TSTDefaultCellBlock *)arg4 isUndo:(_Bool)arg5;
- (void)applyCellDiffMap:(id)arg1;
- (id)applyCellDiff:(id)arg1 inCellRegion:(id)arg2;
@property(readonly, nonatomic) TSTEditingState *editingState;
- (id)tableModel;
- (void)redo;
- (void)undo;
- (void)commitWork;
- (void)commit;
- (id)actionString;
- (_Bool)shouldRunSynchronously;
- (void)setShouldRunSynchronously:(_Bool)arg1;
- (void)dealloc;
- (void)saveToArchive:(struct TableCommandArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct TableCommandArchive *)arg1 unarchiver:(id)arg2;
- (id)tableInfo;
- (id)initWithName:(id)arg1 tableInfo:(id)arg2 context:(id)arg3;

@end

