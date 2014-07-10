/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseStatement, NSDictionary, NSString;

@interface ML3DatabaseResult : NSObject
{
    ML3DatabaseStatement *_statement;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
    NSString *_limitProperty;
    long long _limitValue;
}

@property(nonatomic) long long limitValue; // @synthesize limitValue=_limitValue;
@property(copy, nonatomic) NSString *limitProperty; // @synthesize limitProperty=_limitProperty;
- (void).cxx_destruct;
- (id)_statement;
- (id)stringValueForFirstRowAndColumn;
- (long long)int64ValueForFirstRowAndColumn;
- (id)objectForFirstRowAndColumn;
- (_Bool)hasAtLeastOneRow;
- (id)rows;
- (void)enumerateRowsWithBlock:(id)arg1;
- (id)columnNameIndexMap;
- (unsigned long long)indexForColumnName:(id)arg1;
- (void)setLimitProperty:(id)arg1 limitValue:(long long)arg2;
- (id)initWithStatement:(id)arg1;
- (id)init;

@end

