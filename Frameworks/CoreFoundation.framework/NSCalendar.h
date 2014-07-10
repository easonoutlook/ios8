/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSLocale, NSString, NSTimeZone;

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)calendarWithIdentifier:(id)arg1;
+ (id)currentCalendar;
+ (_Bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (unsigned char)_diffComponents:(double)arg1:(double)arg2:(unsigned long long)arg3:(const char *)arg4:(struct __va_list_tag [1])arg5;
- (unsigned char)_addComponents:(double *)arg1:(unsigned long long)arg2:(const char *)arg3:(struct __va_list_tag [1])arg4;
- (unsigned char)_decomposeAbsoluteTime:(double)arg1:(const char *)arg2:(struct __va_list_tag [1])arg3;
- (unsigned char)_composeAbsoluteTime:(double *)arg1:(const char *)arg2:(struct __va_list_tag [1])arg3;
- (unsigned char)_rangeOfUnit:(unsigned long long)arg1 startTime:(double *)arg2 interval:(double *)arg3 forAT:(double)arg4;
- (long long)_ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3;
- (CDStruct_912cb5d2)_rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3;
- (CDStruct_912cb5d2)_maximumRangeOfUnit:(unsigned long long)arg1;
- (CDStruct_912cb5d2)_minimumRangeOfUnit:(unsigned long long)arg1;
@property(readonly, copy) NSArray *shortStandaloneQuarterSymbols;
@property(readonly, copy) NSArray *standaloneQuarterSymbols;
@property(readonly, copy) NSArray *shortQuarterSymbols;
@property(readonly, copy) NSArray *quarterSymbols;
@property(readonly, copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property(readonly, copy) NSArray *shortStandaloneWeekdaySymbols;
@property(readonly, copy) NSArray *standaloneWeekdaySymbols;
@property(readonly, copy) NSArray *veryShortWeekdaySymbols;
@property(readonly, copy) NSArray *veryShortStandaloneMonthSymbols;
@property(readonly, copy) NSArray *shortStandaloneMonthSymbols;
@property(readonly, copy) NSArray *standaloneMonthSymbols;
@property(readonly, copy) NSArray *veryShortMonthSymbols;
@property(readonly, copy) NSArray *longEraSymbols;
@property(readonly, copy) NSString *PMSymbol;
@property(readonly, copy) NSString *AMSymbol;
@property(readonly, copy) NSArray *shortWeekdaySymbols;
@property(readonly, copy) NSArray *weekdaySymbols;
@property(readonly, copy) NSArray *shortMonthSymbols;
@property(readonly, copy) NSArray *monthSymbols;
@property(readonly, copy) NSArray *eraSymbols;
- (id)_gregorianStartDate;
- (void)_setGregorianStartDate:(id)arg1;
- (id)_copyTimeZone;
- (id)_copyLocale;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (_Bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;
- (id)gregorianStartDate;
- (void)setGregorianStartDate:(id)arg1;
@property unsigned long long minimumDaysInFirstWeek;
@property unsigned long long firstWeekday;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSLocale *locale;
@property(readonly, copy) NSString *calendarIdentifier;
- (id)initWithCalendarIdentifier:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id)arg4;
- (_Bool)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
- (_Bool)isDateInWeekend:(id)arg1;
- (_Bool)date:(id)arg1 matchesComponents:(id)arg2;
- (id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ofDate:(id)arg4 options:(unsigned long long)arg5;
- (id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 toDate:(id)arg4 options:(unsigned long long)arg5;
- (id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)nextDateAfterDate:(id)arg1 matchingHour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4 options:(unsigned long long)arg5;
- (id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 options:(unsigned long long)arg4;
- (id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3;
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4;
- (_Bool)rangeOfWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 containingDate:(id)arg3;
- (_Bool)isDateInTomorrow:(id)arg1;
- (_Bool)isDateInYesterday:(id)arg1;
- (_Bool)isDateInToday:(id)arg1;
- (_Bool)isDate:(id)arg1 inSameDayAsDate:(id)arg2;
- (_Bool)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;
- (long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;
- (id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2;
- (id)startOfDayForDate:(id)arg1;
- (id)dateWithEra:(long long)arg1 yearForWeekOfYear:(long long)arg2 weekOfYear:(long long)arg3 weekday:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;
- (id)dateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;
- (long long)component:(unsigned long long)arg1 fromDate:(id)arg2;
- (void)getHour:(out long long *)arg1 minute:(out long long *)arg2 second:(out long long *)arg3 nanosecond:(out long long *)arg4 fromDate:(id)arg5;
- (void)getEra:(out long long *)arg1 yearForWeekOfYear:(out long long *)arg2 weekOfYear:(out long long *)arg3 weekday:(out long long *)arg4 fromDate:(id)arg5;
- (void)getEra:(out long long *)arg1 year:(out long long *)arg2 month:(out long long *)arg3 day:(out long long *)arg4 fromDate:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_cfTypeID;
- (id)init;

@end

