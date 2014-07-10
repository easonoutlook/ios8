/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface TLITunesTone : NSObject
{
    _Bool _purchased;
    _Bool _ringtone;
    _Bool _protected;
    _Bool _private;
    NSString *_identifier;
    NSString *_name;
    NSString *_filePath;
    NSNumber *_pid;
    NSString *_artworkFile;
    unsigned long long _duration;
    NSDictionary *_playbackProperties;
}

- (void)_setPlaybackProperties:(id)arg1;
@property(copy, nonatomic) NSDictionary *playbackProperties; // @synthesize playbackProperties=_playbackProperties;
- (void)_setPrivate:(_Bool)arg1;
@property(nonatomic, getter=isPrivate) _Bool private; // @synthesize private=_private;
- (void)_setProtected:(_Bool)arg1;
@property(nonatomic, getter=isProtected) _Bool protected; // @synthesize protected=_protected;
- (void)_setDuration:(unsigned long long)arg1;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (void)_setArtworkFile:(id)arg1;
@property(copy, nonatomic) NSString *artworkFile; // @synthesize artworkFile=_artworkFile;
- (void)_setPid:(id)arg1;
@property(copy, nonatomic) NSNumber *pid; // @synthesize pid=_pid;
- (void)_setRingtone:(_Bool)arg1;
@property(nonatomic, getter=isRingtone) _Bool ringtone; // @synthesize ringtone=_ringtone;
- (void)_setPurchased:(_Bool)arg1;
@property(nonatomic, getter=isPurchased) _Bool purchased; // @synthesize purchased=_purchased;
- (void)_setFilePath:(id)arg1;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)_setName:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;

@end

