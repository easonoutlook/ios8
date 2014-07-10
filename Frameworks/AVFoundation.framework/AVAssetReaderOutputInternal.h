/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVRunLoopCondition, AVWeakReference, NSArray;

@interface AVAssetReaderOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    _Bool alwaysCopiesSampleData;
    _Bool supportsRandomAccess;
    NSArray *currentTimeRanges;
    AVWeakReference *weakReferenceToAssetReader;
    struct OpaqueFigAssetReader *figAssetReader;
    int extractionID;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    _Bool currentConfigurationIsFinal;
    _Bool extractionCompleteForCurrentConfiguration;
    int finished;
}

@end

