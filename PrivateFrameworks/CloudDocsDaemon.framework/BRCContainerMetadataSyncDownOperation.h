/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudDocsDaemon/BRCOperation.h>

#import "BRCOperationSubclass-Protocol.h"

@class BRCContainerMetadataSyncPersistedState, BRCContainerScheduler, NSMutableArray, NSMutableDictionary;

// Not exported
@interface BRCContainerMetadataSyncDownOperation : BRCOperation <BRCOperationSubclass>
{
    BRCContainerScheduler *_scheduler;
    BRCContainerMetadataSyncPersistedState *_state;
    NSMutableArray *_recordIDsForDesiredAssets;
    NSMutableArray *_desiredKeysForDesiredAssets;
    NSMutableDictionary *_recordIDsToVersionETagsForDesiredAssets;
}

- (void).cxx_destruct;
- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)performAfterFetchingAssetContents:(id)arg1;
- (void)performAfterFetchingRecordChanges:(id)arg1;
- (void)performAfterCreatingZoneIfNeeded:(id)arg1;
- (id)initWithContainerScheduler:(id)arg1 state:(id)arg2;

@end
