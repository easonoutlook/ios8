/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "PQLBindable-Protocol.h"
#import "PQLResultSetInitializer-Protocol.h"

@class NSString;

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLBindable, PQLResultSetInitializer>
{
    unsigned char _uuid[16];
    unsigned char _kind;
}

+ (_Bool)supportsSecureCoding;
+ (id)documentsItemID;
+ (id)rootItemID;
+ (void)initialize;
@property(readonly, nonatomic) unsigned char kind; // @synthesize kind=_kind;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (id)initWithSqlite3Value:(struct Mem *)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithKind:(unsigned char)arg1 bytes:(const void *)arg2 length:(unsigned long long)arg3;
- (id)init;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToItemID:(id)arg1;
- (id)description;
@property(readonly, nonatomic) const char *UTF8String;
@property(readonly, nonatomic) NSString *itemIDString;
@property(readonly, nonatomic) _Bool isDocuments;
@property(readonly, nonatomic) _Bool isRoot;

@end

