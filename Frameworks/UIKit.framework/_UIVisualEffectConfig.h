/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, _UIVisualEffectLayerConfig;

// Not exported
@interface _UIVisualEffectConfig : NSObject
{
    NSMutableArray *_layerConfigs;
    _UIVisualEffectLayerConfig *_contentConfig;
}

+ (id)configWithLayerConfigs:(id)arg1;
+ (id)configWithContentConfig:(id)arg1;
@property(readonly, nonatomic) _UIVisualEffectLayerConfig *contentConfig; // @synthesize contentConfig=_contentConfig;
@property(readonly, nonatomic) NSArray *layerConfigs; // @synthesize layerConfigs=_layerConfigs;
- (void)enumerateLayerConfigs:(id)arg1;
- (void)addLayerConfig:(id)arg1;
- (void)dealloc;

@end

