/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIViewServiceDeputy_UIViewServiceInterface-Protocol.h"
#import "_UIViewServiceUIBehaviorInterface-Protocol.h"

@protocol _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface, _UIViewServiceUIBehaviorInterface>
- (void)__hostViewWillDisappear:(_Bool)arg1;
- (void)__hostViewWillAppear:(_Bool)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostWillEnterForeground;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setWindowOffset:(struct CGPoint)arg1;
- (void)__createHostedTextEffectsWithReplyHandler:(id)arg1;
@end

