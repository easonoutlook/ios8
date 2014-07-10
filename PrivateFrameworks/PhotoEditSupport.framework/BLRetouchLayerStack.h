/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoEditSupport/BLBaseLayerStack.h>

@interface BLRetouchLayerStack : BLBaseLayerStack
{
    struct CGContext *_labContextRef;
    CDStruct_76a42933 _edgeAwareColor;
}

+ (id)layerStack;
- (double)timestamp;
- (int)disabledBrushTypes;
- (_Bool)haveLayerMask;
- (_Bool)readyToDraw;
- (int)maxEdgeSize;
- (void)setStrokesDataDictionary:(id)arg1;
- (id)strokesDataDictionary;
- (void)findEdgesInRect:(struct CGRect)arg1 result:(struct CGContext *)arg2;
- (void)updateLabColorsInRect:(struct CGRect)arg1;
- (void)sampleEdgeDetectColorFromRect:(struct CGRect)arg1;
- (void)buildEdgeDetectFromImage:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)dealloc;
- (id)init;

@end

