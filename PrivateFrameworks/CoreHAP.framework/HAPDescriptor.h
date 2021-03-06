/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class HAPCharacteristic, NSString;

@interface HAPDescriptor : NSObject
{
    NSString *_identifier;
    HAPCharacteristic *_characteristic;
    id _value;
}

@property(readonly, retain) id value; // @synthesize value=_value;
@property(readonly, nonatomic) __weak HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initTestDescriptorWithIdentifier:(id)arg1 characteristic:(id)arg2;

@end

