/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIViewControllerKeyboardContextTransitioning-Protocol.h"

@class UIView, _UIViewControllerTransitionContext;

// Not exported
@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning>
{
    _UIViewControllerTransitionContext *_context;
    id <UIInputViewAnimationHost> _host;
    UIView *_from;
    UIView *_to;
    struct CGRect _fromRect;
    struct CGRect _toRect;
}

+ (id)contextWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;
@property(readonly, nonatomic) struct CGRect toKeyboardFrame;
@property(readonly, nonatomic) UIView *toKeyboard;
@property(readonly, nonatomic) struct CGRect fromKeyboardFrame;
@property(readonly, nonatomic) UIView *fromKeyboard;
@property(readonly, nonatomic) id <UIViewControllerContextTransitioning> mainContext;
- (void)dealloc;
- (id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;

@end

