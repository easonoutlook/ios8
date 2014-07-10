/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface RKSentenceClassifier : NSObject
{
    _Bool _sentenceIsTerminated;
    _Bool _sentenceHasQuestionTerminator;
    NSString *_sentenceString;
    NSArray *_sentenceEntities;
    NSArray *_inversions;
    NSArray *_interrogatives;
    NSArray *_alternatives;
    NSArray *_appreciations;
}

+ (id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned long long)arg3;
+ (id)stringFromLexicalEntities:(id)arg1;
+ (id)lexicalEntitiesFromString:(id)arg1;
+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2;
+ (unsigned long long)categoryForPreferenceKey:(id)arg1;
+ (id)preferenceKeyForCategory:(unsigned long long)arg1;
+ (id)keyToCategoryMap;
+ (Class)subclassForLocale:(id)arg1;
+ (Class)subclassForLanguageIdentifier:(id)arg1;
+ (id)languageIdentifier;
@property(retain) NSArray *appreciations; // @synthesize appreciations=_appreciations;
@property(retain) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property(retain) NSArray *interrogatives; // @synthesize interrogatives=_interrogatives;
@property(retain) NSArray *inversions; // @synthesize inversions=_inversions;
@property _Bool sentenceHasQuestionTerminator; // @synthesize sentenceHasQuestionTerminator=_sentenceHasQuestionTerminator;
@property _Bool sentenceIsTerminated; // @synthesize sentenceIsTerminated=_sentenceIsTerminated;
@property(retain) NSArray *sentenceEntities; // @synthesize sentenceEntities=_sentenceEntities;
@property(retain) NSString *sentenceString; // @synthesize sentenceString=_sentenceString;
- (void).cxx_destruct;
- (id)classifySentence;
- (void)analyzeSentence;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)sentenceClassification:(id)arg1 options:(unsigned long long)arg2;

@end

