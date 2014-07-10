/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface NSCache : NSObject
{
    id _delegate;
    void *_private[5];
    void *_reserved;
}

- (id)allObjects;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(_Bool)arg1;
- (_Bool)evictsObjectsWhenApplicationEntersBackground;
@property _Bool evictsObjectsWithDiscardedContent;
@property unsigned long long countLimit;
@property unsigned long long totalCostLimit;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property id <NSCacheDelegate> delegate;
@property(copy) NSString *name;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
