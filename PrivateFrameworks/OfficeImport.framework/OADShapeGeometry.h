/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

// Not exported
@interface OADShapeGeometry : NSObject
{
    _Bool mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (id)description;
- (unsigned long long)adjustValueCount;
- (_Bool)hasAdjustValueAtIndex:(unsigned int)arg1;
- (int)adjustValueAtIndex:(unsigned int)arg1;
- (void)setAdjustValue:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setIsEscher:(_Bool)arg1;
- (_Bool)isEscher;
- (id)adjustValues;
- (void)dealloc;
- (id)init;

@end

