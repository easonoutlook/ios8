/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardFoundation/SBFObservable.h>

@interface _SBFScheduledObservable : SBFObservable
{
    id <SBFObservable> _observable;
    id <SBFScheduler> _scheduler;
}

- (id)subscribe:(id)arg1;
- (void)dealloc;
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;

@end

