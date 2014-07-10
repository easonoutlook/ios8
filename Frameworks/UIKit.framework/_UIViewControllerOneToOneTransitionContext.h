/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIViewControllerTransitionContext.h>

@class UIView, UIViewController;

@interface _UIViewControllerOneToOneTransitionContext : _UIViewControllerTransitionContext
{
    _Bool _isToViewSet;
    _Bool _isFromViewSet;
    UIView *_toView;
    UIView *_fromView;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    struct CGRect _fromStartFrame;
    struct CGRect _fromEndFrame;
    struct CGRect _toEndFrame;
    struct CGRect _toStartFrame;
}

@property(nonatomic, setter=_setToStartFrame:) struct CGRect toStartFrame; // @synthesize toStartFrame=_toStartFrame;
@property(nonatomic, setter=_setToEndFrame:) struct CGRect toEndFrame; // @synthesize toEndFrame=_toEndFrame;
@property(nonatomic, setter=_setFromEndFrame:) struct CGRect fromEndFrame; // @synthesize fromEndFrame=_fromEndFrame;
@property(nonatomic, setter=_setFromStartFrame:) struct CGRect fromStartFrame; // @synthesize fromStartFrame=_fromStartFrame;
@property(retain, nonatomic, setter=_setToViewController:) UIViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(retain, nonatomic, setter=_setFromViewController:) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic, getter=_fromView, setter=_setFromView:) UIView *fromView;
@property(retain, nonatomic, getter=_toView, setter=_setToView:) UIView *toView;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;
- (void)dealloc;

@end

