/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class OADBackdrop, OADCamera, OADLightRig;

// Not exported
@interface OADScene3D : NSObject <NSCopying>
{
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setBackdrop:(id)arg1;
- (id)backdrop;
- (void)setLightRig:(id)arg1;
- (id)lightRig;
- (void)setCamera:(id)arg1;
- (id)camera;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

