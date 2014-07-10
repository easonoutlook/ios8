/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSAccountStore.h>

@class NSArray;

@interface SSClientAccountStore : SSAccountStore
{
    NSArray *_accounts;
    _Bool _accountsValid;
}

- (void)_signOutWithAccountIDs:(id)arg1;
- (void)_reloadAccountsIfNeeded;
- (void)_invalidateAccounts;
- (id)_copyReloadedAccounts;
- (id)_accountWithUniqueIdentifier:(id)arg1;
- (id)_addAccount:(id)arg1 asActiveAccount:(_Bool)arg2 activeLockerAccount:(_Bool)arg3;
- (void)signOutAllAccounts;
- (void)signOutAccount:(id)arg1;
- (id)setActiveLockerAccount:(id)arg1;
- (id)setActiveAccount:(id)arg1;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (void)reloadAccounts;
- (id)activeLockerAccount;
- (id)activeAccount;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(_Bool)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 scope:(long long)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (id)addAccount:(id)arg1;
@property(copy) NSArray *accounts; // @dynamic accounts;
- (void)updateAccountsWithMessage:(id)arg1 completionBlock:(id)arg2;
- (void)dealloc;
- (id)init;

@end

