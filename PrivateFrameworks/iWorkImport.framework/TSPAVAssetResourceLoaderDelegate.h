/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, NSString, TSPFileDataStorage;

// Not exported
@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    TSPFileDataStorage *_dataStorage;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_queue> *_concurrentRequestQueue;
    NSString *_contentTypeUTI;
}

- (void).cxx_destruct;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)dealloc;
- (void)_provideData:(id)arg1 untilRequestCancelledForResourceLoadingRequest:(id)arg2;
- (id)delegateQueue;
- (id)initWithTSPFileDataStorage:(id)arg1 contentTypeUTI:(id)arg2;

@end

