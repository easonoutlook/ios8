/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSIndexPath.h"

// Not exported
@interface UIMutableIndexPath : NSIndexPath
{
    unsigned long long *_mutableIndexes;
    _Bool _locked;
}

+ (void)setIndex:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 forIndexPath:(id *)arg3;
- (id)retain;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)getIndexes:(unsigned long long *)arg1;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithIndexes:(const unsigned long long *)arg1 length:(unsigned long long)arg2;

@end
