/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol SessionConnectionDelegate <NSObject, NSCopying>
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(_Bool)arg2;
- (void)connectionWaiting:(id)arg1;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(id)arg3;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(id)arg3;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(id)arg3;
- (void)connection:(id)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg2;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(id)arg3;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(id)arg3;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(id)arg4;
@end

