/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetWriterInputHelper, AVAssetWriterInputPassDescriptionResponder, AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterInputInternal : NSObject
{
    AVWeakReference *weakReference;
    AVAssetWriterInputHelper *helper;
    NSObject<OS_dispatch_queue> *helperQueue;
    _Bool attachedToPixelBufferAdaptor;
    _Bool attachedToMetadataAdaptor;
    AVWeakReference *weakReferenceToAssetWriter;
    long long numberOfAppendFailures;
    NSObject<OS_dispatch_queue> *appendFailureReadWriteQueue;
    AVAssetWriterInputPassDescriptionResponder *passDescriptionResponder;
}

@end

