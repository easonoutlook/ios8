/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface VKLandmarkIconGenerator : NSObject
{
}

+ (id)sharedGenerator;
- (id)newIconWithMask:(struct CGImage *)arg1 outlineMask:(struct CGImage *)arg2 style:(CDStruct_44d855de *)arg3 scale:(double)arg4;
- (id)keyForName:(id)arg1 style:(CDStruct_44d855de *)arg2;
- (_Bool)canHandleStyle:(CDStruct_44d855de *)arg1;

@end

