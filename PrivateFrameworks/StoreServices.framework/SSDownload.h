/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSEntity.h>

#import "SSXPCCoding-Protocol.h"

@class NSArray, NSMutableDictionary, NSNumber, SSDownloadMetadata, SSDownloadPolicy, SSDownloadStatus, SSXPCConnection;

@interface SSDownload : SSEntity <SSXPCCoding>
{
    NSMutableDictionary *_localAssets;
    SSDownloadMetadata *_metadata;
    NSNumber *_prioritizeAboveDownload;
    SSDownloadStatus *_status;
}

+ (long long)_setValuesMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;
- (id)_errorWithXPCReply:(id)arg1;
- (id)_errorWithData:(id)arg1;
- (void)_applyPhase:(id)arg1 toStatus:(id)arg2;
@property(readonly, getter=_XPCConnection) SSXPCConnection *_XPCConnection;
- (void)_resetStatus;
@property(retain, nonatomic) SSDownloadStatus *status;
@property(copy, nonatomic) SSDownloadMetadata *metadata;
- (void)setBackgroundNetworkingUserInitiated:(_Bool)arg1;
@property(retain, nonatomic) NSArray *assets;
@property(readonly, nonatomic, getter=isExternal) _Bool external;
- (_Bool)isBackgroundNetworkingUserInitiated;
- (void)handleWithDownloadHandler:(id)arg1 completionBlock:(id)arg2;
@property(readonly, nonatomic) id downloadIdentifier;
- (id)copyXPCEncoding;
- (id)initWithDownloadMetadata:(id)arg1;
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;
- (void)_resetLocalIVars;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
@property(copy) SSDownloadPolicy *downloadPolicy;
- (void)setDownloadHandler:(id)arg1 completionBlock:(id)arg2;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)resume;
- (_Bool)removeAsset:(id)arg1;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(id)arg2;
@property(readonly) long long persistentIdentifier;
- (double)percentComplete;
- (void)pause;
- (id)networkConstraints;
- (_Bool)isEligibleForRestore:(id *)arg1;
@property(readonly, getter=isCancelable) _Bool cancelable;
- (id)failureError;
- (double)estimatedSecondsRemaining;
@property(readonly) long long downloadSizeLimit;
- (id)downloadPhaseIdentifier;
- (long long)bytesTotal;
- (long long)bytesDownloaded;
- (id)backgroundNetworkingJobGroupName;
- (id)assetsForType:(id)arg1;
- (_Bool)addAsset:(id)arg1 forType:(id)arg2;
- (void)dealloc;
- (id)_initWithLocalPropertyValues:(id)arg1;
- (id)initWithPersistentIdentifier:(long long)arg1;

@end

