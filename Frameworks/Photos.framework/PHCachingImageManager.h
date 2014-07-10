/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Photos/PHImageManager.h>

@interface PHCachingImageManager : PHImageManager
{
    _Bool _allowsCachingHighQualityImages;
}

@property(nonatomic) _Bool allowsCachingHighQualityImages; // @synthesize allowsCachingHighQualityImages=_allowsCachingHighQualityImages;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (id)_highPriorityRequestWaitGroup;
- (id)description;
- (id)init;
- (void)stopCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;

@end

