/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCRCIndexMap : NSObject <NSCopying, NSCoding>
{
    struct __CFDictionary *_map;
}

- (id)description;
- (void)addObjectsFromIndexMap:(id)arg1;
- (id)indexes;
- (unsigned long long *)_createIndexesWithSize:(unsigned long long *)arg1;
- (unsigned long long)count;
- (id)objectForIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectForIndex:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initAndDeepCopyIndexMap:(id)arg1;
- (id)_initWithIndexMap:(id)arg1;
- (id)init;
- (id)initWithObjects:(id *)arg1 andIndexes:(unsigned long long *)arg2 count:(unsigned long long)arg3;

@end

