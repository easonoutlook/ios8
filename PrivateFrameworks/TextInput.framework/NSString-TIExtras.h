/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (TIExtras)
+ (id)stringWithUnichar:(unsigned int)arg1;
+ (struct USet *)_nonFullwidthLettersAndNumbersSet;
+ (struct USet *)_fullwidthLettersAndNumbersSet;
+ (struct USet *)_bopomofoToneSet;
+ (struct USet *)_bopomofoSet;
+ (struct USet *)_ideographSet;
+ (struct USet *)_nonJapaneseLetterSet;
+ (struct USet *)_japaneseLetterSet;
+ (struct USet *)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet *)_nonHiraganaOrKatakanaSet;
+ (struct USet *)_nonIdeographicCharacterSet;
+ (struct USet *)_characterSetWithPattern:(id)arg1;
+ (id)_stringWithUnichar:(unsigned int)arg1;
- (unsigned long long)editDistanceFrom:(id)arg1;
- (_Bool)containsSubstring:(id)arg1;
- (_Bool)isNaturallyRTL;
- (_Bool)looksLikeURL;
- (_Bool)looksLikeNumberInput;
- (_Bool)looksLikeEmailAddress;
- (_Bool)isTripledPunctuation;
- (_Bool)isDelete;
- (_Bool)isNewlineOrReturn;
- (_Bool)isSpaceOrReturn;
- (_Bool)isSpace;
- (_Bool)isPlainSpace;
- (_Bool)isLeftAssociative;
- (_Bool)endsSentence;
- (id)stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByTrimmingLastCharacter;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (unsigned long long)_editDistanceFrom:(id)arg1;
- (_Bool)_containsSubstring:(id)arg1;
- (id)_stringByTransliteratingToZhuyinAsFamilyName;
- (id)_stringByTransliteratingToZhuyin;
- (id)_stringByTransliteratingToZhuyin:(_Bool)arg1;
- (id)_stringByTransliteratingToPinyinAsFamilyName;
- (id)_stringByTransliteratingToPinyin;
- (id)_stringByTransliteratingToPinyin:(_Bool)arg1;
- (id)_stringByApplyingTransform:(id)arg1;
- (id)_stringByTranscribingUsingTokenizer:(struct __CFStringTokenizer *)arg1;
- (id)_stringByTranscribingFromLanguage:(id)arg1;
- (id)_stringByConvertingFromFullWidthToHalfWidth;
- (id)_stringByConvertingFromHalfWidthToFullWidth;
- (_Bool)_shouldBePaddedWithSpaces;
- (_Bool)_containsFullwidthLettersAndNumbers;
- (_Bool)_containsFullwidthLettersAndNumbersOnly;
- (_Bool)_containsCJKSymbolsAndPunctuation;
- (_Bool)_containsCJKScriptsOnly;
- (_Bool)_containsCJScriptsOnly;
- (_Bool)_containsBopomofoToneOnly;
- (_Bool)_containsBopomofoOnly;
- (_Bool)_containsEmoji;
- (_Bool)_containsHiraganaKatakanaOrBopomofo;
- (_Bool)_containsHiraganaOrKatakana;
- (_Bool)_containsJapaneseOnly;
- (_Bool)_containsJapanese;
- (_Bool)_containsIdeographicCharacters;
- (unsigned long long)_graphemeCount;
- (id)_lastGrapheme;
- (id)_firstGrapheme;
- (_Bool)_isOnlyIdeographs;
- (_Bool)_isIdeographicGlyphs;
- (_Bool)_containsCJScripts;
- (_Bool)_isNaturallyRTL;
- (_Bool)_looksLikeURL;
- (_Bool)_looksLikeNumberInput;
- (_Bool)_looksLikeEmailAddress;
- (_Bool)_isNewlineOrReturn;
- (_Bool)_isDelete;
- (_Bool)_isSpace;
- (_Bool)_isPlainSpace;
- (_Bool)_isSpaceOrReturn;
- (_Bool)_isTripledPunctuation;
- (_Bool)_isLeftAssociative;
- (_Bool)_isModifierSymbol;
- (_Bool)_endsSentence;
- (struct _NSRange)_rangeOfBackwardDeletionClusterAtIndex:(unsigned long long)arg1;
- (id)_stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByTrimmingLastCharacter;
- (id)_stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (_Bool)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;
- (unsigned int)_firstLongCharacter;
- (unsigned short)_firstChar;
@end

