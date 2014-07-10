/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class HAPService, NSArray, NSNumber, NSString;

@interface HAPCharacteristic : NSObject
{
    NSString *_type;
    NSNumber *_instanceID;
    HAPService *_service;
    unsigned long long _properties;
    NSArray *_descriptors;
    id _value;
}

@property(copy, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property(nonatomic) __weak HAPService *service; // @synthesize service=_service;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)propertiesDescription;
- (id)description;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 properties:(unsigned long long)arg3;

@end
