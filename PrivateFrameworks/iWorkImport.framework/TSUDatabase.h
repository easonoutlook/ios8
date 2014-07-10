/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSUDatabase : NSObject
{
    struct sqlite3 *_db;
    _Bool _readonly;
    struct sqlite3_stmt *_beginTransactionStatement;
    struct sqlite3_stmt *_commitTransactionStatement;
    struct sqlite3_stmt *_rollbackTransactionStatement;
}

@property(readonly, nonatomic) struct sqlite3 *_sqliteDatabase; // @synthesize _sqliteDatabase=_db;
@property(readonly, nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
- (_Bool)_upgradeSchemaWithError:(id *)arg1;
- (id)_initWithPath:(id)arg1 readonly:(_Bool)arg2 error:(id *)arg3;
- (_Bool)endSingleResultQuery:(struct sqlite3_stmt *)arg1 shouldFinalize:(_Bool)arg2 error:(id *)arg3;
- (_Bool)startSingleResultQuery:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (_Bool)executeUpdateWithSql:(const char *)arg1 error:(id *)arg2;
- (_Bool)executeUpdate:(struct sqlite3_stmt *)arg1 shouldFinalize:(_Bool)arg2 error:(id *)arg3;
- (_Bool)prepareStatement:(struct sqlite3_stmt **)arg1 sql:(const char *)arg2 error:(id *)arg3;
- (_Bool)setSchemaVersion:(int)arg1 error:(id *)arg2;
- (_Bool)upgradeFromSchemaVersion:(int)arg1 error:(id *)arg2;
- (_Bool)needsUpgradeFromSchemaVersion:(int)arg1;
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;
- (_Bool)beginTransactionWithError:(id *)arg1;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)compactWithError:(id *)arg1;
- (void)dealloc;
- (id)initReadonlyWithPath:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;

@end

