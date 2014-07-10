/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HMMessageReceiver-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class HMHome, HMMessageDispatcher, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMTrigger : NSObject <HMMessageReceiver, NSSecureCoding>
{
    _Bool _enabled;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    HMMessageDispatcher *_msgDispatcher;
    NSMutableArray *_currentActionSets;
    HMHome *_home;
    NSMutableDictionary *_pendingRequests;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSMutableArray *currentActionSets; // @synthesize currentActionSets=_currentActionSets;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (void)handleUpdatedActionSetNotification:(id)arg1;
- (void)handleTriggerFiredNotification:(id)arg1;
- (void)_handleTriggerFired:(id)arg1;
- (void)handleTriggerActivatedNotification:(id)arg1;
- (void)handleTriggerRenamedNotification:(id)arg1;
- (id)serializeForAdd;
- (void)enable:(_Bool)arg1 completionHandler:(id)arg2;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (void)removeActionSet:(id)arg1 completionHandler:(id)arg2;
- (void)addActionSet:(id)arg1 completionHandler:(id)arg2;
- (void)_updateActionSet:(id)arg1 add:(_Bool)arg2 completionHandler:(id)arg3;
@property(readonly, copy, nonatomic) NSArray *actionSets;
- (void)invalidate;
- (void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (id)initWithName:(id)arg1;

@end

