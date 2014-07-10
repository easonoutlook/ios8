/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIInternalEvent.h>

@class NSMapTable, NSMutableSet;

// Not exported
@interface UITouchesEvent : UIInternalEvent
{
    NSMutableSet *_touches;
    struct __CFDictionary *_keyedTouches;
    struct __CFDictionary *_keyedTouchesByWindow;
    struct __CFDictionary *_gestureRecognizersByWindow;
    NSMapTable *_latentSystemGestureWindows;
}

- (id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg1;
- (void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg1;
- (void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg1 deliveredToEventWindow:(id)arg2;
@property(readonly, nonatomic) unsigned int _windowServerHitTestContextId;
@property(readonly, nonatomic) double _initialTouchTimestamp;
- (void)_dismissSharedCalloutBarIfNeeded;
- (id)description;
- (id)_cloneEvent;
- (void)_moveTouchesFromView:(id)arg1 toView:(id)arg2;
- (id)_firstTouchForView:(id)arg1;
- (id)_viewsForWindow:(id)arg1;
- (void)_invalidateGestureRecognizerForWindowCache;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_windows;
- (void)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 intoSet:(id)arg3;
- (id)_touchesForGesture:(id)arg1 withPhase:(long long)arg2;
- (id)_touchesForView:(id)arg1 withPhase:(long long)arg2;
- (void)_clearTouches;
- (void)_removeTouchesForWindow:(id)arg1;
- (void)_removeTouchesForKey:(id)arg1;
- (id)_touchesForWindow:(id)arg1;
- (id)_touchesForKey:(id)arg1;
- (void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)_removeTouch:(id)arg1;
- (void)_clearViewForTouch:(id)arg1;
- (void)_addTouch:(id)arg1 forDelayedDelivery:(_Bool)arg2;
- (_Bool)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2 currentTouchMap:(struct __CFDictionary *)arg3 newTouchMap:(struct __CFDictionary *)arg4;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (id)_allTouches;
- (id)allTouches;
- (void)dealloc;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (id)_init;
- (long long)type;

@end

