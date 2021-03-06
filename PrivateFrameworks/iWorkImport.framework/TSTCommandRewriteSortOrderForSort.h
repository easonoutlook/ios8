/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSTTableCommand.h>

#import "TSTTableFormulaUndoInfoEmitting-Protocol.h"
#import "TSTTableFormulaUndoInfoProvider-Protocol.h"

@class TSKShuffleMapping, TSTTableSortOrder;

// Not exported
@interface TSTCommandRewriteSortOrderForSort : TSTTableCommand <TSTTableFormulaUndoInfoProvider, TSTTableFormulaUndoInfoEmitting>
{
    TSKShuffleMapping *mMapping;
    TSTTableSortOrder *mOldSortOrder;
    TSTTableSortOrder *mNewSortOrder;
}

- (void)redo;
- (void)undo;
- (void)commit;
- (_Bool)process;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1 mapping:(id)arg2;

@end

