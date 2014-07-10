/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAVChat, IMHandle, NSArray, NSData, NSDictionary, NSMutableArray, NSString, NSTimer;

@interface IMAVChatParticipant : NSObject
{
    _Bool _sendingAudio;
    _Bool _sendingVideo;
    _Bool _audioMuted;
    _Bool _videoPaused;
    _Bool _videoDegraded;
    _Bool _mediaStalled;
    _Bool _isInitiator;
    _Bool _inviteDelivered;
    _Bool _hasReinitiateCapability;
    unsigned int _state;
    unsigned int _cameraType;
    unsigned int _cameraOrientation;
    unsigned int _chatEndedReason;
    int _chatError;
    unsigned int _screenOrientation;
    float _volumeMeter;
    NSArray *_additionalPeers;
    NSString *_vcPartyID;
    IMHandle *_imHandle;
    IMHandle *_inviter;
    IMAVChat *_avChat;
    NSDictionary *_properties;
    NSString *_conferenceID;
    NSTimer *_connectTimeoutTimer;
    NSMutableArray *_participantsCallInfo;
    NSData *_inFrequencyLevel;
    struct CGSize _remotePortraitOrientation;
    struct CGSize _remoteLandscapeOrientation;
    struct CGSize _remotePIPPortraitOrientation;
    struct CGSize _remotePIPLandscapeOrientation;
    struct CGRect _remotePortraitContentRect;
    struct CGRect _remoteLandscapeContentRect;
}

@property(retain, nonatomic) NSData *inFrequencyLevel; // @synthesize inFrequencyLevel=_inFrequencyLevel;
@property(nonatomic) float volumeMeter; // @synthesize volumeMeter=_volumeMeter;
@property(nonatomic) _Bool hasReinitiateCapability; // @synthesize hasReinitiateCapability=_hasReinitiateCapability;
@property(retain, nonatomic) NSMutableArray *_participantsCallInfo; // @synthesize _participantsCallInfo;
@property(nonatomic, setter=_setScreenOrientation:) unsigned int _screenOrientation; // @synthesize _screenOrientation;
@property(nonatomic, setter=_setRemoteLandscapeContentRect:) struct CGRect _remoteLandscapeContentRect; // @synthesize _remoteLandscapeContentRect;
@property(nonatomic, setter=_setRemotePortraitContentRect:) struct CGRect _remotePortraitContentRect; // @synthesize _remotePortraitContentRect;
@property(nonatomic, setter=_setRemotePIPLandscapeOrientation:) struct CGSize _remotePIPLandscapeOrientation; // @synthesize _remotePIPLandscapeOrientation;
@property(nonatomic, setter=_setRemotePIPPortraitOrientation:) struct CGSize _remotePIPPortraitOrientation; // @synthesize _remotePIPPortraitOrientation;
@property(retain, setter=_setConnectTimeoutTimer:) NSTimer *_connectTimeoutTimer; // @synthesize _connectTimeoutTimer;
@property(setter=_setInviteDelivered:) _Bool _inviteDelivered; // @synthesize _inviteDelivered;
@property(nonatomic, setter=_setRemoteLandscapeOrientation:) struct CGSize _remoteLandscapeOrientation; // @synthesize _remoteLandscapeOrientation;
@property(nonatomic, setter=_setRemotePortraitOrientation:) struct CGSize _remotePortraitOrientation; // @synthesize _remotePortraitOrientation;
@property(retain, nonatomic, setter=_setConferenceID:) NSString *_conferenceID; // @synthesize _conferenceID;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void)_setChatError:(int)arg1;
@property(nonatomic) int error; // @synthesize error=_chatError;
@property(readonly, nonatomic) unsigned int reasonChatEnded; // @synthesize reasonChatEnded=_chatEndedReason;
@property(readonly, nonatomic) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
- (void)setAVChat:(id)arg1;
@property(nonatomic) IMAVChat *avChat; // @synthesize avChat=_avChat;
@property(readonly, retain, nonatomic) IMHandle *invitedBy; // @synthesize invitedBy=_inviter;
@property(readonly, retain, nonatomic) IMHandle *imHandle; // @synthesize imHandle=_imHandle;
@property(setter=_setCameraOrientation:) unsigned int cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
@property(setter=_setCameraType:) unsigned int cameraType; // @synthesize cameraType=_cameraType;
@property(retain, setter=setVCPartyID:) NSString *vcPartyID; // @synthesize vcPartyID=_vcPartyID;
@property(setter=setMediaStalled:) _Bool isMediaStalled; // @synthesize isMediaStalled=_mediaStalled;
@property(retain, nonatomic) NSArray *additionalPeers; // @synthesize additionalPeers=_additionalPeers;
@property(setter=setVideoDegraded:) _Bool isVideoDegraded; // @synthesize isVideoDegraded=_videoDegraded;
@property(nonatomic, setter=setVideoPaused:) _Bool isVideoPaused; // @synthesize isVideoPaused=_videoPaused;
@property(nonatomic, setter=setAudioMuted:) _Bool isAudioMuted; // @synthesize isAudioMuted=_audioMuted;
@property(readonly, nonatomic) _Bool isSendingVideo; // @synthesize isSendingVideo=_sendingVideo;
@property(readonly, nonatomic) _Bool isSendingAudio; // @synthesize isSendingAudio=_sendingAudio;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (struct CGSize)localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (struct CGSize)aspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (struct CGRect)contentRectForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)sendAVMessage:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_switchToUseNewIMHandle:(id)arg1;
- (void)_updateProperties:(id)arg1;
- (void)_processPropertyUpdate:(id)arg1;
- (void)_setState:(unsigned int)arg1 withReason:(unsigned int)arg2 andError:(int)arg3;
- (void)setStateToEndedWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)reinitializeCallForCallID:(unsigned int)arg1;
- (void)_hangupCallLaterIfReinitiateFails:(id)arg1;
- (void)_cleanupOrphanedCallInfos;
- (void)_noteInviteDelivered:(_Bool)arg1;
- (void)_handleIMAVResponse:(unsigned int)arg1;
- (id)_natType;
- (_Bool)_generateCallInfo:(id)arg1;
- (_Bool)_processResponseDictionary:(id)arg1 allowSecondConnection:(_Bool)arg2;
- (id)_processIncomingCallProperties:(id)arg1;
- (id)_callInfosWaitingForResponse;
- (id)_callInfosWaitingForAcceptAction;
- (id)_callInfoWithState:(long long)arg1;
- (void)requestIconIfNecessary;
@property(readonly, nonatomic) _Bool isLocalParticipant;
@property(readonly, retain, nonatomic) NSString *name;
- (void)dealloc;
- (id)description;
- (void)disconnectFromAVChat;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 toChat:(id)arg3 account:(id)arg4;
- (void)updateStateForCurrentCallInfo:(unsigned int)arg1;
- (id)_callInfoForCallID:(long long)arg1;
- (long long)bestCallID;
@property(readonly, nonatomic) long long _activeCallID;
@property(readonly, nonatomic) _Bool hasConnectingSessions;
@property(readonly, nonatomic) _Bool hasUnfinishedSessions;
- (_Bool)matchesAVConferenceCallID:(long long)arg1;
- (id)callInfoBeingHandedOff;
- (void)_registerCallInfo:(id)arg1;
- (id)_initAs:(id)arg1 invitedBy:(id)arg2 sendingAudio:(_Bool)arg3 sendingVideo:(_Bool)arg4 usingICE:(_Bool)arg5 toChat:(id)arg6 inState:(unsigned int)arg7 withError:(int)arg8 andReason:(unsigned int)arg9 andVCPartyID:(id)arg10 account:(id)arg11;
- (id)init;
- (void)_connectTimeout:(id)arg1;
- (void)resetWaitingToConnectTimer;
- (void)setWaitingToConnect:(_Bool)arg1;
- (void)sendResponse:(unsigned int)arg1;
- (void)_sendResponse:(unsigned int)arg1 callInfo:(id)arg2;
- (void)cancelInvitation;
- (void)sendInvitation;
- (void)_reInitiate;
@property(nonatomic) void *videoBackLayer;
@property(nonatomic) void *videoLayer;
- (id)_proxyRepresentation;

@end

