/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface GEOPDIndexQueryNode : PBCodable <NSCopying>
{
    NSString *_field;
    NSMutableArray *_operands;
    int _type;
    NSString *_value;
}

@property(retain, nonatomic) NSMutableArray *operands; // @synthesize operands=_operands;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *field; // @synthesize field=_field;
@property(nonatomic) int type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)operandAtIndex:(unsigned long long)arg1;
- (unsigned long long)operandsCount;
- (void)addOperand:(id)arg1;
- (void)clearOperands;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasField;
- (void)dealloc;

@end

