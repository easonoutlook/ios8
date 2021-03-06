/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BSBaseXPCClient.h"

#import "FBSSceneUpdater-Protocol.h"

@class BSBasicServerClient, FBSSerialQueue, NSMutableArray, NSMutableDictionary;

@interface FBSWorkspaceClient : BSBaseXPCClient <FBSSceneUpdater>
{
    FBSSerialQueue *_callOutQueue;
    BSBasicServerClient *_client;
    NSMutableArray *_queuedMessages;
    NSMutableDictionary *_sceneIDToSceneHandlerMap;
    _Bool _inTransaction;
    id <FBSWorkspaceClientDelegate> _delegate;
}

@property(readonly, retain, nonatomic) FBSSerialQueue *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(nonatomic) id <FBSWorkspaceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)queue_connectionWasInterrupted;
- (void)queue_handleMessage:(id)arg1;
- (id)_loggingProem;
- (void)_queue_handleSceneActions:(id)arg1;
- (void)_queue_handleActions:(id)arg1;
- (void)_queue_handleDestroyScene:(id)arg1;
- (void)_queue_handleSceneUpdate:(id)arg1;
- (void)_queue_handleCreateScene:(id)arg1;
- (void)_queue_handleTransactionBookEnd;
- (void)_queue_ensureTransaction;
- (void)_queue_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 withResponseEvent:(id)arg3 ofType:(void)arg4;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (id)_queue_workspaceEventFromMessage:(id)arg1 ofType:(Class)arg2;
- (_Bool)queue_handleMessageWithType:(long long)arg1 message:(id)arg2 client:(id)arg3;
- (void)_debugLog:(id)arg1;
- (void)_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (void)_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (id)description;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 didDetachContext:(id)arg2;
- (void)scene:(id)arg1 didReceiveUpdateToContext:(id)arg2;
- (void)scene:(id)arg1 didAttachContext:(id)arg2;
- (_Bool)willObserveContextsManually;
- (void)unregisterDelegateForSceneID:(id)arg1;
- (void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
- (void)sendDestroySceneRequestEvent:(id)arg1 withCompletion:(id)arg2;
- (void)sendCreateSceneRequestEvent:(id)arg1 withCompletion:(id)arg2;
- (void)dealloc;
- (id)initWithCallOutQueue:(id)arg1;

@end

