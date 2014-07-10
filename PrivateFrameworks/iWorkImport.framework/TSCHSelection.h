/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKSelection.h>

#import "NSCopying-Protocol.h"

@class NSArray, TSCHChartDrawableInfo, TSCHSelectionPath;

// Not exported
@interface TSCHSelection : TSKSelection <NSCopying>
{
    TSCHChartDrawableInfo *mInfo;
    NSArray *mPaths;
}

+ (Class)archivedSelectionClass;
@property(readonly, copy, nonatomic) NSArray *paths; // @synthesize paths=mPaths;
@property(readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo; // @synthesize chartInfo=mInfo;
- (void)saveToArchive:(struct ChartSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct ChartSelectionArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) TSCHSelectionPath *firstPath;
@property(readonly, nonatomic) _Bool returnChartFrameForAutoscroll;
- (void)dealloc;
- (id)init;
- (id)initWithChartInfo:(id)arg1 path:(id)arg2;
- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;

@end

