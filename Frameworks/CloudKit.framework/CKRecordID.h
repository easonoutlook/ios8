/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CKRecordZoneID, NSString;

@interface CKRecordID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_recordName;
    CKRecordZoneID *_zoneID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)ckShortDescription;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)sqliteRepresentation;
- (id)initWithRecordName:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordName:(id)arg1;

@end

