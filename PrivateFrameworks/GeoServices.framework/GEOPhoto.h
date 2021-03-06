/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface GEOPhoto : PBCodable <NSCopying>
{
    NSMutableArray *_photoInfos;
    int _photoType;
    NSString *_uid;
    CDStruct_86c1f53f _has;
}

@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSMutableArray *photoInfos; // @synthesize photoInfos=_photoInfos;
@property(nonatomic) int photoType; // @synthesize photoType=_photoType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUid;
- (id)photoInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoInfosCount;
- (void)addPhotoInfo:(id)arg1;
- (void)clearPhotoInfos;
@property(nonatomic) _Bool hasPhotoType;
- (void)dealloc;
- (id)initWithPlaceDataPhoto:(id)arg1;

@end

