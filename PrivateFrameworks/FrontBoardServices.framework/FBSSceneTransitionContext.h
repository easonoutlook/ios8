/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class BSAnimationSettings, BSMachSendRight, BSMutableSettings, NSSet;

@interface FBSSceneTransitionContext : NSObject <NSCopying, NSMutableCopying>
{
    BSAnimationSettings *_animationSettings;
    BSMachSendRight *_animationFencePort;
    NSSet *_actions;
    BSMutableSettings *_otherSettings;
    BSMutableSettings *_transientLocalClientSettings;
}

+ (id)transitionContext;
@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) BSMachSendRight *animationFencePort; // @synthesize animationFencePort=_animationFencePort;
@property(copy, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1;
- (id)transientLocalClientSettings;
- (id)otherSettings;
- (void)dealloc;

@end

