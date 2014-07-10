/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUValueFilter.h>

@interface PUDynamicValueFilter : PUValueFilter
{
    double _targetValue;
    double _currentTime;
}

@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3;
- (void)_update;
- (double)outputValueChangeRate;
- (double)outputValue;
- (void)setInputValue:(double)arg1;
- (id)init;

@end

