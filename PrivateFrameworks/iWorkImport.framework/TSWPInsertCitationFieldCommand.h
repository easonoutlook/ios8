/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPTextCommand.h>

@class NSMutableArray;

// Not exported
@interface TSWPInsertCitationFieldCommand : TSWPTextCommand
{
    NSMutableArray *_citationRecords;
}

- (int)persistenceKind;
- (void)doCommit;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 forSelection:(id)arg2 forCitations:(id)arg3;

@end

