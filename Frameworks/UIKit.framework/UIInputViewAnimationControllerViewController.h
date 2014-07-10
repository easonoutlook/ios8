/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIInputViewAnimationController-Protocol.h"

// Not exported
@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController>
{
    id <UIViewControllerContextTransitioning> _context;
    id <UIViewControllerAnimatedTransitioning_Keyboard> _animator;
}

+ (id)controllerWithContext:(id)arg1;
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

