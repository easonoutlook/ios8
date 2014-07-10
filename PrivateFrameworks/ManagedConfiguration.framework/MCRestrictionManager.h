/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MCRestrictionManager : NSObject
{
    NSMutableDictionary *_memberQueueRestrictions;
    NSMutableDictionary *_memberQueueClientRestrictions;
    NSMutableDictionary *_memberQueueUserSettings;
    NSMutableDictionary *_memberQueueEffectiveUserSettings;
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableDictionary *_memberQueueProfileRestrictions;
}

+ (_Bool)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1;
+ (id)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 hostAppIsManaged:(_Bool)arg3 mayOpenFromUnmanagedToManaged:(_Bool)arg4 mayOpenFromManagedToUnmanaged:(_Bool)arg5;
+ (id)allowedImportFromAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(_Bool)arg4 mayOpenFromUnmanagedToManaged:(_Bool)arg5 mayOpenFromManagedToUnmanaged:(_Bool)arg6 isAppBundleIDExemptBlock:(id)arg7 isAppBundleIDAccountBasedBlock:(void)arg8;
+ (id)allowedOpenInAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(_Bool)arg4 mayOpenFromUnmanagedToManaged:(_Bool)arg5 mayOpenFromManagedToUnmanaged:(_Bool)arg6 isAppBundleIDExemptBlock:(id)arg7 isAppBundleIDAccountBasedBlock:(void)arg8;
+ (_Bool)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1;
+ (_Bool)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1;
+ (_Bool)isInSingleAppModeWithSettingsDictionary:(id)arg1;
+ (int)appWhitelistStateWithSettingsDictionary:(id)arg1;
+ (_Bool)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (_Bool)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (_Bool)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (_Bool)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2;
+ (id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2;
+ (id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)defaultUnionValuesForSetting:(id)arg1;
+ (id)defaultIntersectedValuesForSetting:(id)arg1;
+ (id)defaultValueForSetting:(id)arg1;
+ (int)defaultBoolValueForSetting:(id)arg1;
+ (id)defaultParametersForUnionValuesSetting:(id)arg1;
+ (id)defaultParametersForIntersectedValuesSetting:(id)arg1;
+ (id)defaultParametersForValueSetting:(id)arg1;
+ (id)defaultParametersForBoolSetting:(id)arg1;
+ (id)defaultSettings;
+ (_Bool)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (_Bool)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (_Bool)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (_Bool)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (id)filterUserSettingsForPublicUse:(id)arg1;
+ (id)filterRestrictionDictionary:(id)arg1 acceptedKeysDict:(id)arg2;
+ (id)filterRestrictionDictionaryForPublicUse:(id)arg1;
+ (id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(_Bool *)arg5 outError:(id *)arg6;
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(_Bool *)arg3 outError:(id *)arg4;
+ (id)sharedManager;
+ (id)defaultRestrictionFilePath;
@property(retain, nonatomic) NSMutableDictionary *memberQueueProfileRestrictions; // @synthesize memberQueueProfileRestrictions=_memberQueueProfileRestrictions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void).cxx_destruct;
- (int)appWhitelistState;
- (_Bool)isValueSettingLockedDownByRestrictions:(id)arg1;
- (_Bool)_isValueSettingLockedDown:(id)arg1 effectiveSetting:(id)arg2;
- (_Bool)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (_Bool)_isBoolSettingLockedDown:(id)arg1;
- (_Bool)isSettingLockedDownByRestrictions:(id)arg1;
- (id)profileIdentifiersRestrictingSettings:(id)arg1;
- (id)_effectiveUnionValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;
- (id)_effectiveIntersectedValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;
- (id)effectiveUnionValuesForSetting:(id)arg1;
- (id)effectiveIntersectedValuesForSetting:(id)arg1;
- (id)effectiveValueForSetting:(id)arg1;
- (int)effectiveRestrictedBoolForSetting:(id)arg1;
- (id)effectiveParametersForUnionSetting:(id)arg1;
- (id)effectiveParametersForIntersectedSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *effectiveUserSettings;
@property(retain, nonatomic) NSMutableDictionary *memberQueueEffectiveUserSettings; // @synthesize memberQueueEffectiveUserSettings=_memberQueueEffectiveUserSettings;
- (void)memberQueueCommitUserSettingsToDisk;
@property(readonly, copy, nonatomic) NSDictionary *userSettings;
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserSettings; // @synthesize memberQueueUserSettings=_memberQueueUserSettings;
- (id)exchangeUUIDsRestrictingSettings:(id)arg1;
- (id)allClientUUIDsForClientType:(id)arg1;
- (id)userInfoForClientUUID:(id)arg1;
- (id)memberQueueUserInfoForClientUUID:(id)arg1;
- (id)clientRestrictionsForClientUUID:(id)arg1;
- (id)memberQueueClientTypeForClientUUID:(id)arg1;
- (id)memberQueueClientRestrictionsForClientUUID:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *memberQueueClientRestrictions; // @synthesize memberQueueClientRestrictions=_memberQueueClientRestrictions;
- (id)clientRestrictions;
- (id)unionValuesForFeature:(id)arg1;
- (id)intersectedValuesForFeature:(id)arg1;
- (id)objectForFeature:(id)arg1;
- (id)valueForFeature:(id)arg1;
- (int)restrictedBoolForFeature:(id)arg1;
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(_Bool *)arg2 outError:(id *)arg3;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *combinedProfileRestrictions;
@property(readonly, nonatomic) NSMutableDictionary *memberQueueCombinedProfileRestrictions;
@property(readonly, copy, nonatomic) NSDictionary *profileRestrictions;
@property(readonly, nonatomic) NSDictionary *currentRestrictions;
@property(retain, nonatomic) NSMutableDictionary *memberQueueRestrictions; // @synthesize memberQueueRestrictions=_memberQueueRestrictions;
@property(readonly, nonatomic) NSDictionary *defaultSettings;
@property(readonly, nonatomic) NSDictionary *defaultRestrictions;
- (void)invalidateSettings;
- (void)invalidateRestrictions;
- (id)init;

@end

