/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIPopoverBackgroundView.h"

@class NSMutableArray, UIColor, UIImageView, UIView, _MKCalloutBackgroundMaskView;

@interface MKCalloutBackgroundView : UIPopoverBackgroundView
{
    double _arrowOffset;
    unsigned long long _arrowDirection;
    UIView *_containerView;
    UIView *_baseBorderView;
    _MKCalloutBackgroundMaskView *_mainMaskView;
    NSMutableArray *_vendedMaskViews;
    unsigned long long _mapDisplayStyle;
    UIImageView *_currentArrowShadow;
}

+ (struct UIEdgeInsets)contentViewInsets;
+ (double)arrowHeight;
+ (double)arrowBase;
+ (_Bool)wantsDefaultContentAppearance;
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;
+ (void)setBeingCreatedForSmallCalloutController:(id)arg1;
@property(nonatomic) unsigned long long mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *calloutBackgroundColor;
- (void)_extendLeftRightArrow;
- (void)_retractUpDownArrow;
- (void)_showArrow;
- (void)_hideArrow;
- (void)setArrowDirection:(unsigned long long)arg1;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)arg1;
- (double)arrowOffset;
- (id)_shadowPath;
- (void)layoutSubviews;
- (void)_layoutMaskView:(id)arg1 withArrowShadow:(_Bool)arg2;
- (id)newMaskLayer;
- (void)_setupViews;
- (struct UIEdgeInsets)_contentViewInsets;
- (id)initWithFrame:(struct CGRect)arg1;

@end

