/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol NCInteractiveNotificationServiceInterface
- (void)_handleActionIdentifier:(id)arg1;
- (void)_handleActionAtIndex:(unsigned long long)arg1;
- (void)_getActionTitlesWithCompletion:(id)arg1;
- (void)_getActionContextWithCompletion:(id)arg1;
- (void)_willPresentFromActionIdentifier:(id)arg1;
- (void)_didChangeRevealPercent:(double)arg1;
- (void)_proximityStateDidChange:(_Bool)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_setModal:(_Bool)arg1;
- (void)_setContext:(id)arg1;
- (void)_getInitialStateWithCompletion:(id)arg1;
@end

