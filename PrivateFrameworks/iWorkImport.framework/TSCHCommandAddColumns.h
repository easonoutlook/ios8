/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHChartCommand.h>

@class NSArray, NSString;

// Not exported
@interface TSCHCommandAddColumns : TSCHChartCommand
{
    struct _NSRange mColumnRange;
    NSString *mColumnName;
    NSArray *mColumnIds;
}

- (id).cxx_construct;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 columnRange:(struct _NSRange)arg2 columnName:(id)arg3 columnIds:(id)arg4;
- (id)initWithChartInfo:(id)arg1 columnRange:(struct _NSRange)arg2 columnName:(id)arg3;

@end

