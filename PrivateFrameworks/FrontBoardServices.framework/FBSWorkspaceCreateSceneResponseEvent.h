/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FrontBoardServices/FBSWorkspaceSceneUpdateResponseEvent.h>

@class FBSWorkspaceCreateSceneResponse;

@interface FBSWorkspaceCreateSceneResponseEvent : FBSWorkspaceSceneUpdateResponseEvent
{
}

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) FBSWorkspaceCreateSceneResponse *response;

@end

