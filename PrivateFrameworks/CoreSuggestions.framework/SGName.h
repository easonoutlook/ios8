/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSuggestions/SGObject.h>

@class NSString;

@interface SGName : SGObject
{
    NSString *_name;
}

+ (id)name:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToName:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 recordId:(id)arg2 origin:(id)arg3;

@end

