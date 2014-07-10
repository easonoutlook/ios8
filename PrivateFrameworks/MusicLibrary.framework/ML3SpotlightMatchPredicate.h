/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3Predicate.h>

@class ML3SpotlightNameCache, NSArray, NSString;

@interface ML3SpotlightMatchPredicate : ML3Predicate
{
    ML3SpotlightNameCache *_names;
    NSArray *_searchProperties;
    NSString *_searchString;
}

+ (id)predicateWithProperties:(id)arg1 searchString:(id)arg2;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 matchingProperties:(id)arg2;
- (id)spotlightPredicate;

@end

