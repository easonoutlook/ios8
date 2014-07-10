/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSDownloadHandlerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, SSDownloadHandler, SSDownloadManager;

@interface MPStorePlayWhileDownloadController : NSObject <SSDownloadHandlerDelegate, UIAlertViewDelegate>
{
    NSMutableSet *_cellularRestrictedAlertViews;
    SSDownloadHandler *_downloadHandler;
    SSDownloadManager *_downloadManager;
    NSObject<OS_dispatch_queue> *_downloadSessionQueue;
    NSMutableArray *_downloadSessions;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (_Bool)_showNoNetworkDialogForContext:(id)arg1;
- (_Bool)_showCellularRestrictedDialogForContext:(id)arg1;
- (id)_openSessionWithProperties:(id)arg1 style:(long long *)arg2;
- (id)_openSessionWithProperties:(id)arg1 assetOptions:(id)arg2;
- (id)_downloadSessionWithID:(id)arg1;
- (void)_closeSessionForAsset:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)downloadHandler:(id)arg1 handleSession:(id)arg2;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (_Bool)showNetworkConstraintDialogForContext:(id)arg1;
- (id)openSessionWithContext:(id)arg1 attributes:(id)arg2;
- (_Bool)isSessionRequiredToPlayContext:(id)arg1;
- (_Bool)canOpenSessionWithContext:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

