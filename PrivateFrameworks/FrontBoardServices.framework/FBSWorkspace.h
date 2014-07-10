/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "FBSWorkspaceClientDelegate-Protocol.h"

@class FBSSerialQueue, FBSWorkspaceClient, NSArray, NSMutableDictionary;

@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate>
{
    id <FBSWorkspaceDelegate> _delegate;
    struct {
        unsigned int didBeginTransaction:1;
        unsigned int didEndTransaction:1;
        unsigned int didCreateScene:1;
        unsigned int willDestroyScene:1;
        unsigned int didReceiveActions:1;
    } _delegateFlags;
    FBSWorkspaceClient *_client;
    NSMutableDictionary *_scenesByIdentifier;
    FBSSerialQueue *_queue;
}

@property(readonly, retain, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) id <FBSWorkspaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)client:(id)arg1 handleActions:(id)arg2;
- (void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(id)arg3;
- (void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(id)arg3;
- (void)clientEndTransaction:(id)arg1;
- (void)clientBeginTransaction:(id)arg1;
- (void)clientSystemApplicationTerminated:(id)arg1;
- (id)_queue_sceneWithIdentifier:(id)arg1;
- (id)_client;
- (id)_newClient;
- (id)description;
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(id)arg2;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(id)arg2;
- (void)enumerateScenesWithBlock:(id)arg1;
- (id)sceneWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *scenes;
- (void)dealloc;
- (id)initWithSerialQueue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;
- (_Bool)isUIApplicationWorkspace;

@end

