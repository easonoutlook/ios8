/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUI/GKBubbleWithStackedContent.h>

@class GKLabel, GKTextStyle, NSString;

@interface GKValueWithCaptionBubbleControl : GKBubbleWithStackedContent
{
    NSString *_valueText;
    _Bool _smallText;
    NSString *_captionText;
    GKLabel *_valueLabel;
    GKTextStyle *_overrideValueStyle;
    GKTextStyle *_overrideCaptionStyle;
    double _referenceZPosition;
    GKTextStyle *_smallValueStyle;
    GKTextStyle *_normalValueStyle;
    id _blockToken;
    GKLabel *_captionLabel;
}

@property(retain, nonatomic) GKLabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) id blockToken; // @synthesize blockToken=_blockToken;
@property(retain, nonatomic) GKTextStyle *normalValueStyle; // @synthesize normalValueStyle=_normalValueStyle;
@property(retain, nonatomic) GKTextStyle *smallValueStyle; // @synthesize smallValueStyle=_smallValueStyle;
@property(nonatomic) double referenceZPosition; // @synthesize referenceZPosition=_referenceZPosition;
@property(retain, nonatomic) GKTextStyle *overrideCaptionStyle; // @synthesize overrideCaptionStyle=_overrideCaptionStyle;
@property(retain, nonatomic) GKTextStyle *overrideValueStyle; // @synthesize overrideValueStyle=_overrideValueStyle;
@property(retain, nonatomic) GKLabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(nonatomic) _Bool smallText; // @synthesize smallText=_smallText;
- (void)blinkOutThenInWithValueText:(id)arg1 captionText:(id)arg2 afterDelay:(double)arg3;
- (void)setAlpha:(double)arg1;
- (void)setAttributedValueText:(id)arg1;
- (void)setAttributedCaptionText:(id)arg1;
- (void)updateTextFieldsFor3DScaling;
- (void)_updateValueTextLabel;
@property(retain, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
- (void)_updateCaptionTextLabel;
- (id)captionTextStyle;
- (id)valueTextStyle;
- (id)_scaledTextStyle:(id)arg1;
@property(retain, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
- (id)attributedValueText;
- (id)attributedCaptionText;
- (id)description;
- (void)didMoveToSuperview;
- (void)updateLabelRasterizationScaleForLabels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

