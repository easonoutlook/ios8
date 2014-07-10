/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CKRecordValue-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData;

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding>
{
    NSData *_data;
    NSData *_encryptedData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEncryptedData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end
