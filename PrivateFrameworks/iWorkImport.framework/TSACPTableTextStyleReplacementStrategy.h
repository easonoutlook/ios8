/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSACPTextStyleReplacementStrategy.h>

@class TSTTableStylePreset;

// Not exported
@interface TSACPTableTextStyleReplacementStrategy : TSACPTextStyleReplacementStrategy
{
    TSTTableStylePreset *mRootPreset;
}

@property(readonly, nonatomic) TSTTableStylePreset *rootPreset; // @synthesize rootPreset=mRootPreset;
- (void)populateStyleReplacements:(id)arg1 forParagraphStyle:(id)arg2 listStyle:(id)arg3 parIndex:(unsigned long long)arg4;
- (void)dealloc;
- (id)initWithChangePropagationVisitor:(id)arg1 storage:(id)arg2 rootTableStylePreset:(id)arg3 forLockedObject:(_Bool)arg4;

@end

