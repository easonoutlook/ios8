/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSCH3DAnimationInterpolation;

// Not exported
@interface TSCH3DAnimationTiming : NSObject
{
    box_e9f23397 mRange;
    TSCH3DAnimationInterpolation *mInterpolation;
}

+ (id)timing;
@property(retain, nonatomic) TSCH3DAnimationInterpolation *interpolation; // @synthesize interpolation=mInterpolation;
@property(nonatomic) box_e9f23397 range; // @synthesize range=mRange;
- (id).cxx_construct;
- (float)toClampedInterpolatedLocal:(float)arg1;
- (float)toClampedLocal:(float)arg1;
- (float)toLocal:(float)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

