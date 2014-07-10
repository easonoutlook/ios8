/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKDMescalSession;

@interface CKDMescalSessionOperation : CKDOperation
{
    int _serverVersion;
    CKDMescalSession *_mescalSession;
}

@property(retain, nonatomic) CKDMescalSession *mescalSession; // @synthesize mescalSession=_mescalSession;
@property(nonatomic) int serverVersion; // @synthesize serverVersion=_serverVersion;
- (void).cxx_destruct;
- (void)main;
- (void)_handleCertRequestFinished:(id)arg1;
- (void)_handleSessionRequestFinished:(id)arg1;
- (void)_exchangeDataAndSendRequest:(id)arg1;
- (_Bool)shouldCheckAppVersion;
- (id)flowControlKey;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

