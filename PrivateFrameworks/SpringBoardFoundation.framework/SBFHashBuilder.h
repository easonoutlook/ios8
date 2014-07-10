/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBFHashBuilder : NSObject
{
}

+ (unsigned long long)doubleHash:(double)arg1;
+ (unsigned long long)unsignedIntegerHash:(unsigned long long)arg1;
+ (unsigned long long)integerHash:(long long)arg1;
+ (unsigned long long)boolHash:(_Bool)arg1;
+ (unsigned long long)arrayHash:(id)arg1;
+ (unsigned long long)pointerHash:(void *)arg1;
+ (unsigned long long)objectHash:(id)arg1;
+ (unsigned long long)hashWithBlocks:(id)arg1;

@end

