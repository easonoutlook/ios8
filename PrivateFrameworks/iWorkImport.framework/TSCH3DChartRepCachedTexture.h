/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, TSDTextureSet, TSDTexturedRectangle;

// Not exported
@interface TSCH3DChartRepCachedTexture : NSObject
{
    NSMutableArray *mTextures;
    TSDTexturedRectangle *mLegend;
    long long mEffectiveTextureStage;
    unsigned long long mDeliveryStyle;
    struct CGRect mTextureSetBoundingRect;
    struct CGRect mTextureBoundingRect;
    TSDTextureSet *mFinalTexture;
    TSDTextureSet *mVisibleTexture;
}

+ (id)cachedTexture;
@property(retain, nonatomic) TSDTexturedRectangle *legend; // @synthesize legend=mLegend;
@property(nonatomic) struct CGRect textureBoundingRect; // @synthesize textureBoundingRect=mTextureBoundingRect;
@property(nonatomic) struct CGRect textureSetBoundingRect; // @synthesize textureSetBoundingRect=mTextureSetBoundingRect;
@property(nonatomic) unsigned long long deliveryStyle; // @synthesize deliveryStyle=mDeliveryStyle;
@property(nonatomic) long long effectiveTextureStage; // @synthesize effectiveTextureStage=mEffectiveTextureStage;
- (id).cxx_construct;
- (id)textureForFinalElements:(_Bool)arg1;
- (id)p_assembleTextureSetForFinalElements:(_Bool)arg1;
- (void)p_addTexture:(id)arg1 toTextureSet:(id)arg2 forFinalElements:(_Bool)arg3;
- (void)addTexture:(id)arg1;
- (_Bool)hasCacheForEffectiveStage:(long long)arg1 deliveryStyle:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end
