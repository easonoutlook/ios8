/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@interface UIViewController (RCAdditions)
- (void)rc_ensureIsInterfaceOrientationMask:(unsigned long long)arg1 preferredOrientation:(long long)arg2 doneEnsuringBlock:(id)arg3;
- (_Bool)rc_isDescendantOfViewController:(id)arg1;
- (id)rc_navigationItemForPresentingNavigationItem:(id)arg1 forViewController:(id)arg2;
- (void)rc_loadViewIfNecessary;
- (_Bool)rc_hasAxisWithRegularSizeClassOrGreater;
- (_Bool)rc_isVerticalSizeClassRegularOrGreater;
- (_Bool)rc_isHorizontalSizeClassRegularOrGreater;
- (_Bool)rc_isPrimaryLayoutAxis:(long long)arg1;
- (_Bool)rc_canAnimate;
- (void)rc_addChildViewWithViewController:(id)arg1 toView:(id)arg2;
- (void)rc_addChildViewWithViewController:(id)arg1;
- (void)rc_runAutomatedDebuggingTestsWithCompletion:(id)arg1;
@end

