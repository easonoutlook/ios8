/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSULRUCache.h>

// Not exported
@interface TSUAtomicLRUCache : TSULRUCache
{
}

- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (id)allKeys;
- (id)allValues;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

