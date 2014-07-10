/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CLSilo;

@interface CLTimer : NSObject
{
    CLSilo *_silo;
    id <CLTimerScheduler> _scheduler;
    id _handler;
    double _nextFireTime;
    double _fireInterval;
}

@property(nonatomic) double fireInterval; // @synthesize fireInterval=_fireInterval;
@property(nonatomic) double nextFireTime; // @synthesize nextFireTime=_nextFireTime;
@property(copy, nonatomic) id handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)shouldFire;
- (void)invalidate;
- (void)setNextFireTime:(double)arg1 interval:(double)arg2;
- (void)setNextFireAfterDelay:(double)arg1 interval:(double)arg2;
- (void)setNextFireAfterDelay:(double)arg1;
- (id)initInSilo:(id)arg1 withScheduler:(id)arg2;
- (void)updateScheduler;

@end

