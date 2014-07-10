/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

// Not exported
@interface TSCHPieBodyLayoutItemPathCache : NSObject
{
    unsigned long long seriesIndex;
    struct CGPath *pathLayoutRelative;
    struct CGPath *pathTransformRelative;
    NSArray *pathSelectionKnobs;
    struct CGPoint wedgeCenterPoint;
    struct CGRect rootedLayoutRect;
}

@property(readonly, copy, nonatomic) NSArray *pathSelectionKnobs; // @synthesize pathSelectionKnobs;
@property(readonly, nonatomic) struct CGPath *pathTransformRelative; // @synthesize pathTransformRelative;
@property(readonly, nonatomic) struct CGPath *pathLayoutRelative; // @synthesize pathLayoutRelative;
@property(readonly, nonatomic) struct CGPoint wedgeCenterPoint; // @synthesize wedgeCenterPoint;
@property(readonly, nonatomic) struct CGRect rootedLayoutRect; // @synthesize rootedLayoutRect;
@property(readonly, nonatomic) unsigned long long seriesIndex; // @synthesize seriesIndex;
- (void)dealloc;
- (id)initWithSeriesIndex:(unsigned long long)arg1 rootedLayoutRect:(struct CGRect)arg2 wedgeCenterPoint:(struct CGPoint)arg3 pathLayoutRelative:(struct CGPath *)arg4 pathTransformRelative:(struct CGPath *)arg5 pathSelectionKnobs:(id)arg6;

@end

