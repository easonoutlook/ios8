/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PSSpecifierObserver <NSObject>
@property(readonly, nonatomic) long long observerType;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
@end

