/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray;

@interface PSUsageBundleManager : NSObject
{
    NSDictionary *_bundleMap;
    NSArray *_usageBundleApps;
    NSMutableArray *_storageReporters;
}

- (void)dealloc;
- (void)vendUsageBundleAppsWithHandler:(id)arg1;
- (id)allUsageBundleApps;
- (void)_loadUsageBundlesWithHandler:(id)arg1;

@end

