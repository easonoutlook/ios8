/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BRCLowDiskDelegate-Protocol.h"
#import "BRCModule-Protocol.h"

@class BRCAccountSession, BRCFSEventsPersistedState, BRCRelativePath, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSString, PQLConnection;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCLowDiskDelegate>
{
    BRCAccountSession *_session;
    // Error parsing type: Ai, name: _suspendCount
    // Error parsing type: Ai, name: _resetCount
    BRCFSEventsPersistedState *_persistedState;
    NSString *_devicePath;
    NSString *_rootPathRelativeToDevice;
    NSObject<OS_dispatch_source> *_rootVnodeWatcher;
    _Bool _volumeHasLowDiskSpace;
    _Bool _volumeIsCaseSensitive;
    struct __FSEventStream *_stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_source> *_historicalEventSource;
    BRCFSEventsPersistedState *_rendezVous;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool _drainEvents;
    BRCRelativePath *_root;
    id <BRCFSEventsDelegate> _delegate;
    PQLConnection *_db;
}

@property(readonly, nonatomic) _Bool volumeIsCaseSensitive; // @synthesize volumeIsCaseSensitive=_volumeIsCaseSensitive;
@property(retain, nonatomic, setter=setDB:) PQLConnection *db; // @synthesize db=_db;
@property __weak id <BRCFSEventsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BRCRelativePath *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(_Bool)arg2;
- (void)resume;
- (void)suspend;
- (void)reset;
- (void)close;
- (void)_cancel;
- (void)dealloc;
- (id)initWithAccountSession:(id)arg1;
- (void)fseventAtPath:(id)arg1 withFlags:(unsigned int)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned int)arg4 eventCount:(unsigned int)arg5 initialScan:(_Bool)arg6;
- (void)didProcessEventID:(unsigned long long)arg1;
- (void)signalAfterCurrentFSEvent:(id)arg1;
- (_Bool)openWithRootPath:(id)arg1 error:(id *)arg2;
- (_Bool)setUpStreamSynchronously:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setUpRootAtPath:(id)arg1 error:(id *)arg2;

@end

