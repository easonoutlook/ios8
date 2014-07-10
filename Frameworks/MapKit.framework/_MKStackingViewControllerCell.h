/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class MKStackingViewController, NSArray, NSLayoutConstraint, UIViewController;

// Not exported
@interface _MKStackingViewControllerCell : UITableViewCell
{
    NSArray *_alignAndFillWidthConstraints;
    NSLayoutConstraint *_fillHeightConstraint;
    MKStackingViewController *_owner;
    UIViewController *_viewController;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak MKStackingViewController *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)repositionViewControllerViewToCoverBounds;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_addViewOfViewController:(id)arg1;
- (void)_removeViewOfViewController:(id)arg1;
- (void)dealloc;

@end

