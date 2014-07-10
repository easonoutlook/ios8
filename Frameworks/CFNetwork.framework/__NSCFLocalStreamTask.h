/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CFNetwork/__NSCFLocalSessionTask.h>

#import "NSURLSessionStreamTaskSubclass-Protocol.h"

@class NSObject<OS_dispatch_data>;

// Not exported
@interface __NSCFLocalStreamTask : __NSCFLocalSessionTask <NSURLSessionStreamTaskSubclass>
{
    struct __CFWriteStream *_sinkForResponseBytes;
    NSObject<OS_dispatch_data> *_buffer;
    id _streamCompletion;
}

+ (id)rawRequestForHost:(id)arg1 port:(long long)arg2 tls:(_Bool)arg3;
@property(copy) id streamCompletion; // @synthesize streamCompletion=_streamCompletion;
- (void)_onqueue_resume;
- (void)_onqueue_suspend;
- (void)_onqueue_cancel;
- (void)_onqueue_adjustPriority;
- (void)_onqueue_newStreams;
- (void)_task_onqueue_didFinish;
- (void)_onqueue_createBoundStreams;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id)arg2;
- (void)_onqueue_issueWrite;
- (id)initWithTask:(id)arg1;

@end
