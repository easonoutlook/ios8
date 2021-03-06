/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, NSURL, NSUUID;

@interface RCSSavedRecordingAccessToken : NSObject <NSSecureCoding, NSCoding, NSCopying>
{
    unsigned long long _accessType;
    NSURL *_compositionAVURL;
    NSUUID *_identifier;
    NSString *_accessName;
}

+ (_Bool)supportsSecureCoding;
+ (id)tokenWithName:(id)arg1 accessType:(unsigned long long)arg2 compositionAVURL:(id)arg3;
@property(readonly, copy, nonatomic) NSString *accessName; // @synthesize accessName=_accessName;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *compositionAVURL; // @synthesize compositionAVURL=_compositionAVURL;
@property(readonly, nonatomic) unsigned long long accessType; // @synthesize accessType=_accessType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 accessType:(unsigned long long)arg2 compositionAVURL:(id)arg3 identifier:(id)arg4;

@end

