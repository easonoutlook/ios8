/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UITransitionState.h>

@class UIView, UIViewController;

// Not exported
@interface _UIQueuingScrollViewState : _UITransitionState
{
    UIView *_view;
    UIViewController *_viewController;
    _Bool _manual;
}

@property(readonly, nonatomic, getter=isManual) _Bool manual; // @synthesize manual=_manual;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (id)description;
- (_Bool)isCompatibleWithTransitionInDirection:(long long)arg1;
- (void)dealloc;
- (id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(_Bool)arg3 completion:(id)arg4;

@end

