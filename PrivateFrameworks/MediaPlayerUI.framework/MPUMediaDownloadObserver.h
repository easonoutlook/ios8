/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface MPUMediaDownloadObserver : NSObject
{
    id _progressHandler;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasPendingProgressHandlerExecution;
    _Bool _invalidated;
    long long _pid;
    _Bool _paused;
}

+ (id)sharedITunesStoreDownloadManager;
+ (id)newObserverForStoreID:(long long)arg1;
+ (id)newObserverForMediaCollection:(id)arg1;
+ (id)newObserverForMediaItem:(id)arg1;
+ (id)newObserverForMediaItemPersistentID:(unsigned long long)arg1 isPendingSync:(_Bool)arg2 storeID:(long long)arg3;
@property(readonly, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_pid;
- (void).cxx_destruct;
@property(readonly, nonatomic) double rawDownloadTotal;
@property(readonly, nonatomic) double rawDownloadProgress;
@property(readonly, nonatomic, getter=isPurchasing) _Bool purchasing;
- (void)invalidate;
- (void)_onQueue_invalidate;
@property(copy) id progressHandler;
@property(readonly, getter=isRestoreDownload) _Bool restoreDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)cancelDownload;
@property(readonly) _Bool canCancel;
@property(readonly, getter=isCurrentlyPlayable) _Bool currentlyPlayable;
@property(readonly) double downloadProgress;
- (void)_onQueue_setShouldFireProgressHandler;
- (void)dealloc;
- (id)init;

@end

