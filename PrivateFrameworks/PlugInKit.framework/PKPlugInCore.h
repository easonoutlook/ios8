/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PKPlugInCore : NSObject
{
    _Bool _onSystemVolume;
    NSDictionary *_topDictionary;
    NSDictionary *_plugInDictionary;
    NSString *_identifier;
    NSURL *_url;
    NSURL *_containingUrl;
    NSDictionary *_bundleInfoDictionary;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSString *_localizedContainingName;
    NSDictionary *_annotations;
    long long _lastModified;
    NSUUID *_uuid;
    NSData *_cdhash;
    NSString *_requirement;
}

+ (id)readSDKDictionary:(id)arg1;
@property(retain) NSString *requirement; // @synthesize requirement=_requirement;
@property(retain) NSData *cdhash; // @synthesize cdhash=_cdhash;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property long long lastModified; // @synthesize lastModified=_lastModified;
@property(retain) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(retain) NSString *localizedContainingName; // @synthesize localizedContainingName=_localizedContainingName;
@property(retain) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property(retain) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain) NSDictionary *bundleInfoDictionary; // @synthesize bundleInfoDictionary=_bundleInfoDictionary;
@property _Bool onSystemVolume; // @synthesize onSystemVolume=_onSystemVolume;
@property(retain) NSURL *containingUrl; // @synthesize containingUrl=_containingUrl;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)augmentInterface:(id)arg1;
@property(readonly) NSDate *timestamp;
@property(readonly) _Bool isData;
@property(readonly) _Bool isDedicated;
@property(readonly) _Bool isHybrid;
@property(readonly) _Bool isMultiplexed;
@property(readonly) _Bool isAppExtension;
- (id)embeddedProtocolSpec;
- (id)embeddedCodePath;
@property(readonly) NSString *sdkSpec;
@property(readonly) id protocolSpec;
@property(readonly) NSString *version;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSString *containingPath;
@property(readonly) NSString *path;
@property(readonly) _Bool oldStyle;
@property(retain) NSDictionary *plugInDictionary; // @synthesize plugInDictionary=_plugInDictionary;
@property(retain) NSDictionary *topDictionary; // @synthesize topDictionary=_topDictionary;
- (void)updateFromForm:(id)arg1;
- (id)diagnose;
- (id)export:(id *)arg1;
- (id)mergeSharedResources:(id)arg1 into:(id)arg2;
- (_Bool)sdkOverridesKey:(id)arg1;
- (id)mergeDictionary:(id)arg1 into:(id)arg2;
- (void)resolveSDK;
- (void)canonicalize;
- (_Bool)setupWithForm:(id)arg1;
- (id)newAttributesFrom:(id)arg1;
- (id)newMultiplesFrom:(id)arg1;
- (id)newPlugInKitDictionaryFrom:(id)arg1;
- (id)normalizeInfoDictionary:(id)arg1;
- (_Bool)setDictionaries:(id)arg1;
- (_Bool)setupWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithForm:(id)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5;
- (id)init;

@end

