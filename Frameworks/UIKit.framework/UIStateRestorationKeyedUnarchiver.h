/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSKeyedUnarchiver.h"

@class NSDictionary;

// Not exported
@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver
{
    NSDictionary *_defaultValues;
}

- (id)decodeObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initForReadingWithData:(id)arg1 defaultValues:(id)arg2;

@end

