/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CPLTransaction : NSObject
{
}

+ (unsigned long long)transactionCount;
+ (id)transactions;
+ (void)endTransactionWithReason:(id)arg1;
+ (void)beginTransactionWithReason:(id)arg1 keepPower:(_Bool)arg2;

@end

