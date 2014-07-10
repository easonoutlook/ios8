/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface IMAccountController : NSObject
{
    NSMutableArray *_accounts;
    NSMutableDictionary *_accountMap;
    _Bool _isReadOnly;
    _Bool _cachesEnabled;
    NSArray *_operationalAccountsCache;
    NSMutableDictionary *_serviceToActiveAccountsMap;
    NSMutableDictionary *_serviceToAccountsMap;
    NSMutableDictionary *_serviceToConnectedAccountsMap;
    NSMutableDictionary *_serviceToOperationalAccountsMap;
}

+ (id)bestAccountFromAccounts:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void)_rebuildOperationalAccountsCache:(_Bool)arg1;
- (void)_disableCache;
- (void)_enableCache;
- (id)jabberAccount;
- (id)aimAccount;
- (id)mostLoggedInAccount;
- (id)bestAccountWithCapability:(unsigned long long)arg1;
- (id)bestConnectedAccountForService:(id)arg1;
- (id)bestActiveAccountForService:(id)arg1;
- (id)bestOperationalAccountForService:(id)arg1;
- (id)bestAccountForService:(id)arg1;
- (id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3;
@property(readonly, nonatomic) id bestAccountForStatus;
- (_Bool)canActivateAccounts:(id)arg1;
- (_Bool)canActivateAccount:(id)arg1;
- (_Bool)accountConnected:(id)arg1;
- (_Bool)accountConnecting:(id)arg1;
- (_Bool)activateAndHandleReconnectAccount:(id)arg1;
- (_Bool)activateAndHandleReconnectAccounts:(id)arg1;
- (_Bool)activateAccount:(id)arg1 force:(_Bool)arg2 locally:(_Bool)arg3;
- (_Bool)activateAccount:(id)arg1 force:(_Bool)arg2;
- (_Bool)activateAccount:(id)arg1;
- (_Bool)activateAccount:(id)arg1 locally:(_Bool)arg2;
- (_Bool)activateAccounts:(id)arg1;
- (_Bool)activateAccounts:(id)arg1 force:(_Bool)arg2 locally:(_Bool)arg3;
- (_Bool)deactivateAccount:(id)arg1 withDisable:(_Bool)arg2;
- (_Bool)deactivateAccounts:(id)arg1;
- (_Bool)_deactivateAccounts:(id)arg1;
- (_Bool)deactivateAccount:(id)arg1;
- (_Bool)_deactivateAccount:(id)arg1;
- (_Bool)deactivateAccounts:(id)arg1 withDisable:(_Bool)arg2;
- (_Bool)deleteAccount:(id)arg1 locally:(_Bool)arg2;
- (_Bool)deleteAccount:(id)arg1;
- (_Bool)addAccount:(id)arg1 locally:(_Bool)arg2;
- (_Bool)addAccount:(id)arg1 atIndex:(int)arg2 locally:(_Bool)arg3;
- (_Bool)addAccount:(id)arg1 atIndex:(int)arg2;
- (_Bool)addAccount:(id)arg1;
- (void)_accountRegistrationStatusChanged:(id)arg1;
- (void)_activeAccountChanged:(id)arg1;
- (void)setReadOnly:(_Bool)arg1;
- (_Bool)readOnly;
- (_Bool)accountActive:(id)arg1;
- (_Bool)canDeleteAccount:(id)arg1;
- (id)connectedAccountsWithCapability:(unsigned long long)arg1;
- (id)operationalAccountsWithCapability:(unsigned long long)arg1;
- (id)accountsWithCapability:(unsigned long long)arg1;
- (id)connectedAccountsForService:(id)arg1;
- (id)operationalAccountsForService:(id)arg1;
- (id)activeAccountsForService:(id)arg1;
- (id)accountsForService:(id)arg1;
@property(readonly, nonatomic) NSArray *operationalAccounts;
@property(readonly, nonatomic) NSArray *connectedAccounts;
@property(readonly, nonatomic) NSArray *activeAccounts;
@property(readonly, nonatomic) NSMutableArray *_accounts;
@property(readonly, nonatomic) int numberOfAccounts;
- (id)accountAtIndex:(int)arg1;
- (id)accountForUniqueID:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)autoLogin;
- (id)_bestOperationalAccountForSendingForService:(id)arg1;
- (id)__iCloudSystemAccountForService:(id)arg1;
- (id)_bestAccountForAddresses:(id)arg1;
- (id)_operationalPhoneAccountForService:(id)arg1;

@end

