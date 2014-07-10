/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BSAction.h"

@class NSDictionary, NSString;

@interface UIHandleRemoteNotificationAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponse:(id)arg1;
- (long long)UIActionType;
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, copy, nonatomic) NSDictionary *payload;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(id)arg3;
- (id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(id)arg2;
- (id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 type:(long long)arg3 withHandler:(id)arg4;

@end
