/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface XBLaunchImageProvider : NSObject
{
    NSMutableDictionary *_clients;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *clients; // @synthesize clients=_clients;
- (void)launchImageViewDidGetRemovedFromViewHierarchy:(id)arg1 forApplicationWithBundleID:(id)arg2;
- (id)launchImageViewForApplicationWithBundleID:(id)arg1 bundlePath:(id)arg2 launchNibName:(id)arg3 storyboardName:(id)arg4 sceneID:(id)arg5 screen:(id)arg6 interfaceOrientation:(long long)arg7 includeStatusBar:(_Bool)arg8 includeBanner:(_Bool)arg9 screenBounds:(struct CGRect)arg10 snapshotFrame:(struct CGRect)arg11;
- (id)_clientForApplicationWithBundleID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

