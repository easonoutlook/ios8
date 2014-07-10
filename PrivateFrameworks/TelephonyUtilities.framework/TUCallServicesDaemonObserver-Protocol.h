/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol TUCallServicesDaemonObserver
- (void)handleDeviceListSupportsRelayCallingChanged:(_Bool)arg1;
- (void)handleRelayCallingEnabledChanged:(_Bool)arg1;
- (void)handleCallModelStateChanged:(id)arg1;
- (void)handleCurrentProxyCallsChanged:(id)arg1;
- (void)handleCallContinuityStateChangedForProxyCall:(id)arg1;
- (void)handleCallStatusChangedForProxyCall:(id)arg1;
- (void)handleLocalFrequencyChangedTo:(id)arg1;
- (void)handleDisconnectedReasonChangedTo:(int)arg1 forCallWithUUID:(id)arg2;
- (void)handleEndpointOnCurrentDeviceChangedTo:(_Bool)arg1 forCallWithUUID:(id)arg2;
- (void)handleWantsHoldMusicChangedTo:(_Bool)arg1 forCallWithUUID:(id)arg2;
@end
