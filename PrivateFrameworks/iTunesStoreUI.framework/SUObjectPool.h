/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SUObjectPool : NSObject
{
    NSMutableDictionary *_poolObjects;
    NSMutableArray *_vendedObjects;
}

@property(readonly, nonatomic) NSArray *vendedObjects; // @synthesize vendedObjects=_vendedObjects;
- (id)copyPoppedObjectForClass:(Class)arg1;
- (id)addObjectsOfClass:(Class)arg1 count:(long long)arg2 forClass:(Class)arg3;
- (void)addObjects:(id)arg1 forClass:(Class)arg2;
- (void)dealloc;

@end

