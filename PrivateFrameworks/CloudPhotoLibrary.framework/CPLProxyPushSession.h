/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudPhotoLibrary/CPLProxySession.h>

#import "CPLPushChangeSessionImplementation-Protocol.h"

@interface CPLProxyPushSession : CPLProxySession <CPLPushChangeSessionImplementation>
{
}

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 completionHandler:(id)arg3;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(id)arg2;

@end

