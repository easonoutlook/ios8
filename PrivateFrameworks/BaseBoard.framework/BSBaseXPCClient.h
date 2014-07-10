/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BSSignal, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface BSBaseXPCClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    BSSignal *_invalidationSignal;
    NSObject<OS_xpc_object> *_serverEndpoint;
    NSString *_serviceName;
    _Bool _suspended;
    _Bool _clientInvalidated;
    int _notifyToken;
}

- (void)queue_invalidate;
- (void)queue_reconnectToResumedServerIfNecessary;
- (void)queue_reregister;
- (_Bool)queue_isSuspended;
- (id)queue_connection;
- (void)queue_registerWithServerIfNecessary;
- (id)_connectionInstanceUUID;
- (void)queue_suspendConnection;
- (void)queue_resumeConnection;
- (void)queue_connectionWasInvalidated;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasDestroyed;
- (void)queue_connectionWasSuspended;
- (void)queue_connectionWasResumed;
- (void)queue_connectionWasCreated;
- (void)queue_handleMessage:(id)arg1;
- (void)_setEndpoint:(id)arg1;
- (id)_connection;
- (id)_notifyTokenName;
- (void)_sendMessage:(id)arg1 withReplyHandler:(void)arg2 waitForReply:(id)arg3 waitDuration:(void)arg4;
- (void)_sendMessage:(id)arg1;
- (void)_sendReply:(id)arg1 messagePacker:(id)arg2;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (id)_errorFromMessageIfAny:(id)arg1;
- (void)invalidate;
- (void)resumeConnection;
- (void)suspendConnection;
- (void)reconnectIfNecessary;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (id)initWithServiceName:(id)arg1;

@end
