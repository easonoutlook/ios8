/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "TSCHCustomFormatSupport-Protocol.h"
#import "TSCHDataFormatter-Protocol.h"

@class NSString;

// Not exported
@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport>
{
    CDStruct_bfed0e84 mFormatStruct;
    NSString *mPrefixString;
    NSString *mSuffixString;
}

+ (int)labelFormatTypeFromTSUFormatType:(int)arg1;
+ (id)numberFormatWithFormatStruct:(CDStruct_bfed0e84)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
+ (id)numberFormatWithFormatType:(int)arg1 decimalPlaces:(unsigned int)arg2 showThousandsSeparator:(_Bool)arg3;
+ (id)defaultDecimalNumberFormat;
+ (_Bool)defaultBaseUseMinusSign;
+ (unsigned int)defaultBasePlaces;
+ (unsigned int)defaultBase;
+ (int)defaultNegativeNumberStyle;
+ (int)defaultFractionAccuracy;
+ (id)defaultCurrencyCode;
+ (id)automaticDecimalPlaces;
+ (id)instanceWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
- (id).cxx_construct;
- (id)bakeableNumberFormat;
- (_Bool)supportsAutoMinMax;
- (_Bool)isCompatibleWithDataFormatter:(id)arg1;
- (id)chartFormattedInspectorStringForValue:(id)arg1;
- (id)chartFormattedStringForValue:(id)arg1;
- (id)p_formattedBodyStringForDouble:(double)arg1;
- (id)dataFormatterForDocumentRoot:(id)arg1;
- (unsigned int)customFormatListKey;
- (CDStruct_bfed0e84)formatStruct;
- (_Bool)isCustom;
@property(readonly, nonatomic) _Bool baseUseMinusSign;
- (_Bool)p_baseUseMinusSignIfAvailable;
- (_Bool)p_baseUseMinusSign;
@property(readonly, nonatomic) unsigned int basePlaces;
- (unsigned int)p_basePlacesIfAvailable;
- (unsigned int)p_basePlaces;
@property(readonly, nonatomic) unsigned int base;
- (unsigned int)p_baseIfAvailable;
- (unsigned int)p_base;
@property(readonly, nonatomic) double scaleFactor;
@property(readonly, copy, nonatomic) NSString *suffixString;
@property(readonly, copy, nonatomic) NSString *prefixString;
@property(readonly, nonatomic) int fractionAccuracy;
- (int)p_fractionAccuracyIfAvailable;
- (int)p_fractionAccuracy;
@property(readonly, nonatomic) _Bool showThousandsSeparator;
- (_Bool)p_showThousandsSeparatorIfAvailable;
- (_Bool)p_showThousandsSeparator;
@property(readonly, nonatomic) int negativeStyle;
- (int)p_negativeStyleIfAvailable;
- (int)p_negativeStyle;
@property(readonly, nonatomic) _Bool useAccountingStyle;
- (_Bool)p_useAccountingStyleIfAvailable;
- (_Bool)p_useAccountingStyle;
@property(readonly, copy, nonatomic) NSString *currencyCode;
- (id)p_currencyCodeIfAvailable;
- (id)p_currencyCode;
@property(readonly, nonatomic) unsigned int decimalPlaces;
- (unsigned int)p_decimalPlacesIfAvailable;
- (unsigned int)p_decimalPlaces;
- (int)valueType;
@property(readonly, nonatomic) int formatType;
- (const CDStruct_b87b2d04 *)p_customFormatData;
- (_Bool)p_hasValidDecimalPlaces;
- (id)p_formatTypeDescription;
@property(readonly, nonatomic) _Bool isBase;
@property(readonly, nonatomic) _Bool isFraction;
- (_Bool)isScientific;
@property(readonly, nonatomic) _Bool isPercentage;
@property(readonly, nonatomic) _Bool isCurrency;
@property(readonly, nonatomic) _Bool usesNumberFormatStruct;
- (id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFormatStruct:(CDStruct_bfed0e84)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (id)upgradedNumberFormatFromPreUFFOrUnity1_0;
- (void)saveToArchive:(struct FormatStructArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;

@end

