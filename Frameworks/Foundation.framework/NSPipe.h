/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileHandle;

@interface NSPipe : NSObject
{
}

+ (id)pipe;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, retain) NSFileHandle *fileHandleForWriting;
@property(readonly, retain) NSFileHandle *fileHandleForReading;
- (id)init;

@end

