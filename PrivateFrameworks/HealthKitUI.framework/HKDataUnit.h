/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class HKSampleType, HKUnit, NSString;

@interface HKDataUnit : NSObject <NSCopying>
{
    HKSampleType *_dataType;
    NSString *_displayName;
    HKUnit *_unit;
    double _scalarValue;
    long long _keybooardType;
}

@property(nonatomic) long long keybooardType; // @synthesize keybooardType=_keybooardType;
@property(readonly, nonatomic) double scalarValue; // @synthesize scalarValue=_scalarValue;
@property(readonly, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) HKSampleType *dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (id)_unitForString:(id)arg1;
- (id)_dataTypeForIdentifier:(id)arg1 aggregationType:(id)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isSleep;
- (_Bool)isNikeFuel;
- (id)adjustedValueForClientValue:(id)arg1;
- (id)adjustedValueForDaemonValue:(id)arg1;
- (id)_initAsCopyOf:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initFromDictionary:(id)arg1;

@end

