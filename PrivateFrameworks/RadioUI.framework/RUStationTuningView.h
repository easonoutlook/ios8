/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class RUStationTuningSlider, RadioStation, UIImageView, UILabel, UITapGestureRecognizer;

@interface RUStationTuningView : UIView
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    RUStationTuningSlider *_tuningSlider;
    double _tuningSliderMaskDrawnWidth;
    UIImageView *_tuningSliderMaskView;
    UILabel *_tuningType1Label;
    UILabel *_tuningType2Label;
    UILabel *_tuningType3Label;
    RadioStation *_station;
}

+ (id)_tuningTypeLabelFont;
+ (double)defaultHeightForTraitCollection:(id)arg1;
@property(retain, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (id)_maskImageForSliderTrack;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_tapRecognizedAction:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

