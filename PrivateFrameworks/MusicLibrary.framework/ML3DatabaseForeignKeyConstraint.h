/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseTable, NSArray;

@interface ML3DatabaseForeignKeyConstraint : NSObject
{
    ML3DatabaseTable *_foreignTable;
    NSArray *_localColumns;
    NSArray *_foreignColumns;
}

@property(readonly, nonatomic) NSArray *foreignColumns; // @synthesize foreignColumns=_foreignColumns;
@property(readonly, nonatomic) NSArray *localColumns; // @synthesize localColumns=_localColumns;
@property(readonly, nonatomic) ML3DatabaseTable *foreignTable; // @synthesize foreignTable=_foreignTable;
- (void).cxx_destruct;
- (id)_foreignKeyClauseSQL;
- (id)initWithForeignTable:(id)arg1 localColumns:(id)arg2 foreignColumns:(id)arg3;

@end

