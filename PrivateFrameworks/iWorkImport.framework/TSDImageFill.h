/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDFill.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "TSDMixing-Protocol.h"
#import "TSSPreset-Protocol.h"
#import "TSSPresetSource-Protocol.h"

@class NSObject<OS_dispatch_queue>, NSString, TSPData, TSUColor, TSUFlushableCachedImage;

// Not exported
@interface TSDImageFill : TSDFill <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>
{
    TSPData *mImageData;
    TSPData *mOriginalImageData;
    _Bool mInterpretsUntaggedImageDataAsGeneric;
    int mTechnique;
    TSUColor *mTintColor;
    TSUFlushableCachedImage *mStandardSizeTintedImage;
    TSUFlushableCachedImage *mHalfSizeTintedImage;
    TSUFlushableCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    struct CGSize mFillSize;
    _Bool mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    struct CGImage *mTempRenderCopy;
    struct CGImage *mSourceOfTempRenderCopy;
    long long mTempRenderCount;
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) _Bool interpretsUntaggedImageDataAsGeneric; // @synthesize interpretsUntaggedImageDataAsGeneric=mInterpretsUntaggedImageDataAsGeneric;
@property(readonly, copy, nonatomic) TSUColor *tintColor; // @synthesize tintColor=mTintColor;
@property(nonatomic) int technique; // @synthesize technique=mTechnique;
@property(readonly, retain, nonatomic) TSPData *originalImageData; // @synthesize originalImageData=mOriginalImageData;
@property(readonly, retain, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
- (void)p_drawPDFWithProvider:(id)arg1 inContext:(struct CGContext *)arg2 bounds:(struct CGRect)arg3;
- (void)p_drawBitmapImage:(struct CGImage *)arg1 withOrientation:(long long)arg2 inContext:(struct CGContext *)arg3 bounds:(struct CGRect)arg4;
- (struct CGRect)p_drawnRectForImageSize:(struct CGSize)arg1 destRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (id)p_validatedImageProvider;
- (SEL)mapThemeAssetSelector;
@property(readonly, nonatomic) NSString *presetKind;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)p_quarterSizeCachedImage;
- (struct CGImage *)p_newQuarterSizeImage;
- (id)p_halfSizeCachedImage;
- (struct CGImage *)p_newHalfSizeImage;
- (id)p_standardSizeCachedImage;
- (struct CGImage *)p_newStandardSizeImage;
- (struct CGImage *)p_newTintedImageWithScale:(double)arg1;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 forShapeRep:(id)arg2 inContext:(struct CGContext *)arg3;
- (void)p_paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (struct CGSize)p_sizeOfFillImageForDestRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (struct CGSize)renderedImageSizeForObjectSize:(struct CGSize)arg1;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (id)p_cachedImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orLayer:(id)arg3;
- (_Bool)shouldBeReappliedToCALayer:(id)arg1;
- (_Bool)p_shouldApplyTintedImage;
- (int)fillType;
- (_Bool)canApplyToCALayerByAddingSublayers;
- (_Bool)canApplyToCALayer;
- (_Bool)drawsInOneStep;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)referenceColor;
- (id)imageDataAtFillSize;
- (void)p_setFillSizeForApplicationData;
- (_Bool)isOpaque;
@property(readonly, nonatomic) struct CGSize fillSize; // @synthesize fillSize=mFillSize;
@property(readonly, nonatomic) double scale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithGenericImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(struct CGSize)arg4 originalImageData:(id)arg5;
- (id)initWithImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(struct CGSize)arg4 originalImageData:(id)arg5;
- (_Bool)tsch_hasAllResources;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (_Bool)p_shouldPersistFillSizeForData:(id)arg1;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;

@end

