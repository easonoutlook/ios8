/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@interface MCRestrictionsPayload : MCPayload
{
    NSMutableDictionary *_restrictions;
    NSString *_iCloudPassword;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
- (void).cxx_destruct;
- (id)installationWarnings;
- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(_Bool)arg3;
- (id)localizedRestrictionStrings;
- (id)_defaultMediaSettings;
- (id)_unionStrings;
- (id)_intersectionStrings;
- (id)_enforcedFeatureStrings;
- (id)_restrictedFeatureStrings;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (id)restrictions;

@end

