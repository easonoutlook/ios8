/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIColor;

// Not exported
@interface _UIVisualEffectLayerConfig : NSObject
{
    UIColor *_fillColor;
    double _opacity;
    NSString *_filterType;
}

+ (id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3;
@property(readonly, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)dealloc;

@end

