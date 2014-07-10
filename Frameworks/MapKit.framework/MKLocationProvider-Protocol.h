/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSBundle, NSString;

@protocol MKLocationProvider <NSObject>
@property(readonly, nonatomic) _Bool isSimulation;
@property(readonly, nonatomic) _Bool usesCLMapCorrection;
@property(nonatomic) long long activityType;
@property(readonly, nonatomic) _Bool airplaneModeBlocksLocation;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(copy, nonatomic) id authorizationRequestBlock;
@property(nonatomic) int headingOrientation;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
@property(nonatomic) __weak id <MKLocationProviderDelegate> delegate;
- (void)dismissHeadingCalibrationDisplay;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@end
