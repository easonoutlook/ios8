/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion
{
}

+ (_Bool)supportsSecureCoding;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) double radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee center;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCenter:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 identifier:(id)arg3;

@end

