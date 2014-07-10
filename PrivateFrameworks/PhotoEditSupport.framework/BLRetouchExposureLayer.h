/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchExposureLayer : BLRetouchEffectLayer
{
    float _currentExposure;
    float *_cubeData;
    float _exposure;
}

+ (id)layerWithExposure:(float)arg1;
@property(nonatomic) float exposure; // @synthesize exposure=_exposure;
- (void)dealloc;
- (struct CGImage *)newImageFromContextWithEffect:(struct CGContext *)arg1;
- (id)cubeData;

@end

