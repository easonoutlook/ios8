/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

// Not exported
@interface TSCEWarning : NSObject
{
    NSDictionary *mMetadata;
    _Bool mIgnored;
}

+ (void)reportComparisonWarningInContext:(struct TSCEWarningReportingContext *)arg1 leftType:(int)arg2 rightType:(int)arg3;
+ (void)reportAutomaticUnitConversionWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportLossOfUnitsWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportMismatchedSizesWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportBoolToNumberConversionWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportDayOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportMonthOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportNonNumericCellWarningInContext:(struct TSCEWarningReportingContext *)arg1 reference:(id)arg2;
+ (_Bool)setHasVisibleWarnings:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)displayStringWithCalculationEngine:(id)arg1 forTable:(struct __CFUUID *)arg2 andCellID:(CDStruct_0441cfb5)arg3;
- (void)setIgnored:(_Bool)arg1;
- (_Bool)isIgnored;
- (id)type;
- (void)dealloc;
- (id)copyByRemappingEntityIDs:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end

