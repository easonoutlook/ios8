/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDMMCSItemGroupSetContext, NSArray, NSMutableArray, NSObject<OS_dispatch_group>;

@interface CKDSaveAssetsOperation : CKDDatabaseOperation
{
    _Bool _shouldAutomaticallyRetryNetworkErrors;
    id _progressBlock;
    NSArray *_assetsToSave;
    NSMutableArray *_assetsToRetry;
    NSObject<OS_dispatch_group> *_saveAssetsGroup;
    CKDMMCSItemGroupSetContext *_MMCSContext;
}

+ (_Bool)_isTransientError:(id)arg1;
@property(retain) CKDMMCSItemGroupSetContext *MMCSContext; // @synthesize MMCSContext=_MMCSContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *saveAssetsGroup; // @synthesize saveAssetsGroup=_saveAssetsGroup;
@property(retain, nonatomic) NSMutableArray *assetsToRetry; // @synthesize assetsToRetry=_assetsToRetry;
@property(retain, nonatomic) NSArray *assetsToSave; // @synthesize assetsToSave=_assetsToSave;
@property(nonatomic) _Bool shouldAutomaticallyRetryNetworkErrors; // @synthesize shouldAutomaticallyRetryNetworkErrors=_shouldAutomaticallyRetryNetworkErrors;
@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)main;
- (void)_handleError:(id)arg1 forMMCSItems:(id)arg2;
- (void)_handleError:(id)arg1 forAsset:(id)arg2;
- (_Bool)_shouldRetryError:(id)arg1;
- (void)_retryOrFinishWithError:(id)arg1;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)_handleProgressForMMCSItem:(id)arg1;
- (void)_handleAuthTokensForPutRequest:(id)arg1 items:(id)arg2;
- (void)_handleItemGroupSetRegistered:(id)arg1 items:(id)arg2;
- (id)_getMMCSItemsFromItemsToSave;
- (void)_saveAssets;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToSave:(id)arg3;

@end

