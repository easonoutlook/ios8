/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AVRunLoopConditionRunLoopState : NSObject
{
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_signalSource;
    _Bool _signaled;
}

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop *)arg1;
@property(nonatomic) _Bool signaled; // @synthesize signaled=_signaled;
@property(nonatomic) struct __CFRunLoopSource *signalSource; // @synthesize signalSource=_signalSource;
@property(readonly, nonatomic) struct __CFRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1;

@end

