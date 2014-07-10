/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBKTransactionControllerDelegate <NSObject>
- (void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;
- (void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
- (_Bool)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;

@optional
- (_Bool)transactionController:(id)arg1 shouldScheduleTransaction:(id)arg2;
@end

