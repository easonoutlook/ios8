/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUI/GKRemoteUIController.h>

@class NSArray;

@interface GKAccountRemoteUIController : GKRemoteUIController
{
    _Bool _authenticatePlayerOnCompletion;
    long long _mode;
    NSArray *_availableExternalServices;
}

+ (void)accountRemoteUIControllerForMode:(long long)arg1 completionHandler:(id)arg2;
@property(nonatomic) _Bool authenticatePlayerOnCompletion; // @synthesize authenticatePlayerOnCompletion=_authenticatePlayerOnCompletion;
@property(retain, nonatomic) NSArray *availableExternalServices; // @synthesize availableExternalServices=_availableExternalServices;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(id)arg2;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(id)arg2;
- (id)postBodyForInitialLoad;
- (id)bagKey;
- (id)fallbackURL;
- (void)fireCompletionHandler;
- (void)fetchICloudAuthTokenWithHandler:(id)arg1;
- (void)fetchFacebookAuthTokenWithHandler:(id)arg1;
- (void)fetchAvailableExternalServicesWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)initWithMode:(long long)arg1;

@end

