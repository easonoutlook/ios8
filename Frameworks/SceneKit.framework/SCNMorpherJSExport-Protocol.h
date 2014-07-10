/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@class NSArray, NSString, SCNMorpher;

@protocol SCNMorpherJSExport <JSExport>
+ (id)morpher;
@property(readonly, nonatomic) SCNMorpher *presentationMorpher;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) long long calculationMode;
@property(copy, nonatomic) NSArray *targets;
- (void)setWeight:(double)arg1 atTargetIndex:(long long)arg2;
- (double)weightAtTargetIndex:(long long)arg1;
- (id)copy;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (double)weightForTargetAtIndex:(unsigned long long)arg1;
- (void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2;
@end

