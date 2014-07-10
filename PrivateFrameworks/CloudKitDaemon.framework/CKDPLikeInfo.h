/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@interface CKDPLikeInfo : PBCodable <NSCopying>
{
    int _likeCount;
    _Bool _likedByCurrentUser;
    struct {
        unsigned int likeCount:1;
        unsigned int likedByCurrentUser:1;
    } _has;
}

@property(nonatomic) _Bool likedByCurrentUser; // @synthesize likedByCurrentUser=_likedByCurrentUser;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLikedByCurrentUser;
@property(nonatomic) _Bool hasLikeCount;

@end

