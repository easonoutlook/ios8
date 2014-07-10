/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSDaemonListenerProtocol-Protocol.h"

@class CUTWeakReference, NSObject<OS_dispatch_queue>;

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol>
{
    id _delegateContext;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
}

@property(readonly) long long state; // @synthesize state=_state;
- (void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidUpdateState:(long long)arg1;
- (void)_callDelegateWithBlock:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_handleReconnect;
- (void)disconnectFromPeer:(id)arg1;
- (void)connectToPeer:(id)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 delegateContext:(id)arg3;

@end

