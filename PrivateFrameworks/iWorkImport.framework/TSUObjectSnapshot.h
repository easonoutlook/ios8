/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

// Not exported
@interface TSUObjectSnapshot : NSObject
{
    unsigned long long mEntryCount;
    void **mSnapshot;
    NSArray *mCompared;
}

- (void)dealloc;
- (void)p_clear;
- (void)compare;
- (void)calibrate:(id)arg1;
- (id)init;

@end

