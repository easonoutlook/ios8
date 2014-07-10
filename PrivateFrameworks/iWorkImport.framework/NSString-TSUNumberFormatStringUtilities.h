/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (TSUNumberFormatStringUtilities)
+ (id)numberSymbols;
- (id)prefixOfNumberFormatSubpattern;
- (unsigned long long)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)suffixOfNumberFormatSubpattern;
- (unsigned long long)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)numberPortionOfNumberFormatSubpattern;
- (id)negativeSubpatternOfNumberFormatPattern;
- (id)positiveSubpatternOfNumberFormatPattern;
- (unsigned long long)indexOfNumberFormatSubpatternSeparator;
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)newRangesOfEscapedCharactersInNumberFormatPattern;
- (_Bool)isNumberFormatPattern;
- (id)newStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
@end

