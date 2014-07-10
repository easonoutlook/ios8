/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreBookkeeper/SBKStoreURLBagContext.h>

@class NSString, NSURL;

// Not exported
@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext
{
}


// Remaining properties
@property(copy) NSString *domain;
@property _Bool domainDisabled;
@property double pollingIntervalInSeconds;
@property(retain) NSURL *pullAllKeyValueRequestURL;
@property(retain) NSURL *pullKeyValueRequestURL;
@property(retain) NSURL *pushAllKeyValueRequestURL;
@property(retain) NSURL *pushKeyValueRequestURL;
@property(retain) NSURL *syncRequestURL;
@end

