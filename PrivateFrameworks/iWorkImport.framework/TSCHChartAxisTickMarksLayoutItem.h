/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHChartLayoutItem.h>

// Not exported
@interface TSCHChartAxisTickMarksLayoutItem : TSCHChartLayoutItem
{
}

- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (struct CGRect)calcDrawingRect;
- (struct CGRect)p_effectiveRootedLayoutRect;
- (struct CGSize)calcMinSize;
- (int)location;
@property(readonly, nonatomic) float minorTickmarkLength;
@property(readonly, nonatomic) float majorTickmarkLength;
- (id)initWithParent:(id)arg1;

@end

