/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDate.h"

@class NSTimeZone;

@interface MKDate : NSDate
{
    NSDate *_date;
    NSTimeZone *_tz;
}

+ (id)dateWithNSDate:(id)arg1;
@property(readonly, nonatomic) NSDate *nsDate; // @synthesize nsDate=_date;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_tz;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)initWithNSDate:(id)arg1;
- (long long)dayOfCommonEra;

@end

