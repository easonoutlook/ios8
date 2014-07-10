/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol TSPComponentDelegate <NSObject>
- (void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;
- (void)flushComponent:(id)arg1 isDiscardingContent:(_Bool)arg2;
- (void)cacheComponent:(id)arg1 isDiscardingContent:(_Bool)arg2;
- (id)objectForIdentifier:(long long)arg1;
- (_Bool)shouldKeepAllCachedObjectsInMemory;
- (_Bool)isActive;
@end

