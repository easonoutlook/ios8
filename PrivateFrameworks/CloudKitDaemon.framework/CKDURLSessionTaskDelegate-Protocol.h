/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSOperationQueue;

@protocol CKDURLSessionTaskDelegate <NSObject>
@property(readonly, nonatomic) NSOperationQueue *delegateQueue;
- (void)URLSessionTask:(id)arg1 conditionalRequirementsChanged:(_Bool)arg2;
- (void)URLSessionTaskIsWaitingForConnection:(id)arg1;
- (id)URLSessionTask:(id)arg1 requestForEstablishedConnection:(id)arg2;
- (void)URLSessionDataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSessionDataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3;
- (void)URLSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSessionTask:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSessionTask:(id)arg1 needNewBodyStream:(id)arg2;
- (void)URLSessionTask:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4;
@end

