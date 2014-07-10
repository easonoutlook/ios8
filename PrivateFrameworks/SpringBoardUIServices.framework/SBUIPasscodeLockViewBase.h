/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBFLegibilitySettingsProviderDelegate-Protocol.h"
#import "SBUIBiometricEventObserver-Protocol.h"
#import "SBUIPasscodeLockView-Protocol.h"

@class NSString, SBUIPasscodeEntryField, UIColor, _UILegibilitySettings;

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricEventObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeLockView>
{
    id <SBUIPasscodeLockViewDelegate_Internal> _delegate;
    int _style;
    NSString *_passcode;
    _Bool _playsKeypadSounds;
    _Bool _showsEmergencyCallButton;
    _Bool _showsStatusField;
    _Bool _becameVisible;
    double _backgroundAlpha;
    UIColor *_customBackgroundColor;
    SBUIPasscodeEntryField *_entryField;
    id <SBFLegibilitySettingsProvider> _backgroundLegibilitySettingsProvider;
    double _luminanceBoost;
    double _currentBacklightLevel;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _allowsStatusTextUpdatingOnResignFirstResponder;
    _Bool _mesaLockedOut;
    unsigned long long _biometricMatchMode;
    _Bool _shouldResetForFailedPasscodeAttempt;
}

@property(nonatomic) _Bool shouldResetForFailedPasscodeAttempt; // @synthesize shouldResetForFailedPasscodeAttempt=_shouldResetForFailedPasscodeAttempt;
@property(nonatomic) unsigned long long biometricMatchMode; // @synthesize biometricMatchMode=_biometricMatchMode;
@property(nonatomic, getter=_luminosityBoost, setter=_setLuminosityBoost:) double luminosityBoost; // @synthesize luminosityBoost=_luminanceBoost;
@property(retain, nonatomic) id <SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider; // @synthesize backgroundLegibilitySettingsProvider=_backgroundLegibilitySettingsProvider;
@property(retain, nonatomic, getter=_entryField, setter=_setEntryField:) SBUIPasscodeEntryField *_entryField; // @synthesize _entryField;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) _Bool showsStatusField; // @synthesize showsStatusField=_showsStatusField;
@property(nonatomic) _Bool showsEmergencyCallButton; // @synthesize showsEmergencyCallButton=_showsEmergencyCallButton;
@property(readonly, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) id <SBUIPasscodeLockViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2;
- (void)updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (void)_handleBiometricEvent:(unsigned long long)arg1;
- (void)_resetForFailedMesaAttempt;
- (void)_resetStatusText;
- (void)_evaluateLuminance;
- (double)_luminanceBoostFromDisplayBrightness;
- (double)_luminanceBoostFromLegibility;
- (void)_screenBrightnessReallyDidChange;
- (void)_clearBrightnessChangeTimer;
- (void)_noteScreenBrightnessDidChange;
- (_Bool)_wantsBiometricAuthentication;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(_Bool)arg3;
- (void)_sendDelegateKeypadKeyUp;
- (void)_sendDelegateKeypadKeyDown;
- (void)_luminanceBoostDidChange;
- (void)_setLegibilitySettings:(id)arg1;
- (_Bool)_isBoundsPortraitOriented;
- (long long)_orientation;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(id)arg1;
- (void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
@property(nonatomic) _Bool playsKeypadSounds; // @dynamic playsKeypadSounds;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(_Bool)arg1;
- (void)reset;
- (void)resetForFailedPasscode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
