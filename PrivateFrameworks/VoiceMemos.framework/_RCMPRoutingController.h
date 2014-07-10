/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPAVRoutingController.h"

@class AVAudioSession, NSArray, NSString;

@interface _RCMPRoutingController : MPAVRoutingController
{
    AVAudioSession *_audioSession;
    _Bool _isCategoryActive;
    _Bool _hasCategoryEverBeenActive;
    _Bool _disableRouteChangeNotificationHandling;
    _Bool _needsFetch;
    NSArray *_cachedRoutes;
    NSString *_AVAudioSessionCategory;
    NSString *_AVSystemControllerCategory;
}

@property(readonly, nonatomic) NSString *AVSystemControllerCategory; // @synthesize AVSystemControllerCategory=_AVSystemControllerCategory;
@property(readonly, nonatomic) NSString *AVAudioSessionCategory; // @synthesize AVAudioSessionCategory=_AVAudioSessionCategory;
- (void).cxx_destruct;
- (_Bool)_determineIfAudioCategoryIsCurrent;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (void)audioSessionInterruptionNotification:(id)arg1;
- (_Bool)routeOtherThanHandsetAndSpeakerAvailable;
- (void)fetchAvailableRoutesWithCompletionHandler:(id)arg1;
- (void)makeAudioSessionCategoryActive:(_Bool)arg1;
- (void)setIsCategoryActive:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isAudioSessionAppropriateForQueryingRoutes;
- (_Bool)isCategoryConfiguredForVoiceMemos;
@property(readonly, nonatomic) _Bool hasCategoryEverBeenActive;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

