/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface CKDPProtectionInfo : PBCodable <NSCopying>
{
    NSData *_protectionInfo;
    NSString *_protectionInfoTag;
}

@property(retain, nonatomic) NSString *protectionInfoTag; // @synthesize protectionInfoTag=_protectionInfoTag;
@property(retain, nonatomic) NSData *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasProtectionInfo;

@end

