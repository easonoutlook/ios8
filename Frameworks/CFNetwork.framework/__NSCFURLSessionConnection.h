/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSURLAuthenticationChallengeSender-Protocol.h"

@class NSError, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>, NSURLResponse, NSURLSessionTask;

// Not exported
@interface __NSCFURLSessionConnection : NSObject <NSURLAuthenticationChallengeSender, NSCopying>
{
    struct SessionConnectionLoadable *_loaderClient;
    struct URLConnectionLoader *_loader;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _canceled;
    long long _suspended;
    NSURLResponse *_currentResponse;
    NSObject<OS_dispatch_data> *_pendingData;
    long long _pendingCompletion;
    unsigned long long _didReceiveResponseDisposition;
    NSError *_pendingError;
    int _state;
    NSURLResponse *_cacheResponse;
    NSObject<OS_dispatch_data> *_cacheData;
    unsigned long long _cacheDataMax;
    long long _clientBufferLength;
    NSObject<OS_dispatch_data> *_sniffData;
    NSURLResponse *_sniffResponse;
    _Bool _isMixedReplace;
    _Bool _didCheckMixedReplace;
    NSURLSessionTask *_task;
    id <SessionConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) id <SessionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSURLSessionTask *task; // @synthesize task=_task;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)_updateRequest:(id)arg1;
- (void)_needNewBodyStream;
- (void)_didReceiveChallenge:(id)arg1;
- (void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(id)arg3;
- (void)_conditionalRequirementsChanged:(_Bool)arg1;
- (void)_connectionIsWaiting;
- (void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(id)arg2;
- (void)_didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg1;
- (void)_didFinishWithError:(id)arg1;
- (void)_didSendBodyData:(struct UploadProgressInfo)arg1;
- (void)_didReceiveData:(id)arg1;
- (void)_didReceiveResponse:(id)arg1 sniff:(_Bool)arg2;
- (void)_tick;
- (void)_tick_finishing;
- (void)_task_sendFinish;
- (void)_tick_running;
- (void)_tick_sniffNow;
- (void)_tick_initialize;
- (void)_tossCache;
- (void)_setupForCache:(_Bool)arg1 expectedLength:(long long)arg2 response:(id)arg3;
- (void)withWorkQueueAsync:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)withLoaderAsync:(id)arg1;
- (void)withLoaderOnQueue:(id)arg1;
- (void)stopAccounting;
- (void)startAccountingFor:(id)arg1 discretionary:(_Bool)arg2;
- (void)afterDelegateWithTick:(id)arg1;
- (void)withDelegateAndPendingCompletionAsync:(id)arg1;
- (void)_cleanup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end

