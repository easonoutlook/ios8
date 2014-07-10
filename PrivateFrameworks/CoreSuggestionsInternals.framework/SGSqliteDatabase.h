/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache, NSString;

@interface SGSqliteDatabase : NSObject
{
    struct sqlite3 *_db;
    struct _opaque_pthread_mutex_t _lock;
    int _transactionDepth;
    NSString *_filename;
    _Bool _enabled;
    NSCache *_queryCache;
}

+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (void)disableDb;
- (void)enableDb;
- (id)description;
- (void)transaction:(id)arg1;
- (_Bool)prepAndRunQuery:(id)arg1 onPrep:(id)arg2 onRow:(void)arg3 onError:(id)arg4;
- (void)prepQuery:(id)arg1 onPrep:(id)arg2 onError:(void)arg3;
- (_Bool)runQuery:(struct sqlite3_stmt *)arg1 onRow:(id)arg2;
- (_Bool)runQuery:(struct sqlite3_stmt *)arg1 onRow:(id)arg2 onError:(void)arg3;
- (id)errorMessage:(int)arg1;
@property(readonly, nonatomic) struct sqlite3 *handle;
- (void)dealloc;
- (id)initWithFilename:(id)arg1 error:(id *)arg2;

@end

