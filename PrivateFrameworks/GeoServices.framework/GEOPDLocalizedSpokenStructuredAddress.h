/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOStructuredAddress, NSString;

@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable <NSCopying>
{
    NSString *_locale;
    GEOStructuredAddress *_spokenStructuredAddress;
}

@property(retain, nonatomic) GEOStructuredAddress *spokenStructuredAddress; // @synthesize spokenStructuredAddress=_spokenStructuredAddress;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSpokenStructuredAddress;
@property(readonly, nonatomic) _Bool hasLocale;
- (void)dealloc;

@end

