/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CIContext, CIFilter, CIImage, EAGLContext, NSDictionary, NSObject<OS_dispatch_queue>, PLPhotoEditModel;

@interface PLPhotoEditRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *__renderingQueue;
    CIContext *_generatingCIContext;
    CIContext *_drawingCIContext;
    EAGLContext *_lastUsedEAGLContext;
    CIFilter *_effectFilter;
    CIFilter *_smartToneFilter;
    CIFilter *_smartColorFilter;
    CIFilter *_redEyeFilter;
    CIImage *_cachedEditedImage;
    PLPhotoEditModel *_photoEditModelInCachedEditedImage;
    NSDictionary *__smartToneAdjustments;
    double _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsICachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    double _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsICachedAdjustments;
    CIImage *_originalImage;
    PLPhotoEditModel *_photoEditModel;
    unsigned long long _renderMode;
}

@property(nonatomic) unsigned long long renderMode; // @synthesize renderMode=_renderMode;
@property(retain, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(retain, nonatomic) CIImage *originalImage; // @synthesize originalImage=_originalImage;
- (id)_renderingQueue;
- (id)_smartColorAdjustments;
- (id)_smartToneAdjustments;
@property(readonly, nonatomic) double smartColorBaseVibrancy;
@property(readonly, nonatomic) double smartColorBaseContrast;
@property(readonly, nonatomic) double smartToneBaseShadows;
@property(readonly, nonatomic) double smartToneBaseHighlights;
@property(readonly, nonatomic) double smartToneBaseExposure;
@property(readonly, nonatomic) double smartToneBaseContrast;
@property(readonly, nonatomic) double smartToneBaseBrightness;
@property(readonly, nonatomic) struct CGSize outputImageSize;
@property(readonly, retain, nonatomic) CIImage *outputImage;
- (void)drawEditedImageInContext:(id)arg1 inRect:(struct CGRect)arg2 viewportWidth:(int)arg3 viewportHeight:(int)arg4;
- (void)generateEditedImageWithCompletion:(id)arg1;
- (void)_invalidateCachedFilters;
- (id)_editedImage;
- (void)dealloc;
- (id)init;

@end

