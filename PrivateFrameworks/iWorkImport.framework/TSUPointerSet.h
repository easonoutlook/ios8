/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSSet.h"

// Not exported
@interface TSUPointerSet : NSSet
{
    struct __CFSet *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)allObjects;
- (void)getObjects:(id *)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCFSet:(struct __CFSet *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (void)dealloc;

@end

