/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UISettings.h>

// Not exported
@interface _UIScreenEdgePanRecognizerDwellSettings : _UISettings
{
    double _longPressFlatPermittedHorizontalMovement;
    double _longPressFlatPermittedVerticalMovement;
    double _longPressTipPermittedHorizontalMovement;
    double _longPressTipPermittedVerticalMovement;
    double _longPressPermittedHorizontalMovement;
    double _longPressPermittedVerticalMovement;
    double _longPressRequiredDuration;
}

+ (id)settingsControllerModule;
@property(nonatomic) double longPressRequiredDuration; // @synthesize longPressRequiredDuration=_longPressRequiredDuration;
@property(nonatomic) double longPressPermittedVerticalMovement; // @synthesize longPressPermittedVerticalMovement=_longPressPermittedVerticalMovement;
@property(nonatomic) double longPressPermittedHorizontalMovement; // @synthesize longPressPermittedHorizontalMovement=_longPressPermittedHorizontalMovement;
@property(nonatomic) double longPressTipPermittedVerticalMovement; // @synthesize longPressTipPermittedVerticalMovement=_longPressTipPermittedVerticalMovement;
@property(nonatomic) double longPressTipPermittedHorizontalMovement; // @synthesize longPressTipPermittedHorizontalMovement=_longPressTipPermittedHorizontalMovement;
@property(nonatomic) double longPressFlatPermittedVerticalMovement; // @synthesize longPressFlatPermittedVerticalMovement=_longPressFlatPermittedVerticalMovement;
@property(nonatomic) double longPressFlatPermittedHorizontalMovement; // @synthesize longPressFlatPermittedHorizontalMovement=_longPressFlatPermittedHorizontalMovement;
- (void)setDefaultValues;

@end

