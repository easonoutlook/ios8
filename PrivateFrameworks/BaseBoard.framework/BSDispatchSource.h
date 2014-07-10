/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface BSDispatchSource : NSObject
{
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _invalidated;
    id _eventHandler;
    id _cancelHandler;
}

@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) id cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) id eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (id)initWithType:(struct dispatch_source_type_s *)arg1 handle:(unsigned long long)arg2 mask:(unsigned long long)arg3 queue:(id)arg4 configureSourceBlock:(id)arg5;

@end

