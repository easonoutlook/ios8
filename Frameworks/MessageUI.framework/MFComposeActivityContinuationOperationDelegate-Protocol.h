/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MFComposeActivityContinuationOperationDelegate <NSObject>
- (void)activityContinuationOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)activityContinuationOperation:(id)arg1 didFinishSendingDataWithResult:(unsigned long long)arg2;
- (void)activityContinuationOperation:(id)arg1 didFinishReceivingData:(id)arg2;
- (void)activityContinuationOperationReceivedBytes:(id)arg1;
@end

