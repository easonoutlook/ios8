/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer, PLProgressView, UIActivity;

@interface PUPhotoSharingManager : NSObject
{
    PLProgressView *_publishingProgressView;
    NSTimer *_publishingProgressTimer;
    UIActivity *_activity;
    id <PUPhotoSharingManagerDelegate> _delegate;
}

@property(nonatomic) id <PUPhotoSharingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)_publishingAgentsDidForceCancel:(id)arg1;
- (void)_publishingAgentDidFinishPublishing:(id)arg1;
- (void)_publishingAgentDidCancel:(id)arg1;
- (void)_publishingAgentDidEndRemaking:(id)arg1;
- (void)_publishingAgentDidStartRemaking:(id)arg1;
- (void)_publishingDidFinish;
- (void)_updatePublishingProgressView:(id)arg1;
- (id)_currentPublishingAgent;
- (void)cancelRemaking;
- (void)dealloc;
- (id)init;

@end

