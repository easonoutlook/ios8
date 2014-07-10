/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFActivityAdvertiserClient-Protocol.h"
#import "SFCompanionXPCManagerObserver-Protocol.h"

@class NSMutableDictionary, SFInternalAdvertisement;

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient>
{
    id <SFActivityAdvertiserDelegate> _delegate;
    id <SFActivityAdvertiserProtocol> _connectionProxy;
    SFInternalAdvertisement *_currentAdvertisement;
    NSMutableDictionary *_advertisementStringsToAdvertisementIdentifiers;
}

+ (id)sharedAdvertiser;
@property(retain) NSMutableDictionary *advertisementStringsToAdvertisementIdentifiers; // @synthesize advertisementStringsToAdvertisementIdentifiers=_advertisementStringsToAdvertisementIdentifiers;
@property(retain) SFInternalAdvertisement *currentAdvertisement; // @synthesize currentAdvertisement=_currentAdvertisement;
@property(retain) id <SFActivityAdvertiserProtocol> connectionProxy; // @synthesize connectionProxy=_connectionProxy;
@property id <SFActivityAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSendPayloadForAdvertisementIdentifier:(id)arg1 toDeviceIdentifier:(id)arg2 error:(id)arg3;
- (void)willSendPayloadForAdvertisementIdentifier:(id)arg1 toDeviceIdentifier:(id)arg2;
- (void)payloadForAdvertisementString:(id)arg1 withCompletionHandler:(id)arg2;
- (void)xpcManagerConnectionInterrupted;
- (void)advertiseContinuationIdentifier:(id)arg1 timestamp:(id)arg2 options:(id)arg3 payload:(id)arg4;
- (id)advertiseActivityTypeIdentifier:(id)arg1 timestamp:(id)arg2 options:(id)arg3 payload:(id)arg4;
- (void)activitiesDidBecomeIdle:(_Bool)arg1;
- (id)advertiseAdvertisementString:(id)arg1 isDomain:(_Bool)arg2 timestamp:(id)arg3 options:(id)arg4 payload:(id)arg5;
- (id)advertiseDomainNameFromWebBrowser:(id)arg1 timestamp:(id)arg2 options:(id)arg3 payload:(id)arg4;
- (id)advertiseActivityType:(id)arg1 timestamp:(id)arg2 options:(id)arg3 payload:(id)arg4;
- (void)setupXPCConnection;
- (void)dealloc;
- (id)init;

@end

