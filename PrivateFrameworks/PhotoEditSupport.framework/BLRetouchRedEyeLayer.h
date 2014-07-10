/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoEditSupport/BLRetouchLayer.h>

@class CIImage, NSMutableArray, UIImage;

@interface BLRetouchRedEyeLayer : BLRetouchLayer
{
    CIImage *_ciSourceImage;
    NSMutableArray *_eyePoints;
    UIImage *_repairSourceImage;
    UIImage *_repairedImage;
}

+ (id)addAutoRedEyeCorrection:(id)arg1 toLayerData:(id)arg2 maskSize:(struct CGSize)arg3 newTimestampIncrement:(double *)arg4;
+ (long long)indexOfPointNear:(struct CGPoint)arg1 inEyePoints:(id)arg2 andMaskSize:(struct CGSize)arg3;
@property(retain, nonatomic) UIImage *repairedImage; // @synthesize repairedImage=_repairedImage;
@property(retain, nonatomic) UIImage *repairSourceImage; // @synthesize repairSourceImage=_repairSourceImage;
- (void)clearRedEyes;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (struct CGRect)area;
- (void)dealloc;
- (struct CGRect)tapAtPoint:(struct CGPoint)arg1 actualLocation:(struct CGPoint *)arg2 foundEye:(_Bool *)arg3 addedEye:(_Bool *)arg4;
- (void)setLayerData:(id)arg1;
- (id)layerData;
- (long long)indexOfPointNear:(struct CGPoint)arg1;
@property(copy, nonatomic) NSMutableArray *eyePoints; // @synthesize eyePoints=_eyePoints;
- (void)repairRedEyes;
- (struct CGRect)maskFrame;
- (_Bool)hasLayerMask;
- (float)amount;
- (void)hasLayerMaskDidChange;

@end

