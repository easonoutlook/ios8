/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface AXHAAccessQueue : NSObject
{
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    unsigned long long _specialBehaviors;
}

+ (id)backgroundAccessQueue;
+ (id)mainAccessQueue;
@property(nonatomic) unsigned long long specialBehaviors; // @synthesize specialBehaviors=_specialBehaviors;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(copy, nonatomic) NSString *threadLocalStorageKey; // @synthesize threadLocalStorageKey=_threadLocalStorageKey;
- (void)_performBlock:(id)arg1 withDispatchFunction:(void)arg2 synchronously:(void *)arg3 accessQueueContext:(_Bool)arg4;
- (unsigned long long)_accessQueueContextInCurrentExecutionThread;
- (id)description;
- (_Bool)canOnlyReadInCurrentExecutionThread;
- (_Bool)canWriteInCurrentExecutionThread;
- (_Bool)canReadInCurrentExecutionThread;
- (void)afterDelay:(double)arg1 processWritingBlock:(id)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(id)arg2;
- (void)performAsynchronousWritingBlock:(id)arg1;
- (void)performAsynchronousReadingBlock:(id)arg1;
- (void)performSynchronousWritingBlock:(id)arg1;
- (void)performSynchronousReadingBlock:(id)arg1;
@property(readonly, nonatomic) _Bool behavesWithoutErrorReporting;
@property(readonly, nonatomic) _Bool behavesAsMainQueue;
@property(readonly, copy, nonatomic) NSString *label;
- (void)dealloc;
- (id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(_Bool)arg3;
- (id)_initWithLabel:(id)arg1 appendUUIDToLabel:(_Bool)arg2 specialBehaviors:(unsigned long long)arg3;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(_Bool)arg2;
- (id)init;

@end

