/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthDaemon/HDSQLitePropertyPredicate.h>

#import "NSCopying-Protocol.h"

@interface HDSQLiteNullPredicate : HDSQLitePropertyPredicate <NSCopying>
{
    _Bool _matchesNull;
}

+ (id)isNullPredicateWithProperty:(id)arg1;
+ (id)isNotNullPredicateWithProperty:(id)arg1;
@property(readonly, nonatomic) _Bool matchesNull; // @synthesize matchesNull=_matchesNull;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

