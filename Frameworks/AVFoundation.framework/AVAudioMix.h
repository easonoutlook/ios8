/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying>
{
    AVAudioMixInternal *_audioMix;
}

- (id)_audioMixInputParametersForTrackID:(int)arg1;
- (void)setInputParameters:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *inputParameters;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

