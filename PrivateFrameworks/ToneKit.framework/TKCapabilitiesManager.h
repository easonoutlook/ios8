/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface TKCapabilitiesManager : NSObject
{
    _Bool _ringtoneStoreAvailable;
    _Bool _alertToneStoreAvailable;
}

+ (id)sharedCapabilitiesManager;
@property(nonatomic, getter=_isAlertToneStoreAvailable, setter=_setAlertToneStoreAvailable:) _Bool _alertToneStoreAvailable; // @synthesize _alertToneStoreAvailable;
@property(nonatomic, getter=_isRingtoneStoreAvailable, setter=_setRingtoneStoreAvailable:) _Bool _ringtoneStoreAvailable; // @synthesize _ringtoneStoreAvailable;
@property(readonly, nonatomic) _Bool hasUserGeneratedVibrationsCapability;
@property(readonly, nonatomic) _Bool hasVibratorCapability;
@property(readonly, nonatomic, getter=isAlertToneStoreAvailable) _Bool alertToneStoreAvailable;
@property(readonly, nonatomic, getter=isRingtoneStoreAvailable) _Bool ringtoneStoreAvailable;
- (void)_checkRingtoneStoreAvailability;
- (_Bool)_hasTelephonyCapability;
- (void)dealloc;
- (id)init;

@end

