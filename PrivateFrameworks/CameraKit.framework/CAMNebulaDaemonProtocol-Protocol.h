/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CAMNebulaDaemonProtocol <NSObject>
- (void)updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)stopNebulaWithUUID:(id)arg1;
- (void)finishCaptureForNebulaWithUUID:(id)arg1;
- (void)updateNebulaWithUUID:(id)arg1;
- (void)resumeNebulaWithUUID:(id)arg1;
- (void)startNebulaWithUUID:(id)arg1;
@end

