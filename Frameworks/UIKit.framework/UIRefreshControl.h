/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class NSAttributedString, UIColor, UIScrollView, _UIRefreshControlContentView;

@interface UIRefreshControl : UIControl
{
    long long _style;
    _UIRefreshControlContentView *_contentView;
    UIScrollView *_scrollView;
    double _refreshControlHeight;
    double _visibleHeight;
    double _snappingHeight;
    double _additionalTopInset;
    _Bool _insetsApplied;
    _Bool _adjustingInsets;
    struct UIEdgeInsets _appliedInsets;
    int _refreshControlState;
}

+ (Class)_contentViewClassForStyle:(long long)arg1;
+ (id)_defaultColor;
@property(readonly, nonatomic) int refreshControlState; // @synthesize refreshControlState=_refreshControlState;
- (void)_setRefreshControlState:(int)arg1 notify:(_Bool)arg2;
- (void)setRefreshControlState:(int)arg1;
- (_Bool)_canTransitionFromState:(int)arg1 toState:(int)arg2;
- (double)_scrollViewHeight;
- (void)setBackgroundColor:(id)arg1;
- (void)_updateConcealingMask;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)_removeInsetHeight:(double)arg1;
- (void)_addInsetHeight:(double)arg1;
- (void)_removeInsets;
- (void)_addInsets;
- (void)_update;
- (double)_stiffnessForVelocity:(double)arg1;
- (void)_didScroll;
- (double)_visibleHeightForContentOffset:(struct CGPoint)arg1 origin:(struct CGPoint)arg2;
- (struct CGPoint)_originForContentOffset:(struct CGPoint)arg1;
@property(readonly, nonatomic, getter=_appliedInsets) struct UIEdgeInsets appliedInsets;
@property(readonly, nonatomic, getter=_isApplyingInsets) _Bool _applyingInsets;
@property(readonly, nonatomic) double _snappingHeight;
- (void)_updateSnappingHeight;
- (void)_setVisibleHeight:(double)arg1;
- (void)_updateHiddenStateIfNeeded;
- (int)_recomputeNewState;
@property(readonly, nonatomic) double _visibleHeight;
- (void)_resizeToFitContents;
- (id)_attributedTitle;
- (void)_setAttributedTitle:(id)arg1;
- (id)_tintColor;
- (void)_setTintColor:(id)arg1;
@property(readonly, nonatomic) double _refreshControlHeight;
- (id)_contentView;
@property(readonly, nonatomic) long long style;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSAttributedString *attributedTitle;
@property(retain, nonatomic) UIColor *tintColor;
- (double)revealedFraction;
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

