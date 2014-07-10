/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GKGame.h"

@interface GKGame (UI)
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(id)arg3;
+ (struct CGSize)serverImageSizeForIconStyle:(long long)arg1;
+ (id)defaultGameIconWithStyle:(long long)arg1;
- (void)uninstallGameWithCompletionHandler:(id)arg1;
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(id)arg2;
- (id)URLStringForImageWithShineIfNeeded;
- (id)cachedIconForStyle:(long long)arg1;
- (id)iconForStyle:(long long)arg1;
- (id)imageSourceForIconStyle:(long long)arg1;
- (id)macBrushForIconStyle:(long long)arg1;
- (id)imageSourceForiOSIconStyle:(long long)arg1;
- (id)_imageURLForIconStyle:(long long)arg1;
@end

