/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBUniquableObject-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface BBSound : NSObject <BBUniquableObject, NSCopying, NSSecureCoding>
{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned long long _soundBehavior;
    NSString *_audioCategory;
    NSString *_ringtoneName;
    _Bool _repeats;
    NSDictionary *_vibrationPattern;
    int _alertType;
    NSString *_accountIdentifier;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    double _maxDuration;
    NSString *_songPath;
}

+ (_Bool)supportsSecureCoding;
+ (void)_removeCachedSound:(id)arg1;
+ (id)_possiblyCachedAlertSoundForInitializedSound:(id)arg1;
+ (id)alertSoundWithSystemSoundID:(unsigned int)arg1;
@property(copy, nonatomic) NSString *songPath; // @synthesize songPath=_songPath;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(nonatomic) unsigned long long soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic, getter=isRepeating) _Bool repeats; // @synthesize repeats=_repeats;
@property(copy, nonatomic) NSString *ringtoneName; // @synthesize ringtoneName=_ringtoneName;
@property(copy, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property(nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(nonatomic) long long soundType; // @synthesize soundType=_soundType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)uniqueIdentifier;
- (void)dealloc;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 maxDuration:(double)arg4;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2;
- (id)initWithToneAlert:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2;
- (id)initWithToneAlert:(int)arg1;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 audioCategory:(id)arg4 maxDuration:(double)arg5;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 audioCategory:(id)arg4;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2;

@end

