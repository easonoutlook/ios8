/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@class NSArray, NSString, SCNGeometryElement, SCNGeometrySource, SCNMaterial;

@protocol SCNGeometryJSExport <JSExport>
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2;
+ (id)geometry;
@property(retain, nonatomic) SCNGeometrySource *edgeCreasesSource;
@property(retain, nonatomic) SCNGeometryElement *edgeCreasesElement;
@property(nonatomic) unsigned long long subdivisionLevel;
@property(copy, nonatomic) NSArray *levelsOfDetail;
@property(readonly, nonatomic) long long geometryElementCount;
@property(retain, nonatomic) SCNMaterial *firstMaterial;
@property(copy, nonatomic) NSArray *materials;
@property(copy, nonatomic) NSString *name;
- (id)getBoundingSphere;
- (id)getBoundingBox;
- (id)copy;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)geometryElementAtIndex:(long long)arg1;
- (id)geometrySourcesForSemantic:(id)arg1;
- (id)materialWithName:(id)arg1;
- (void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(id)arg2;
- (void)removeMaterialAtIndex:(unsigned long long)arg1;
- (void)insertMaterial:(id)arg1 atIndex:(unsigned long long)arg2;
@end

