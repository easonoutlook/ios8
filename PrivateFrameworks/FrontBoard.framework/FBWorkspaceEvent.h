/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BSEventQueueEvent.h"

@class NSArray;

@interface FBWorkspaceEvent : BSEventQueueEvent
{
    NSArray *_callStackSymbols;
}

@property(retain, nonatomic) NSArray *callStackSymbols; // @synthesize callStackSymbols=_callStackSymbols;
- (void)execute;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end

