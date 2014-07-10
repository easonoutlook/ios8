/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplayLink, NSObject<OS_dispatch_queue>;

// Not exported
@interface SCNDisplayLink : NSObject
{
    id _reserved;
    CADisplayLink *_caDisplayLink;
    id _owner;
    id _block;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _paused;
    _Bool _invalidated;
    _Bool _asynchronous;
    long long _frameInterval;
    int _queuedFrameCount;
}

- (_Bool)_isInvalidated;
- (void)invalidate;
- (void)_teardown;
- (void)_resume;
- (void)_pause;
- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1;
- (int)queuedFrameCount;
@property(nonatomic) long long frameInterval;
- (void)setPaused:(_Bool)arg1 nextFrameTimeHint:(double)arg2;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;
- (id)initWithOwner:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (id)init;

@end

