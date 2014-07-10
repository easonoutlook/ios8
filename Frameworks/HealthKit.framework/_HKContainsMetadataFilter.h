/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthKit/_HKMetadataFilter.h>

@class NSSet;

@interface _HKContainsMetadataFilter : _HKMetadataFilter
{
    NSSet *_allowedValues;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 values:(id)arg3;
@property(readonly, nonatomic) NSSet *allowedValues; // @synthesize allowedValues=_allowedValues;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (id)_initWithKey:(id)arg1 values:(id)arg2 operatorType:(unsigned long long)arg3;

@end

