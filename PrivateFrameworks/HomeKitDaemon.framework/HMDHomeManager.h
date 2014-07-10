/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HMDHomeFinderDelegate-Protocol.h"
#import "HMMessageReceiver-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"

@class HMDAccessoryManager, HMDCloudSync, HMDHomeFinder, HMDIDSMessageDispatcher, HMDLocation, HMDPersistentStore, HMMessageDispatcher, NSData, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSUUID;

@interface HMDHomeManager : NSObject <HMMessageReceiver, IDSServiceDelegate, HMDHomeFinderDelegate>
{
    NSUUID *_uuid;
    HMDPersistentStore *_store;
    NSMutableArray *_homes;
    NSMutableDictionary *_homeNames;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_messageDispatcher;
    HMDIDSMessageDispatcher *_idsMessageDispatcher;
    HMDAccessoryManager *_accessoryManager;
    HMDCloudSync *_cloudSync;
    NSData *_cloudSyncToken;
    HMDHomeFinder *_homeFinder;
    HMDLocation *_currentLocation;
}

+ (_Bool)isRemoteAccessOverIDSEnabled;
@property(retain, nonatomic) HMDLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) HMDHomeFinder *homeFinder; // @synthesize homeFinder=_homeFinder;
@property(retain, nonatomic) NSData *cloudSyncToken; // @synthesize cloudSyncToken=_cloudSyncToken;
@property(retain, nonatomic) HMDCloudSync *cloudSync; // @synthesize cloudSync=_cloudSync;
@property(retain, nonatomic) HMDAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) HMDIDSMessageDispatcher *idsMessageDispatcher; // @synthesize idsMessageDispatcher=_idsMessageDispatcher;
@property(retain, nonatomic) HMMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *homeNames; // @synthesize homeNames=_homeNames;
@property(retain, nonatomic) NSMutableArray *homes; // @synthesize homes=_homes;
@property(retain, nonatomic) HMDPersistentStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)teardownRemoteAccessForHome:(id)arg1;
- (void)setupRemoteAccessForHome:(id)arg1;
- (void)homeFinder:(id)arg1 didUpdateCurrentLocation:(id)arg2;
- (void)_handleElectPeerForRemoteAccess:(id)arg1;
- (void)_handleAreYouAtHome:(id)arg1;
- (void)_handleResetConfiguration:(id)arg1;
- (void)_handleUserAdded:(id)arg1;
- (void)_sendUserAdded:(id)arg1 toHome:(id)arg2 accessoryIdentities:(id)arg3;
- (void)_acceptHomeInvite:(id)arg1;
- (void)_handleAccessHomeInvite:(id)arg1;
- (void)_sendInviteRequest:(id)arg1 forHome:(id)arg2 confirm:(_Bool)arg3 queue:(id)arg4 completionHandler:(id)arg5;
- (void)_handleRequestSetPrimaryHome:(id)arg1;
- (void)_handleRequestRemoveHome:(id)arg1;
- (void)_handleRequestAddHome:(id)arg1;
- (void)_handleRequestFetchHomeConfiguration:(id)arg1;
- (void)_registerForMessages;
- (void)_handleHomeConfigFromCloud:(id)arg1 updatedToken:(id)arg2 homeConfiguration:(id)arg3;
- (void)_registerForCloudSync;
- (void)_configureHomes:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)_isValidHomeName:(id)arg1;
- (void)_removeHomeName:(id)arg1;
- (void)_addHomeName:(id)arg1;
- (void)renameHome:(id)arg1 message:(id)arg2;
- (id)isValidHomeName:(id)arg1;
- (void)removeHomeName:(id)arg1;
- (void)addHomeName:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (id)_homeWithName:(id)arg1;
- (void)sendUserAdded:(id)arg1 toHome:(id)arg2 accessoryIdentities:(id)arg3;
- (void)sendInviteRequest:(id)arg1 forHome:(id)arg2 confirm:(_Bool)arg3 queue:(id)arg4 completionHandler:(id)arg5;
- (void)save;
- (void)saveLocal;
- (void)dealloc;
- (id)initWithMessageDispatcher:(id)arg1 idsMessageDispatcher:(id)arg2 accessoryManager:(id)arg3 homes:(id)arg4 store:(id)arg5;

@end

