/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPAVRoutingControllerDelegate-Protocol.h"

@class MPAVRoute, NSArray, NSString, _RCMPRoutingController;

@interface RCAudioSessionRoutingController : NSObject <MPAVRoutingControllerDelegate>
{
    _Bool _useVoiceMemoSettings;
    _Bool _expectsFaceContactWhenHandsetSelected;
    _Bool _hasAppliedUserDefaultForRouteSetting;
    _Bool _shouldReportUserDefaultForRouteSetting;
    struct __CFArray *_weakSessionRoutingAssertions;
    _RCMPRoutingController *_routingController;
    MPAVRoute *_cachedPickedRoute;
    NSArray *_cachedPickableRoutes;
}

+ (id)sharedRouteController;
@property(readonly, nonatomic) _Bool shouldReportUserDefaultForRouteSetting; // @synthesize shouldReportUserDefaultForRouteSetting=_shouldReportUserDefaultForRouteSetting;
@property(readonly, nonatomic) _Bool hasAppliedUserDefaultForRouteSetting; // @synthesize hasAppliedUserDefaultForRouteSetting=_hasAppliedUserDefaultForRouteSetting;
@property(readonly, nonatomic) NSArray *cachedPickableRoutes; // @synthesize cachedPickableRoutes=_cachedPickableRoutes;
@property(readonly, nonatomic) MPAVRoute *cachedPickedRoute; // @synthesize cachedPickedRoute=_cachedPickedRoute;
@property(readonly, nonatomic) _RCMPRoutingController *routingController; // @synthesize routingController=_routingController;
@property(readonly, nonatomic) struct __CFArray *weakSessionRoutingAssertions; // @synthesize weakSessionRoutingAssertions=_weakSessionRoutingAssertions;
@property(nonatomic) _Bool expectsFaceContactWhenHandsetSelected; // @synthesize expectsFaceContactWhenHandsetSelected=_expectsFaceContactWhenHandsetSelected;
@property(nonatomic) _Bool useVoiceMemoSettings; // @synthesize useVoiceMemoSettings=_useVoiceMemoSettings;
- (void).cxx_destruct;
- (void)_pickAudioDeviceRouteType:(long long)arg1;
- (void)_pickSpeakerAudioDeviceRoute;
- (void)_pickHandsetAudioDeviceRoute;
- (void)_setShouldRouteToSpeakerUserDefaultValue:(_Bool)arg1;
- (_Bool)_routeDefaultBoolForKey:(id)arg1 nonVoiceMemoAppValue:(_Bool)arg2;
- (unsigned long long)_availableRoutesMask;
- (unsigned long long)_RCAudioRouteMaskForRoutes:(id)arg1;
- (_Bool)_wirelessRouteIsPickedOrPreferred;
- (_Bool)_speakerIsUserDefaultRoute;
- (_Bool)_speakerRouteIsPickedOrPreferred;
- (void)_updateProximitySetting;
- (void)_updateSpeakerRouteDefault;
- (void)_applyUserDefaultAudioRoute;
- (void)_deactivateAudioSessionCategory;
- (void)_activateAudioSessionCategory;
- (void)_updateAudioSessionActiveStateImmediately:(_Bool)arg1;
- (_Bool)_requireAudioSessionCategoryActiveForAssertions:(id)arg1;
- (void)_setWeakSessionRoutingAssertions:(struct __CFArray *)arg1 applyImmediately:(_Bool)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool isRoutingToPhoneCall;
@property(readonly, nonatomic) long long selectedRouteType;
@property(readonly, nonatomic) NSString *selectedRouteName;
@property(readonly, nonatomic) unsigned long long availableRoutesMask;
- (void)toggleSpeaker;
- (void)showAvailableRoutes;
- (void)removeRouteAssertion:(id)arg1;
- (void)addRouteAssertion:(id)arg1;
- (void)dealloc;
- (id)init;

@end

