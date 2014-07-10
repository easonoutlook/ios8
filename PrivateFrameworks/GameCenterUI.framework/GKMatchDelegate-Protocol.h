/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GKMatchDelegate <NSObject>

@optional
- (_Bool)match:(id)arg1 shouldReinvitePlayer:(id)arg2;
- (_Bool)match:(id)arg1 shouldReinviteDisconnectedPlayer:(id)arg2;
- (void)match:(id)arg1 didFailWithError:(id)arg2;
- (void)match:(id)arg1 player:(id)arg2 didChangeState:(long long)arg3;
- (void)match:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
- (void)match:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
- (void)match:(id)arg1 didReceiveData:(id)arg2 fromRemotePlayer:(id)arg3;
@end

