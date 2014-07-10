/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class CLLocation, NSDate;

@interface EKTravelAdvisorTraceLocation : NSObject <NSSecureCoding>
{
    NSDate *_date;
    CLLocation *_location;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDate:(id)arg1 location:(id)arg2;

@end

