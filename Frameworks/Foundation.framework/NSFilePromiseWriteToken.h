/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSURL;

// Not exported
@interface NSFilePromiseWriteToken : NSObject
{
    NSURL *promiseURL;
    NSURL *logicalURL;
}

@property(copy) NSURL *logicalURL; // @synthesize logicalURL;
@property(copy) NSURL *promiseURL; // @synthesize promiseURL;
- (void)dealloc;

@end

