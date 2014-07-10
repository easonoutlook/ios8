/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol UISplitViewControllerDelegate

@optional
- (_Bool)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (void)splitViewController:(id)arg1 popoverController:(id)arg2 willPresentViewController:(id)arg3;
- (void)splitViewController:(id)arg1 willShowViewController:(id)arg2 invalidatingBarButtonItem:(id)arg3;
- (void)splitViewController:(id)arg1 willHideViewController:(id)arg2 withBarButtonItem:(id)arg3 forPopoverController:(id)arg4;
- (long long)splitViewControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
- (unsigned long long)splitViewControllerSupportedInterfaceOrientations:(id)arg1;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
- (_Bool)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
- (_Bool)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3;
- (long long)targetDisplayModeForActionInSplitViewController:(id)arg1;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
@end

