/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SceneKit/SCNImageSource.h>

@class CALayer;

// Not exported
@interface SCNLayerSource : SCNImageSource
{
    CALayer *_layer;
}

@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSourceForContext:(void *)arg1;

@end

