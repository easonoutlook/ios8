/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface SSSQLiteDatabase : NSObject
{
    struct sqlite3 *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    _Bool _readOnly;
    _Bool _isInTransaction;
    id _setupBlock;
    struct __CFDictionary *_statementCache;
    _Bool _takesTaskCompletionAssertions;
    struct SBSProcessAssertion *_taskAssertion;
    long long _taskAssertionCount;
}

+ (void)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(_Bool *)arg2 didFinish:(_Bool *)arg3 isCorrupt:(_Bool *)arg4;
+ (void)_setTakesTaskCompletionAssertions:(_Bool)arg1;
+ (_Bool)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
+ (_Bool)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
@property(copy, nonatomic) id setupBlock; // @synthesize setupBlock=_setupBlock;
- (struct sqlite3_stmt *)_statementForSQL:(id)arg1 cache:(_Bool)arg2;
- (_Bool)_resetDatabaseWithPath:(id)arg1;
- (void)_resetCorruptDatabase;
- (int)_resetAndReopenDatabaseWithPath:(id)arg1;
- (int)_openFlags;
- (int)_openDatabase;
- (void)_endTaskCompletionAssertion;
- (void)_beginTaskCompletionAssertion;
- (void)_accessDatabaseUsingBlock:(id)arg1;
@property _Bool takesTaskCompletionAssertions;
- (_Bool)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
- (_Bool)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
- (void)endTaskCompletionAssertion;
- (void)beginTaskCompletionAssertion;
- (long long)userVersionForDatabase:(id)arg1;
- (long long)userVersion;
- (_Bool)setUserVersion:(long long)arg1 forDatabase:(id)arg2;
- (_Bool)setUserVersion:(long long)arg1;
- (void)prepareStatementForSQL:(id)arg1 cache:(_Bool)arg2 usingBlock:(id)arg3;
- (void)performTransactionWithBlock:(id)arg1;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s *)arg1;
- (_Bool)executeSQL:(id)arg1;
- (void)dispatchBlockSync:(id)arg1;
- (void)dispatchBlockAsync:(id)arg1;
- (void)dispatchAfter:(unsigned long long)arg1 block:(id)arg2;
- (long long)countChanges;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;
- (id)initWithDatabaseURL:(id)arg1;

@end

