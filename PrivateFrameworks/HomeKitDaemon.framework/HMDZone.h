/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HMMessageReceiver-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class HMDHome, HMMessageDispatcher, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDZone : NSObject <HMMessageReceiver, NSSecureCoding>
{
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_currentRooms;
    HMDHome *_home;
    HMMessageDispatcher *_msgDispatcher;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSMutableArray *currentRooms; // @synthesize currentRooms=_currentRooms;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)removeRoom:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_registerForMessages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)roomWithName:(id)arg1;
- (id)rooms;
- (void)configure:(id)arg1 queue:(id)arg2;
- (id)initWithName:(id)arg1 home:(id)arg2 queue:(id)arg3;

@end

