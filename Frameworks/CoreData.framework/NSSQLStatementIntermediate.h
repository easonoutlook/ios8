/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSSQLLimitIntermediate, NSSQLOrderIntermediate, NSSQLWhereIntermediate, NSString;

// Not exported
@interface NSSQLStatementIntermediate : NSSQLIntermediate
{
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOrderIntermediate *_orderIntermediate;
}

- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (void)setGoverningEntity:(id)arg1;
- (id)governingEntity;
- (void)setGoverningAlias:(id)arg1;
- (id)governingAlias;
- (void)setCorrelationToken:(id)arg1;
- (void)setOrderIntermediate:(id)arg1;
- (id)orderIntermediate;
- (void)setLimitIntermediate:(id)arg1;
- (id)limitIntermediate;
- (void)setWhereIntermediate:(id)arg1;
- (id)whereIntermediate;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;

@end

