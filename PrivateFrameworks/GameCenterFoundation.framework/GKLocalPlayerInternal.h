/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSArray, NSNumber, NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal
{
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
}

+ (id)secureCodedPropertyKeys;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (unsigned short)numberOfChallenges;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (unsigned short)numberOfTurns;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (unsigned short)numberOfRequests;
- (id)iCloudUserID;
- (void)setFacebookUserID:(id)arg1;
- (id)facebookUserID;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (int)defaultFamiliarity;
- (void)setICloudUserID:(id)arg1;
- (_Bool)isFriend;
- (_Bool)isLocalPlayer;
- (void)setPhotoPending:(_Bool)arg1;
- (_Bool)isPhotoPending;
- (void)setFindable:(_Bool)arg1;
- (_Bool)isFindable;
- (void)setUnderage:(_Bool)arg1;
- (_Bool)isUnderage;
- (void)setPurpleBuddyAccount:(_Bool)arg1;
- (_Bool)isPurpleBuddyAccount;
- (void)dealloc;

@end

