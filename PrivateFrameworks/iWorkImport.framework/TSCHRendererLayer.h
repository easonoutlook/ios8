/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDTilingLayer.h>

@class TSCHRenderer;

// Not exported
@interface TSCHRendererLayer : TSDTilingLayer
{
    TSCHRenderer *mRenderer;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGRect)p_layerFrameFromUnscaledFrame:(struct CGRect)arg1;
- (struct CGRect)p_calculateLayerFrame;
- (void)updateFrameFromLayout;
- (id)renderer;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1;

@end

