/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudPhotoLibrary/CPLChangeSession.h>

#import "CPLAbstractObject-Protocol.h"

@class CPLPlatformObject;

@interface CPLPullChangeSession : CPLChangeSession <CPLAbstractObject>
{
}

- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(id)arg2;
- (void)getChangeBatchWithCompletionHandler:(id)arg1;
- (id)_sessionLogDomain;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) CPLPlatformObject *platformObject;

@end

