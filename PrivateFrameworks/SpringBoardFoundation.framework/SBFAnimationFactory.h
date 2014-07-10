/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "_UIBasicAnimationFactory-Protocol.h"

@class BSAnimationSettings;

@interface SBFAnimationFactory : NSObject <NSCopying, _UIBasicAnimationFactory>
{
    BSAnimationSettings *_settings;
}

+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(id)arg4 completion:(void)arg5;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(id)arg4;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(id)arg3 completion:(void)arg4;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(id)arg3;
+ (void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(id)arg3 completion:(void)arg4;
+ (void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(id)arg3;
+ (void)animateWithFactory:(id)arg1 actions:(id)arg2 completion:(void)arg3;
+ (void)animateWithFactory:(id)arg1 actions:(id)arg2;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)factoryWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2;
+ (id)factoryWithDuration:(double)arg1;
+ (id)factoryWithAnimationAttributes:(id)arg1;
+ (id)factoryWithSettings:(id)arg1 timingFunction:(id)arg2;
+ (id)factoryWithSettings:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) double duration;
- (void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(id)arg3 completion:(void)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)factoryWithTimingFunction:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithSettings:(id)arg1;

@end
