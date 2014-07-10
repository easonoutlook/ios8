/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFCompanionAdvertiserDelegate-Protocol.h"

@class LSUserActivityManager, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL, NSUUID, SFCompanionAdvertiser;

@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate>
{
    LSUserActivityManager *_manager;
    NSMutableDictionary *_userInfo;
    NSMutableDictionary *_frameworkPayload;
    NSString *_title;
    NSURL *_webpageURL;
    id <LSUserActivityDelegate> _delegate;
    SFCompanionAdvertiser *_advertiser;
    double _lastSaveTime;
    _Bool _saveScheduled;
    _Bool _createsNewUUIDIfSaved;
    _Bool _needsSave;
    _Bool _supportsContinuationStreams;
    _Bool _canCreateStreams;
    NSString *_typeIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned long long _suggestedActionType;
    NSDate *_lastActivityDate;
    NSDictionary *_options;
    NSData *_streamsData;
}

+ (void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(id)arg2;
+ (id)userActivityFromUUID:(id)arg1 withError:(id *)arg2;
+ (id)userActivity;
+ (id)suggestedActionOfType:(unsigned long long)arg1;
+ (const char *)dTraceProcessIdentifier;
+ (void)unregisterForSuggestedActionNudgeOfType:(id)arg1;
+ (id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(id)arg3;
@property(readonly) LSUserActivityManager *manager; // @synthesize manager=_manager;
@property _Bool canCreateStreams; // @synthesize canCreateStreams=_canCreateStreams;
@property(copy) NSData *streamsData; // @synthesize streamsData=_streamsData;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSDate *lastActivityDate; // @synthesize lastActivityDate=_lastActivityDate;
@property(readonly) unsigned long long suggestedActionType; // @synthesize suggestedActionType=_suggestedActionType;
@property(copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property id <LSUserActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)decodeUserInfo:(id)arg1;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)encodeUserInfo:(id)arg1;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (void)invalidate;
- (void)becomeCurrent;
- (void)getContinuationStreamsWithCompletionHandler:(id)arg1;
@property _Bool supportsContinuationStreams; // @dynamic supportsContinuationStreams;
@property _Bool needsSave; // @dynamic needsSave;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
@property(copy) NSURL *webpageURL;
@property(copy) NSString *title;
@property(copy) NSDictionary *userInfo; // @dynamic userInfo;
- (void)dealloc;
- (id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithTypeIdentifier:(id)arg1 options:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)init;
- (id)resourceURLForKey:(id)arg1;
- (void)removeResourceURL:(id)arg1;
- (id)addResourceURL:(id)arg1;
- (void)setResourceURLs:(id)arg1;
- (id)resourceURLs;
- (void)remove;
- (void)save;
@property(getter=isActive) _Bool active;
@property(copy, getter=activityPayload, setter=setActivityPayload:) NSDictionary *activityPayloadDictionary;
- (void)removeActivityPayloadForKey:(id)arg1;
- (void)updateActivityPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)removeFrameworkPayloadForKey:(id)arg1;
- (void)removeFrameworkPayloadValueForKey:(id)arg1;
- (void)updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
@property(copy) NSDictionary *frameworkPayload;
- (void)removeUserInfoValueForKey:(id)arg1;
- (void)updateUserInfoValue:(id)arg1 forKey:(id)arg2;
@property(copy) NSString *owningBundleIdentifier; // @dynamic owningBundleIdentifier;
- (id)initWithSuggestedActionType:(unsigned long long)arg1 options:(id)arg2;
- (id)initWithUUID:(id)arg1;
@property(copy) NSURL *webPageURL; // @dynamic webPageURL;
- (void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)sendUserActivityInfoToServer:(_Bool)arg1 completionHandler:(id)arg2;
- (void)scheduleSendUserActivityInfoToServer;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeUserActivity;
- (void)willSynchronizeUserActivityWithHandler:(id)arg1;
- (void)tellServerAboutNewLSUserActivity;
- (id)initWithManager:(id)arg1 userActivityInfo:(id)arg2;

// Remaining properties
@property(copy) NSDictionary *activityPayload;
@property(copy, getter=frameworkPayload, setter=setFrameworkPayload:) NSDictionary *frameworkPayloadDictionary;

@end

