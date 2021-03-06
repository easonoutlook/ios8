/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class IDSDevice, IMAVChatParticipant, NSData, NSString;

@interface TUCall : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSString *_overrideName;
    NSString *_companyName;
    long long _displayNameBreakPoint;
    NSString *_abLabel;
    int _abUid;
    struct {
        unsigned int imageType:2;
        unsigned int abUidIsValid:1;
        unsigned int dialAssisted:1;
        unsigned int dialedFromEmergencyUI:1;
        unsigned int isEmergencyCall:1;
        unsigned int isEmergencyCallIsValid:1;
        unsigned int joiningConference:1;
        unsigned int leavingConference:1;
    } _phoneCallFlags;
    _Bool _requestingHandoff;
    _Bool _endpointOnCurrentDevice;
    _Bool _wantsHoldMusic;
    _Bool _connected;
    _Bool _hasUpdatedAudio;
    _Bool _provisionallyBecomingHeld;
    _Bool _provisionallyBecomingUnheld;
    _Bool _hold;
    _Bool _unhold;
    int _disconnectedReason;
    int _faceTimeIDStatus;
    int _transitionStatus;
    NSString *_suggestedDisplayName;
    NSString *_uniqueProxyIdentifier;
    NSString *_sourceIdentifier;
    NSString *_isoCountryCode;
    IDSDevice *_relayingIDSDevice;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) IDSDevice *relayingIDSDevice; // @synthesize relayingIDSDevice=_relayingIDSDevice;
@property(nonatomic) int transitionStatus; // @synthesize transitionStatus=_transitionStatus;
@property(nonatomic) _Bool unhold; // @synthesize unhold=_unhold;
@property(nonatomic) _Bool hold; // @synthesize hold=_hold;
@property(nonatomic) _Bool provisionallyBecomingUnheld; // @synthesize provisionallyBecomingUnheld=_provisionallyBecomingUnheld;
@property(nonatomic) _Bool provisionallyBecomingHeld; // @synthesize provisionallyBecomingHeld=_provisionallyBecomingHeld;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
@property(nonatomic) _Bool hasUpdatedAudio; // @synthesize hasUpdatedAudio=_hasUpdatedAudio;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool wantsHoldMusic; // @synthesize wantsHoldMusic=_wantsHoldMusic;
@property(nonatomic, getter=isEndpointOnCurrentDevice) _Bool endpointOnCurrentDevice; // @synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice;
@property(nonatomic, getter=isRequestingHandoff) _Bool requestingHandoff; // @synthesize requestingHandoff=_requestingHandoff;
@property(nonatomic) int faceTimeIDStatus; // @synthesize faceTimeIDStatus=_faceTimeIDStatus;
@property(nonatomic) int disconnectedReason; // @synthesize disconnectedReason=_disconnectedReason;
@property(copy) NSString *suggestedDisplayName; // @synthesize suggestedDisplayName=_suggestedDisplayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithCall:(id)arg1;
- (void)_loadCallDetails;
- (int)abUID;
@property(readonly, retain, nonatomic) NSData *localFrequency;
@property(readonly, nonatomic) float localVolume;
- (_Bool)isTTY;
- (_Bool)setDownlinkMuted:(_Bool)arg1;
- (_Bool)isDownlinkMuted;
- (_Bool)setUplinkMuted:(_Bool)arg1;
- (_Bool)isUplinkMuted;
- (_Bool)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
@property(readonly, nonatomic) _Bool playsConnectedSound;
- (_Bool)needsManualInCallSounds;
- (_Bool)managesAudioInterruptions;
- (id)audioMode;
- (id)audioCategory;
@property(readonly, nonatomic) _Bool statusIsProvisional;
- (int)callStatus;
@property(readonly, nonatomic) int status;
- (id)totalDataUsed;
- (id)callDurationString;
- (double)callDuration;
- (_Bool)isEqual:(id)arg1;
- (int)causeCode;
@property(readonly, copy, nonatomic) NSString *callUUID;
@property(readonly, nonatomic) int callIdentifier;
- (_Bool)isVoicemail;
- (_Bool)isAlerting;
- (_Bool)isEmergencyCall;
- (void)setWasDialedFromEmergencyUI:(_Bool)arg1;
- (_Bool)wasDialedFromEmergencyUI;
- (void)setWasDialAssisted:(_Bool)arg1;
- (_Bool)wasDialAssisted;
@property(readonly, nonatomic, getter=isHostedOnCurrentDevice) _Bool hostedOnCurrentDevice;
- (void)setOverrideName:(id)arg1;
- (id)localizedLabel;
- (id)callerNameFromNetwork;
- (id)companyName;
- (id)multiLineDisplayName;
- (id)displayFirstName;
- (id)_displayNameWithSeparator:(id)arg1;
@property(readonly, copy, nonatomic) NSString *destinationID;
- (void)leaveConference;
- (void)joinConference;
- (_Bool)isConferenced;
- (void)_setPrimitiveDisconnectedReason:(int)arg1;
- (void)_setPrimitiveEndpointOnCurrentDevice:(_Bool)arg1;
- (void)_setPrimitiveWantsHoldMusic:(_Bool)arg1;
- (void)resetWantsHoldMusic;
@property(readonly, nonatomic) int endedError;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, retain, nonatomic) IMAVChatParticipant *remoteParticipant;
@property(readonly, nonatomic) _Bool hasReceivedFirstFrame;
@property(readonly, nonatomic) _Bool isActive;
@property(nonatomic) _Bool isSendingVideo;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic, getter=isBlocked) _Bool blocked;
@property(readonly, nonatomic) _Bool shouldIgnoreStatusChange;
@property(readonly, nonatomic, getter=isOutgoing) _Bool outgoing;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) int supportedModelType;
@property(readonly, nonatomic) int service;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (_Bool)shouldPlayDTMFTone;
- (void)resetProvisionalStatuses;
- (void)disconnectWithReason:(int)arg1;
- (void)disconnect;
@property(nonatomic) _Bool isOnHold;
- (void)answerWithSourceIdentifier:(id)arg1;
- (void)answer;
- (void)_handleStatusChange;
- (void)_handleCallerIDChange;
- (void)_handleIdentityChange;
- (void)_handleManagesAudioInterruptionsChange;
- (id)description;
- (void)dealloc;
- (id)init;

@end

