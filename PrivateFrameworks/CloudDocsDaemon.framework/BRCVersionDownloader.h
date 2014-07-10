/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BRCLifeCycle-Protocol.h"
#import "BRCTransferQueueDelegate-Protocol.h"

@class BRCLocalContainer, BRCTransferQueue, NSObject<OS_dispatch_queue>;

@interface BRCVersionDownloader : NSObject <BRCTransferQueueDelegate, BRCLifeCycle>
{
    BRCTransferQueue *_transferQueue;
    BRCLocalContainer *_container;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_queue;
- (void).cxx_destruct;
- (void)transferQueueDidRequestOperations:(id)arg1;
- (void)_scheduleAllDownloads;
- (_Bool)_scheduleDownloadForItem:(id)arg1;
- (void)cancelDownloadForItemID:(id)arg1;
- (_Bool)isDownloadingItemID:(id)arg1;
- (_Bool)isDownloadingAddition:(id)arg1;
- (void)signalNeedsDownloads;
- (void)_downloadCompletedForItemID:(id)arg1 etag:(id)arg2 downloadedObject:(id)arg3 error:(id)arg4;
- (id)verboseDescription;
- (void)resume;
- (void)suspend;
- (void)close;
- (id)initWithLocalContainer:(id)arg1;

@end

