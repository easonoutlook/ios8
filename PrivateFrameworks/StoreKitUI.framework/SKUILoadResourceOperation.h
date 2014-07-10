/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSLock, SKUIClientContext, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id _outputBlock;
    SKUIResourceRequest *_request;
}

- (void).cxx_destruct;
- (void)main;
@property(copy) id outputBlock;
@property(retain) SKUIClientContext *clientContext;
@property(readonly, copy) SKUIResourceRequest *resourceRequest;
- (id)initWithResourceRequest:(id)arg1;
- (id)init;
- (id)_initSKUILoadResourceOperation;

@end

