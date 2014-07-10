/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIDynamicSlider.h"

#import "SBUIControlCenterControl-Protocol.h"

@class UIImage;

@interface SBUIControlCenterSlider : _UIDynamicSlider <SBUIControlCenterControl>
{
    double _valueImagePadding;
    _Bool _customTrackImage;
    _Bool _highlightMinimumTrackImage;
    _Bool _shouldHighlightValueImagesWhileAdjusting;
    _Bool _adjusting;
    UIImage *_minValueMaskImage;
    UIImage *_maxValueMaskImage;
    UIImage *_trackMaskImage;
    struct UIEdgeInsets _trackCapInsets;
}

+ (id)_knobImage;
+ (id)_maxTrackImage;
+ (id)_minTrackImageForState:(long long)arg1;
+ (id)_createTrackImageForState:(long long)arg1;
+ (id)_trackImage;
+ (void)controlAppearanceDidChangeForState:(long long)arg1;
+ (void)initialize;
@property struct UIEdgeInsets trackCapInsets; // @synthesize trackCapInsets=_trackCapInsets;
@property(retain) UIImage *trackMaskImage; // @synthesize trackMaskImage=_trackMaskImage;
@property(retain) UIImage *maxValueMaskImage; // @synthesize maxValueMaskImage=_maxValueMaskImage;
@property(retain) UIImage *minValueMaskImage; // @synthesize minValueMaskImage=_minValueMaskImage;
@property(nonatomic, getter=isAdjusting) _Bool adjusting; // @synthesize adjusting=_adjusting;
@property(nonatomic) _Bool shouldHighlightValueImagesWhileAdjusting; // @synthesize shouldHighlightValueImagesWhileAdjusting=_shouldHighlightValueImagesWhileAdjusting;
@property(nonatomic) _Bool highlightMinimumTrackImage; // @synthesize highlightMinimumTrackImage=_highlightMinimumTrackImage;
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (void)_configureControlStates;
- (void)layoutSubviews;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_valueImagePadding;
- (double)_valueImageCenterTrackOffset;
- (double)_naturalTrackWidth;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)_setTrackImage:(id)arg1;
- (void)setTrackImage:(id)arg1;
- (void)_updateMaximumTrackImage;
- (void)_updateMinimumTrackImage;
- (struct UIEdgeInsets)_trackInsetsWithShadow:(_Bool)arg1;
- (void)_updateValueImageView:(id)arg1 fadeToImage:(id)arg2;
- (void)_updateMaximumValueImage;
- (void)_updateMinimumValueImage;
- (id)_valueImageForImage:(id)arg1 state:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

