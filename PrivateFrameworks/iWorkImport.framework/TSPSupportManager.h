/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFilePresenter-Protocol.h"
#import "TSPFileCoordinatorDelegate-Protocol.h"

@class NSObject<OS_dispatch_group>, NSOperationQueue, NSRecursiveLock, NSURL, TSPObjectContext, TSPSupportSaveOperationState;

// Not exported
@interface TSPSupportManager : NSObject <NSFilePresenter, TSPFileCoordinatorDelegate>
{
    TSPObjectContext *_context;
    NSOperationQueue *_presentedItemQueue;
    NSRecursiveLock *_presentedSupportURLLock;
    NSURL *_presentedSupportURL;
    TSPSupportSaveOperationState *_saveOperationState;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
}

+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2;
+ (id)supportBundleURLForUUID:(id)arg1 delegate:(id)arg2;
+ (id)supportDirectoryURLWithDelegate:(id)arg1;
+ (id)defaultSupportDirectoryURL;
+ (id)updateDocumentUUIDForDocumentURL:(id)arg1 preserveOriginalDocumentSupport:(_Bool)arg2 preserveShareUUID:(_Bool)arg3 coordinateWrite:(_Bool)arg4 filePresenter:(id)arg5 delegate:(id)arg6 error:(id *)arg7;
+ (_Bool)copyOrMoveSupportAtURL:(id)arg1 originalDocumentProperties:(id)arg2 toURL:(id)arg3 isCopying:(_Bool)arg4 newDocumentProperties:(id)arg5 filePresenter:(id)arg6 error:(id *)arg7;
+ (_Bool)isSupportAtURLValid:(id)arg1 documentUUID:(id)arg2 versionUUID:(id)arg3 documentProperties:(id *)arg4;
- (void).cxx_destruct;
- (_Bool)didUpdateDocumentUUIDWithOriginalDocumentProperties:(id)arg1 newDocumentProperties:(id)arg2 preserveOriginalDocumentSupport:(_Bool)arg3 preserveShareUUID:(_Bool)arg4 originalURL:(id)arg5 newURL:(id *)arg6 error:(id *)arg7;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)presentedItemDidChange;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
- (void)presentedItemDidMoveToURL:(id)arg1;
@property(readonly, copy) NSURL *presentedItemURL;
@property(copy) NSURL *presentedSupportURL;
- (void)updatePresentedItemURL:(id)arg1;
- (void)removeFilePresenter;
- (void)performReadUsingAccessor:(id)arg1;
- (id)supportURLWithDocumentUUID:(id)arg1;
- (_Bool)endSaveWithSuccess:(_Bool)arg1 packageWriter:(id)arg2 newURL:(id *)arg3 writtenPackage:(id *)arg4;
- (_Bool)writeSupportForDocumentUUID:(id)arg1 error:(id *)arg2 writer:(id)arg3;
- (void)beginSaveWithDocumentUUID:(id)arg1 versionUUID:(id)arg2 originalURL:(id)arg3 updateType:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSURL *primaryPresentedItemURL;

@end

