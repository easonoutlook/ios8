/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSValue.h"

@interface JSValue (SCNStructSupport)
+ (id)valueWithTransform3D:(struct SCNMatrix4)arg1 inContext:(id)arg2;
+ (id)valueWithVector3:(struct SCNVector3)arg1 inContext:(id)arg2;
+ (id)valueWithVector4:(struct SCNVector4)arg1 inContext:(id)arg2;
- (struct SCNMatrix4)toTransform3D;
- (struct SCNVector3)toVector3;
- (struct SCNVector4)toVector4;
@end

