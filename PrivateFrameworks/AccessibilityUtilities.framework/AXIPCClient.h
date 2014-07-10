/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AXAccessQueue, NSLock, NSMutableArray, NSString;

@interface AXIPCClient : NSObject
{
    struct __CFMachPort *_serverPort;
    NSLock *_serverPortLock;
    unsigned int _assignedServerMachPort;
    id _portDeathHandler;
    float _timeout;
    NSString *_clientIdentifier;
    struct __CFRunLoopSource *_clientSource;
    unsigned long long _connectionAttempts;
    _Bool _connected;
    _Bool shouldRegisterCallbackSourceOnMainRunloop;
    _Bool _usesPerPidLookup;
    unsigned int clientCallbackPort;
    int _pid;
    NSString *_serviceName;
    NSMutableArray *_postConnectionTasks;
    AXAccessQueue *_connectionQueue;
    struct __CFRunLoopSource *clientCallbackSource;
    AXAccessQueue *_portDeathAccessQueue;
}

+ (id)allClients;
+ (void)initialize;
@property(retain, nonatomic) AXAccessQueue *portDeathAccessQueue; // @synthesize portDeathAccessQueue=_portDeathAccessQueue;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) _Bool usesPerPidLookup; // @synthesize usesPerPidLookup=_usesPerPidLookup;
@property(nonatomic) _Bool shouldRegisterCallbackSourceOnMainRunloop; // @synthesize shouldRegisterCallbackSourceOnMainRunloop;
@property(retain, nonatomic) AXAccessQueue *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableArray *postConnectionTasks; // @synthesize postConnectionTasks=_postConnectionTasks;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) float timeout; // @synthesize timeout=_timeout;
@property(nonatomic) struct __CFMachPort *serverPort; // @synthesize serverPort=_serverPort;
@property(copy, nonatomic) id portDeathHandler; // @synthesize portDeathHandler=_portDeathHandler;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (_Bool)_handleErrorWithMessage:(id)arg1 outError:(id *)arg2;
- (void)establishConnectionWithTimeout:(double)arg1 completion:(id)arg2;
- (void)_attemptToEstablishConnection;
- (void)_serverDied;
- (id)sendMessage:(id)arg1 withError:(id *)arg2;
- (_Bool)sendSimpleMessage:(id)arg1 withError:(id *)arg2;
- (void)sendSimpleMessage:(id)arg1;
- (_Bool)_verifyConnectionWithError:(id *)arg1;
- (_Bool)disconnectWithError:(id *)arg1;
- (_Bool)connectWithError:(id *)arg1;
- (_Bool)verifyConnectionExists;
- (void)_registerWithServer;
@property(readonly, nonatomic) unsigned int clientCallbackPort; // @synthesize clientCallbackPort;
@property(readonly, nonatomic) struct __CFRunLoopSource *clientCallbackSource; // @synthesize clientCallbackSource;
@property(readonly, nonatomic) unsigned int serviceMachPort;
- (id)description;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithServiceName:(id)arg1;
- (void)_commonInit;

@end

