/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "RCSSavedRecordingServiceClientProtocol-Protocol.h"
#import "RCSSavedRecordingServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSXPCConnection;

@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    int _exportingCompositionAVURLsDistributedNotificationToken;
    NSXPCConnection *_xpcConnection;
    id <RCSSavedRecordingServiceProtocol> _serviceProxy;
    NSMutableDictionary *_pendingServiceCompletionHandlers;
    NSSet *_exportingCompositionAVURLs;
}

+ (id)sharedService;
@property(retain, nonatomic) NSSet *exportingCompositionAVURLs; // @synthesize exportingCompositionAVURLs=_exportingCompositionAVURLs;
- (void).cxx_destruct;
- (void)_handleExportingCompositionAVURLsDidChange;
- (void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)arg1 withError:(id)arg2;
- (void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg1;
- (void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(id)arg1;
- (void)_sendServiceMessage:(SEL)arg1 withBasicReplyBlock:(id)arg2 messagingBlock:(void)arg3;
- (void)_sendServiceMessage:(SEL)arg1 accessRequestReplyBlock:(id)arg2 messagingBlock:(void)arg3;
- (void)_onQueueCloseServiceConnection;
- (id)serviceProxy;
- (oneway void)fetchExportingCompositionAVURLs:(id)arg1;
- (oneway void)performOrphanHandlingWithCompletionBlock:(id)arg1;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
- (oneway void)endAccessSessionWithToken:(id)arg1;
- (oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(id)arg2;
- (oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(_Bool)arg2 accessRequestHandler:(id)arg3;
- (oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(id)arg2;
- (oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(id)arg2;
- (void)closeServiceConnection;
- (void)openServiceConnection;
- (void)dealloc;
- (id)init;

@end

