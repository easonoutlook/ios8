/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@interface FBLayerHostContainer : CALayer
{
    double _scale;
    double _rotation;
    struct CGPoint _translation;
}

@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)description;
- (void)setDebug:(_Bool)arg1;

@end

