/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEnumerator.h"

@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator
{
    NSMutableArray *_mailboxes;
    unsigned long long _index;
}

- (id)nextObject;
- (id)initWithMailbox:(id)arg1;
- (void)dealloc;

@end

