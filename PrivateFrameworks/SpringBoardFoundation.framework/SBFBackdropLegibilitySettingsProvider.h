/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBFLegibilitySettingsProvider-Protocol.h"
#import "_UIBackdropViewObserver-Protocol.h"

@class _UIBackdropView, _UILegibilitySettings;

@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider>
{
    _UIBackdropView *_backdropView;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
}

@property(readonly, retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)backdropViewDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithBackdropView:(id)arg1;

@end

