/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthDaemon/HDSQLitePropertyPredicate.h>

#import "NSCopying-Protocol.h"

@class HDSQLiteQuery, NSArray, NSString;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying>
{
    _Bool _negative;
    HDSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *queryProperty; // @synthesize queryProperty=_queryProperty;
@property(readonly, nonatomic) HDSQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) _Bool negative; // @synthesize negative=_negative;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

