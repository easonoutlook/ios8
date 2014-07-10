/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPDistributedNotificationCenter, NSXPCConnection;

@interface AOSNotifySession : NSObject
{
    NSXPCConnection *_xpcConnection;
    CPDistributedNotificationCenter *_center;
}

+ (id)copyStoreAccount;
+ (id)sharedInstance;
@property(retain, nonatomic) CPDistributedNotificationCenter *center; // @synthesize center=_center;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (id)retrieveAllAccounts:(id *)arg1;
- (_Bool)performMigration;
- (void)dumpDebugInfo:(id)arg1;
- (void)stopListeningOnTopic:(id)arg1;
- (void)startListeningOnTopic:(id)arg1;
- (void)renewFMFAccountCredentialsUsingCallback:(id)arg1;
- (void)retrieveFMFAccountUsingCallback:(id)arg1;
- (void)removeLegacyFMFAccountUsingCallback:(id)arg1;
- (void)retrieveLegacyFMFAccountUsingCallback:(id)arg1;
- (id)serverProxy;
- (id)retrieveFMFAccount:(id *)arg1;
- (id)removeFMFAccountWithUsername:(id)arg1;
- (id)addFMFAccount:(id)arg1;
- (void)didExitFMFRegion:(id)arg1 atLocation:(id)arg2;
- (void)didEnterFMFRegion:(id)arg1 atLocation:(id)arg2;
- (id)iCloudAccount;
- (id)storeAccount;
- (id)fmfDeviceId;
- (id)disableActivationLockUsingToken:(id)arg1;
- (id)enableActivationLock;
- (void)activationLockStateWithCompletion:(id)arg1;
- (void)isActivationLockStateChangeInProgressWithCompletion:(id)arg1;
- (id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2;
- (id)enableFMIPInContext:(unsigned long long)arg1;
- (id)fmipAccount;
- (id)fmipDeviceId;
- (void)fmipStateWithCompletion:(id)arg1;
- (void)isFMIPStateChangeInProgressWithCompletion:(id)arg1;
- (void)deviceActivationDidSucceed;
- (_Bool)lockdownShouldDisableDevicePairing;
- (_Bool)lockdownShouldDisableDeviceRestore;
- (void)disableLostMode;
- (id)enableLostModeWithInfo:(id)arg1;
- (id)lostModeParams;
- (id)lostModeInfo;
- (_Bool)lostModeIsActive;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (void)_destroyXPCConnection;
- (id)currentXPCConnection;
- (void)dealloc;
- (id)init;

@end

