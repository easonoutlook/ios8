/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

// Not exported
@interface VKPIconPack : PBCodable <NSCopying>
{
    NSMutableArray *_atlas;
    NSMutableArray *_icons;
    unsigned int _identifier;
}

@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSMutableArray *atlas; // @synthesize atlas=_atlas;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)iconsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (void)addIcons:(id)arg1;
- (void)clearIcons;
- (id)atlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)atlasCount;
- (void)addAtlas:(id)arg1;
- (void)clearAtlas;
- (void)dealloc;

@end

