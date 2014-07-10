/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "FMFXPCInternalClientProtocol-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSXPCConnection;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol>
{
    _Bool _isModelInitialized;
    id <FMFSessionDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    NSMutableSet *_internalHandles;
    NSXPCConnection *_connection;
    NSSet *_cachedGetHandlesSharingLocationsWithMe;
    NSSet *_cachedGetHandlesFollowingMyLocation;
    NSMutableDictionary *_cachedLocationForHandleByHandle;
    NSMutableDictionary *_cachedOfferExpirationForHandleByHandle;
    NSMutableDictionary *_cachedCanShareLocationWithHandleByHandle;
}

+ (_Bool)FMFRestricted;
+ (id)gestaltQuery:(struct __CFString *)arg1;
+ (_Bool)FMFAllowed;
+ (id)sharedInstance;
@property(nonatomic) _Bool isModelInitialized; // @synthesize isModelInitialized=_isModelInitialized;
@property(retain, nonatomic) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle; // @synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedOfferExpirationForHandleByHandle; // @synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedLocationForHandleByHandle; // @synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle;
@property(retain, nonatomic) NSSet *cachedGetHandlesFollowingMyLocation; // @synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation;
@property(retain, nonatomic) NSSet *cachedGetHandlesSharingLocationsWithMe; // @synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableSet *internalHandles; // @synthesize internalHandles=_internalHandles;
@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <FMFSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (void)receivedMappingPacket:(id)arg1 completion:(id)arg2;
- (void)removeHandles:(id)arg1;
- (void)addHandles:(id)arg1;
@property(copy, nonatomic) NSSet *handles;
- (oneway void)modelDidLoad;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (oneway void)setLocations:(id)arg1;
- (void)forceRefresh;
- (_Bool)hasModelInitialized;
- (void)invalidate;
- (void)dispatchOnDelegateQueue:(id)arg1;
- (id)serverProxy;
- (void)invalidateWithError:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)locatingInProgressChanged:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;
- (id)verifyRestrictionsAndShowDialogIfRequired;
- (void)getAbRecordIdForHandle:(id)arg1 completion:(id)arg2;
- (void)getPrettyNameForHandle:(id)arg1 completion:(id)arg2;
- (void)removeDevice:(id)arg1 completion:(id)arg2;
- (void)getAllDevices:(id)arg1;
- (id)getAllDevices;
- (id)getActiveLocationSharingDevice;
- (oneway void)_iCloudAccountNameWithCompletion:(id)arg1;
- (void)locationForHandle:(id)arg1 completion:(id)arg2;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(id)arg4;
- (void)getHandlesWithPendingOffers:(id)arg1;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(id)arg3;
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)isMyLocationEnabled:(id)arg1;
- (void)setHideMyLocationEnabled:(_Bool)arg1 completion:(id)arg2;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(id)arg2;
- (void)getHandlesFollowingMyLocation:(id)arg1;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(id)arg2;
- (void)getHandlesSharingLocationsWithMe:(id)arg1;
- (void)setActiveDevice:(id)arg1 completion:(id)arg2;
- (void)getActiveLocationSharingDevice:(id)arg1;
- (void)getAllLocations:(id)arg1;
- (void)getPendingFriendshipRequestsWithCompletion:(id)arg1;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)declineFriendshipRequest:(id)arg1 completion:(id)arg2;
- (void)approveFriendshipRequest:(id)arg1 completion:(id)arg2;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)_sendFriendshipOfferWithAutoSwitchMeDeviceForHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)_sendFriendshipOfferWithoutTryingToSwitchMeDeviceForHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)reloadDataIfNotLoaded;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)cachedLocationForHandle:(id)arg1;
- (_Bool)isMyLocationEnabled;
- (id)getHandlesWithPendingOffers;
- (_Bool)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (_Bool)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)getHandlesFollowingMyLocation;
- (id)getHandlesSharingLocationsWithMe;

@end

