/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CameraKit/CAMGLView.h>

@class CIFilter;

@interface CAMEffectsFullsizeView : CAMGLView
{
    CIFilter *_selectedFilter;
    unsigned long long _selectedFilterIndex;
    unsigned long long _filterIndex;
}

@property unsigned long long filterIndex; // @synthesize filterIndex=_filterIndex;
- (void).cxx_destruct;
- (void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(_Bool)arg3;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 ciContext:(id)arg2 mirrorRendering:(_Bool)arg3;
- (id)_updateSelectedFilter;
- (void)setFixedSize:(struct CGSize)arg1;
- (void)_layoutGLLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

