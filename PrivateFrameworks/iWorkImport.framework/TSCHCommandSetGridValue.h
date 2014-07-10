/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHChartCommand.h>

// Not exported
@interface TSCHCommandSetGridValue : TSCHChartCommand
{
    unsigned long long mRowIndex;
    unsigned long long mColumnIndex;
    id <TSCHChartGridValue> mOldValue;
    id <TSCHChartGridValue> mNewValue;
}

- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (_Bool)process;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3 value:(id)arg4;

@end

