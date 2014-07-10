/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIColor, _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject
{
    _Bool _hasObservedValues;
    double _averageHue;
    double _averageSaturation;
    double _averageBrightness;
    double _contrast;
    _UIBackdropViewSettings *_parentSettings;
    double _previousAverageHue;
    double _previousAverageSaturation;
    double _previousAverageBrightness;
    double _previousContrast;
}

@property(nonatomic) _Bool hasObservedValues; // @synthesize hasObservedValues=_hasObservedValues;
@property(nonatomic) double previousContrast; // @synthesize previousContrast=_previousContrast;
@property(nonatomic) double previousAverageBrightness; // @synthesize previousAverageBrightness=_previousAverageBrightness;
@property(nonatomic) double previousAverageSaturation; // @synthesize previousAverageSaturation=_previousAverageSaturation;
@property(nonatomic) double previousAverageHue; // @synthesize previousAverageHue=_previousAverageHue;
@property(nonatomic) _UIBackdropViewSettings *parentSettings; // @synthesize parentSettings=_parentSettings;
@property(nonatomic) double contrast; // @synthesize contrast=_contrast;
@property(nonatomic) double averageBrightness; // @synthesize averageBrightness=_averageBrightness;
@property(nonatomic) double averageSaturation; // @synthesize averageSaturation=_averageSaturation;
@property(nonatomic) double averageHue; // @synthesize averageHue=_averageHue;
@property(readonly, nonatomic) UIColor *color; // @dynamic color;
- (_Bool)applyCABackdropLayerStatistics:(id)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)setDefaultValues;

@end

