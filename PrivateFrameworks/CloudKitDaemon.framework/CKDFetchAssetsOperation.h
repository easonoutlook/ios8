/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDMMCSItemGroupSetContext, NSMutableArray;

@interface CKDFetchAssetsOperation : CKDDatabaseOperation
{
    _Bool _shouldAutomaticallyRetryNetworkErrors;
    id _progressBlock;
    NSMutableArray *_assetsToFetch;
    NSMutableArray *_assetsToRetry;
    CKDMMCSItemGroupSetContext *_MMCSContext;
}

+ (_Bool)_isTransientError:(id)arg1;
@property(retain, nonatomic) CKDMMCSItemGroupSetContext *MMCSContext; // @synthesize MMCSContext=_MMCSContext;
@property(retain, nonatomic) NSMutableArray *assetsToRetry; // @synthesize assetsToRetry=_assetsToRetry;
@property(retain, nonatomic) NSMutableArray *assetsToFetch; // @synthesize assetsToFetch=_assetsToFetch;
@property(nonatomic) _Bool shouldAutomaticallyRetryNetworkErrors; // @synthesize shouldAutomaticallyRetryNetworkErrors=_shouldAutomaticallyRetryNetworkErrors;
@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)main;
- (void)_handleError:(id)arg1 forItem:(id)arg2;
- (_Bool)_shouldRetryError:(id)arg1;
- (void)_retryOrFinishWithError:(id)arg1;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)_fetchAssets;
- (void)_sendMMCSItemGetForGroupSet:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToFetch:(id)arg3;

@end
