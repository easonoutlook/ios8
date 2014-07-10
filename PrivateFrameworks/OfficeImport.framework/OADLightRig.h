/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class OADRotation3D;

// Not exported
@interface OADLightRig : NSObject <NSCopying>
{
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setDirection:(int)arg1;
- (int)direction;
- (void)setType:(int)arg1;
- (int)type;
- (void)setRotation:(id)arg1;
- (id)rotation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

