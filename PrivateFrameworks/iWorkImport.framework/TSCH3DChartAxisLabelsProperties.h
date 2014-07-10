/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSCH3DLabelResources, TSCHChartInfo, TSCHSelectionPath, TSULRUCache;

// Not exported
@interface TSCH3DChartAxisLabelsProperties : NSObject
{
    TSCHChartInfo *mInfo;
    TSCH3DLabelResources *mLabels;
    unsigned long long mStyleIndex;
    TSCHSelectionPath *mSelectionPath;
    _Bool mHidden;
    TSULRUCache *mCategoryStridingCache;
    float mCachedTextFactor;
}

+ (id)propertiesWithInfo:(id)arg1 labels:(id)arg2 styleIndex:(unsigned long long)arg3;
@property(nonatomic) float cachedTextFactor; // @synthesize cachedTextFactor=mCachedTextFactor;
@property(readonly, nonatomic) TSULRUCache *categoryStridingCache; // @synthesize categoryStridingCache=mCategoryStridingCache;
@property(nonatomic) _Bool hidden; // @synthesize hidden=mHidden;
@property(retain, nonatomic) TSCHSelectionPath *selectionPath; // @synthesize selectionPath=mSelectionPath;
@property(readonly, nonatomic) unsigned long long styleIndex; // @synthesize styleIndex=mStyleIndex;
@property(readonly, nonatomic) TSCHChartInfo *info; // @synthesize info=mInfo;
@property(readonly, nonatomic) TSCH3DLabelResources *labels; // @synthesize labels=mLabels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 labels:(id)arg2 styleIndex:(unsigned long long)arg3;

@end

