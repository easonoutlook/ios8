/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol GKMatchmakerRemoteDelegate
- (void)applicationWillEnterForeground;
- (void)setNearbyPlayer:(id)arg1 reachable:(_Bool)arg2;
- (void)inviterCancelled;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setPlayer:(id)arg1 connected:(_Bool)arg2;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setAcceptedInviteInternal:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setHosted:(_Bool)arg1;
@end

