/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class LSBestAppSuggestionManager, NSDate, NSDictionary, NSString, NSUUID;

@interface LSBestAppSuggestion : NSObject <NSSecureCoding>
{
    unsigned long long _type;
    NSUUID *_uniqueIdentifier;
    NSDictionary *_options;
    NSString *_bundleIdentifier;
    NSString *_activityType;
    NSDate *_lastUpdateTime;
    double _confidence;
    NSString *_originatingDeviceIdentifier;
    NSString *_originatingDeviceName;
    LSBestAppSuggestionManager *_manager;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) LSBestAppSuggestionManager *manager; // @synthesize manager=_manager;
@property(readonly, copy) NSString *originatingDeviceName; // @synthesize originatingDeviceName=_originatingDeviceName;
@property(readonly, copy) NSString *originatingDeviceIdentifier; // @synthesize originatingDeviceIdentifier=_originatingDeviceIdentifier;
@property(readonly) double confidence; // @synthesize confidence=_confidence;
@property(readonly, copy) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(readonly, copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy) NSDate *when; // @dynamic when;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithManager:(id)arg1 bundleIdentifier:(id)arg2 uuid:(id)arg3 activityType:(id)arg4 lastUpdateTime:(id)arg5 type:(unsigned long long)arg6 deviceName:(id)arg7 deviceIdentifier:(id)arg8 options:(id)arg9;
- (id)initWithManager:(id)arg1;
@property(readonly, copy) NSString *userActivityTypeIdentifier; // @dynamic userActivityTypeIdentifier;

@end

