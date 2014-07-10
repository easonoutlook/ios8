/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSFileReactorProxy.h>

@class NSFileWatcher, NSObject<OS_dispatch_queue>;

// Not exported
@interface NSFilePresenterProxy : NSFileReactorProxy
{
    NSObject<OS_dispatch_queue> *_queue;
    NSFileWatcher *_watcher;
    unsigned long long _writingRelinquishmentCount;
    id _currentWriterPurposeID;
    _Bool _didObserveMovingByWriter;
    _Bool _didObserveVersionChangingByWriter;
    _Bool _disconnected;
}

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;
@property(readonly) _Bool disconnected;
- (void)disconnect;
- (void)forwardObservationMessageWithKind:(id)arg1 parameters:(id)arg2;
- (void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 resultHandler:(id)arg3;
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;
- (void)observeDisappearanceAtSubitemPath:(id)arg1;
- (void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (void)observeMoveByWriterWithPurposeID:(id)arg1;
- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(id)arg2;
- (void)saveChangesWithCompletionHandler:(id)arg1;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(id)arg5;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(id)arg4;
- (void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(id)arg3;
- (void)forwardUsingMessageSender:(id)arg1;
- (void)setItemLocation:(id)arg1;
- (void)dealloc;

@end

