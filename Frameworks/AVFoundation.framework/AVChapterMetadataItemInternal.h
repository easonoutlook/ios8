/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVWeakReference, NSLocale, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface AVChapterMetadataItemInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigAsset *figAsset;
    long long chapterGroupIndex;
    long long chapterIndex;
    NSString *chapterType;
    NSLocale *locale;
    NSString *chapterDataType;
    id <NSObject><NSCopying> value;
    CDStruct_1b6d18a9 time;
    CDStruct_1b6d18a9 duration;
    long long valueStatus;
    int valueErrorCode;
    NSMutableArray *completions;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}

@end
