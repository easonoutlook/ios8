/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterUI/GKRemoteViewController.h>

#import "SignInServiceViewControllerDelegate-Protocol.h"

@class GKGame;

@interface GKRemoteSignInViewController : GKRemoteViewController <SignInServiceViewControllerDelegate>
{
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void)remoteViewControllerIsCanceling;
- (void)unlockRotation;
- (id)_managingHostedAuthenticateViewController;
- (_Bool)serviceNeedsLocalPlayer;
- (void)populateInitialStateForRemoteView:(id)arg1;

// Remaining properties
@property(retain, nonatomic) GKGame *game;

@end
