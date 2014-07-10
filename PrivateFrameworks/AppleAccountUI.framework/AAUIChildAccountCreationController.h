/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "RUIObjectModelDelegate-Protocol.h"

@class AAGrandSlamSigner, AASetupAssistantService, NSMutableArray, NSURL, RUILoader, UINavigationController;

@interface AAUIChildAccountCreationController : NSObject <RUIObjectModelDelegate>
{
    AASetupAssistantService *_setupService;
    AAGrandSlamSigner *_grandSlamSigner;
    NSURL *_launchingURL;
    NSMutableArray *_objectModels;
    RUILoader *_loader;
    id <AAUIChildAccountCreationDelegate> _delegate;
    UINavigationController *_navigationController;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <AAUIChildAccountCreationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (void)_displayConnectionErrorAndCancel;
- (void)_cancel;
- (void)_createChildAccount;
- (void)_addHeadersToRequest:(id)arg1;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)_cleanupRemoteUILoader;
- (void)_startRemoteUILoaderWithRequest:(id)arg1;
- (void)loadRemoteUI;
- (id)initWithGrandSlamSigner:(id)arg1;

@end

