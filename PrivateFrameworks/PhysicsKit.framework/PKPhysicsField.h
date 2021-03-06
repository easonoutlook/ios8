/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PKRegion;

@interface PKPhysicsField : NSObject
{
    // Error parsing type: ^{PKCField=^^?^{RegionHolder}{mat4=(?=[4]{?=[16f]})}{mat4=(?=[4]{?=[16f]})}fBffIBB}, name: _field
    PKRegion *_region;
    _Bool _inUse;
    // Error parsing type: , name: _position
    float _rotation;
    // Error parsing type: , name: _scale
    id <NSObject> _representedObject;
    _Bool _active;
    _Bool _override;
}

@property(nonatomic, getter=isOverride) _Bool override; // @synthesize override=_override;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
@property(nonatomic) float minimumRadius;
// Error parsing type for property scale:
// Property attributes: T,N

@property(nonatomic) float rotation;
// Error parsing type for property position:
// Property attributes: T,N

- (void)setIsOverride:(_Bool)arg1;
- (_Bool)override;
@property(nonatomic) unsigned int categoryBitMask;
- (void)setIsActive:(_Bool)arg1;
- (_Bool)active;
@property(nonatomic) float falloff;
@property(nonatomic) float strength;
@property(nonatomic) __weak id <NSObject> representedObject;
@property(retain, nonatomic) id region;
-     // Error parsing type: v24@0:8^{PKCField=^^?^{RegionHolder}{mat4=(?=[4]{?=[16f]})}{mat4=(?=[4]{?=[16f]})}fBffIBB}16, name: set_field:
-     // Error parsing type: ^{PKCField=^^?^{RegionHolder}{mat4=(?=[4]{?=[16f]})}{mat4=(?=[4]{?=[16f]})}fBffIBB}16@0:8, name: _field
- (void)dealloc;
- (id)init;
@property(nonatomic) _Bool _inUse;

@end

