/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableString;

@interface CPMLSchema : NSObject
{
    int yColumnPosition;
    NSMutableString *schemaHeader;
    NSMutableString *schemaHeaderWithType;
    NSMutableArray *attribute;
    NSMutableArray *schemaHDef;
    NSMutableArray *indexColumnList;
    NSMutableArray *nsRemapTable;
    NSMutableArray *schema;
    NSMutableArray *availableOptions;
}

@property(readonly, nonatomic) NSMutableArray *availableOptions; // @synthesize availableOptions;
@property(readonly, nonatomic) NSMutableArray *nsRemapTable; // @synthesize nsRemapTable;
@property(readonly, nonatomic) NSMutableString *schemaHeaderWithType; // @synthesize schemaHeaderWithType;
@property(readonly, nonatomic) NSMutableString *schemaHeader; // @synthesize schemaHeader;
@property(readonly, nonatomic) NSMutableArray *indexColumnList; // @synthesize indexColumnList;
@property(readonly, nonatomic) NSMutableArray *attribute; // @synthesize attribute;
- (void).cxx_destruct;
- (_Bool)hasOptions:(unsigned long long)arg1;
- (int)getYColumnPosition;
- (int)getVectorContent:(unsigned long long)arg1;
- (int)getSchemaType:(unsigned long long)arg1;
- (id)getColumnName:(unsigned long long)arg1;
- (int)getColumnPosition:(id)arg1;
- (_Bool)isColumnContinous:(unsigned int)arg1;
- (_Bool)isVectorType:(unsigned long long)arg1;
- (_Bool)isStringType:(unsigned long long)arg1;
- (_Bool)isRealType:(unsigned long long)arg1;
- (_Bool)isIntType:(unsigned long long)arg1;
- (_Bool)isNumType:(unsigned long long)arg1;
- (unsigned long long)getTotalAttributes;
- (id)initWithPlist:(id)arg1;
- (id)init:(id)arg1;

@end

