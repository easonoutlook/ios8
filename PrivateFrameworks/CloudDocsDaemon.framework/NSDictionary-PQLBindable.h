/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDictionary.h"

#import "PQLBindable-Protocol.h"

@interface NSDictionary (PQLBindable) <PQLBindable>
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
@end

