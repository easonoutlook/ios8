/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSSpecifierObserver-Protocol.h"

@protocol PSSearchIndexOperationDelegate <PSSpecifierObserver>
- (void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;
- (void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;

@optional
- (void)searchIndexOperationDidCancel:(id)arg1;
@end
