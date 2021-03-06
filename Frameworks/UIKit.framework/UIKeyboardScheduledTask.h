/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer, UIKeyboardTaskQueue, _UIActionWhenIdle;

// Not exported
@interface UIKeyboardScheduledTask : NSObject
{
    id _task;
    double _timeInterval;
    UIKeyboardTaskQueue *_taskQueue;
    NSTimer *_timer;
    _UIActionWhenIdle *_deferredAction;
    id _enqueuedTask;
}

@property(copy, nonatomic) id enqueuedTask; // @synthesize enqueuedTask=_enqueuedTask;
@property(retain, nonatomic) _UIActionWhenIdle *deferredAction; // @synthesize deferredAction=_deferredAction;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) id task; // @synthesize task=_task;
- (void)resetTimer;
- (void)invalidate;
- (_Bool)isValid;
- (void)handleDeferredTimerFiredEvent;
- (void)timerFired:(id)arg1;
@property(readonly, nonatomic) _Bool repeats;
- (id)initWithTaskQueue:(id)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3 task:(id)arg4;
- (void)dealloc;

@end

