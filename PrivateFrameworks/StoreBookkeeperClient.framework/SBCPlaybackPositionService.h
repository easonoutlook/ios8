/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreBookkeeperClient/SBCXPCService.h>

#import "SBCPlaybackPositionServiceProtocol-Protocol.h"

@class SBCPlaybackPositionDomain;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol>
{
    _Bool _usingPlaybackPositions;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
}

+ (Class)XPCServiceInterfaceClass;
+ (id)serviceForValueDomain:(id)arg1;
+ (id)serviceForSyncDomain:(id)arg1;
+ (id)_serviceForPlaybackPositionDomain:(id)arg1;
@property(readonly) _Bool usingPlaybackPositions; // @synthesize usingPlaybackPositions=_usingPlaybackPositions;
@property(readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // @synthesize playbackPositionDomain=_playbackPositionDomain;
- (void).cxx_destruct;
- (oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(id)arg2;
- (oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(id)arg2;
- (oneway void)synchronizeImmediatelyWithCompletionHandler:(id)arg1;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(id)arg1;
- (oneway void)savePlaybackPositionEntity:(id)arg1 isCheckpoint:(_Bool)arg2;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)beginAccessingPlaybackPositionEntities;
- (void)didConnectToService;
- (id)initWithPlaybackPositionDomain:(id)arg1;

@end
