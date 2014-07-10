/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKPersistentObject.h>

@class EKSourceConstraints, NSNumber, NSString;

@interface EKPersistentSource : EKPersistentObject
{
    EKSourceConstraints *_constraints;
}

+ (long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1;
+ (int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)arg1;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
@property(readonly, nonatomic) EKSourceConstraints *constraints; // @synthesize constraints=_constraints;
- (void)reset;
- (_Bool)refresh;
- (id)description;
@property(nonatomic) _Bool onlyCreatorCanModify;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(copy, nonatomic) NSString *externalID;
@property(nonatomic) NSString *UUID;
@property(copy, nonatomic) NSNumber *defaultAlarmOffset;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) long long preferredEventPrivateValue;
@property(nonatomic) int sourceType;
- (int)entityType;
- (void)dealloc;
- (id)init;

@end

