/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SGIdentityKey : NSObject <NSCopying>
{
    NSString *_content;
    unsigned long long _type;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
+ (unsigned long long)identityTypeForKeyPart:(id)arg1;
+ (id)keyForContactExternalId:(int)arg1;
+ (id)keyForNormalizedEmail:(id)arg1;
+ (id)keyForEmail:(id)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *externalId;
- (id)identityKey;
- (id)emailAddress;
- (_Bool)hasEmailAddress;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToIdentityKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)serialize;
- (id)initWithType:(unsigned long long)arg1 content:(id)arg2;
- (id)initWithSerialized:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

