/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface NSURLCacheInternal : NSObject
{
    unsigned long long memoryCapacity;
    unsigned long long diskCapacity;
    NSString *diskPath;
    unsigned long long currentMemoryUsage;
    unsigned long long currentDiskUsage;
    struct _CFURLCache *_cacheRef;
}

- (void)finalize;
- (void)dealloc;

@end

