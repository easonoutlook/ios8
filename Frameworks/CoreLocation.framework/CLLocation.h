/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CLFloor, CLLocationMatchInfo, NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
- (void)setHorizontalAccuracy:(double)arg1;
@property(readonly, nonatomic) NSString *iso6709Notation;
- (id)propagateLocationToTime:(double)arg1;
- (id)snapToResolution:(double)arg1;
- (double)distanceFromLocation:(id)arg1;
- (double)getDistanceFrom:(id)arg1;
@property(readonly, copy, nonatomic) CLFloor *floor;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) double rawCourse;
@property(readonly, nonatomic) double course;
@property(readonly, nonatomic) double speed;
@property(readonly, nonatomic) CDStruct_dcdde258 clientLocation;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) double verticalAccuracy;
@property(readonly, nonatomic) double horizontalAccuracy;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) CDStruct_c3b9c2ee rawCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)shortDescription;
@property(readonly, copy, nonatomic) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientLocation:(CDStruct_dcdde258)arg1 matchInfo:(id)arg2;
- (id)initWithClientLocation:(CDStruct_dcdde258)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)_initWithCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)init;
@property(readonly, nonatomic) CLLocationMatchInfo *matchInfo;

@end

