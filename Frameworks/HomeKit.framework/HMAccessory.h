/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HMMessageReceiver-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class HMHome, HMMessageDispatcher, HMRoom, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMAccessory : NSObject <NSSecureCoding, HMMessageReceiver>
{
    _Bool _reachable;
    _Bool _paired;
    _Bool _bridgedAccessory;
    NSString *_name;
    id <HMAccessoryDelegate> _delegate;
    NSArray *_identifiersForBridgedAccessories;
    HMRoom *_room;
    NSArray *_services;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    HMHome *_home;
    NSUUID *_uuid;
    NSMutableDictionary *_pendingRequests;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) _Bool bridgedAccessory; // @synthesize bridgedAccessory=_bridgedAccessory;
@property(nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) NSArray *services; // @synthesize services=_services;
@property(nonatomic) __weak HMRoom *room; // @synthesize room=_room;
@property(copy, nonatomic) NSArray *identifiersForBridgedAccessories; // @synthesize identifiersForBridgedAccessories=_identifiersForBridgedAccessories;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(nonatomic) __weak id <HMAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)_handleConnectivityChanged:(id)arg1;
- (void)_handleRenamed:(id)arg1;
- (void)_handleCharacteristicValueUpdated:(id)arg1;
- (void)_handleServiceRenamed:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)findService:(id)arg1;
- (void)copyFrom:(id)arg1;
- (void)setNotifyValue:(_Bool)arg1 forCharacteristic:(id)arg2;
- (void)updateName:(id)arg1 forService:(id)arg2 completionHandler:(id)arg3;
- (void)updateRoom:(id)arg1 completionHandler:(id)arg2;
- (void)enableNotification:(_Bool)arg1 forCharacteristic:(id)arg2 completionHandler:(id)arg3;
- (void)readValueForCharacteristic:(id)arg1 completionHandler:(id)arg2;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(id)arg3;
- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2 completionHandler:(id)arg3;
- (void)discoverServices:(id)arg1 completionHandler:(id)arg2;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(readonly, nonatomic, getter=isBridged) _Bool bridged;
@property(readonly, nonatomic, getter=isConfigured) _Bool configured;
- (void)_registerNotificationHandlers;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (id)init;

@end

