/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding>
{
    unsigned char _index;
    _Bool _isSelected;
    int _ear;
    int syncAttempts;
    NSString *_name;
    long long _category;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int syncAttempts; // @synthesize syncAttempts;
@property(nonatomic) int ear; // @synthesize ear=_ear;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) unsigned char index; // @synthesize index=_index;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (_Bool)isStream;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)transportRepresentation;
- (id)initWithRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

