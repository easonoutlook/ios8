/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface NSSQLIntermediate : NSObject
{
    NSSQLIntermediate *_scope;
}

+ (_Bool)isSimpleKeypath:(id)arg1;
+ (_Bool)expressionIsBasicKeypath:(id)arg1;
- (id)_generateSQLForExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (_Bool)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2;
- (_Bool)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (void)promoteJoinsInKeypathsForExpression:(id)arg1;
- (void)_promoteJoinsForTernaryExpression:(id)arg1;
- (void)_promoteJoinsForAggregateExpression:(id)arg1;
- (void)_promoteJoinsForFunctionExpression:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (void)_promoteJoinsForKeypathExpression:(id)arg1;
- (id)_lastScopedItem;
- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingAlias;
- (_Bool)isVariableBasedKeypathScopedBySubquery:(id)arg1;
- (_Bool)isSimpleKeypath:(id)arg1;
- (_Bool)expressionIsBasicKeypath:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)fetchIntermediate;
- (_Bool)isUpdateScoped;
- (_Bool)isHavingScoped;
- (_Bool)isFunctionScoped;
- (_Bool)isTargetColumnsScoped;
- (_Bool)isOrScoped;
- (id)generateSQLStringInContext:(id)arg1;
- (id)scope;
- (id)initWithScope:(id)arg1;

@end

