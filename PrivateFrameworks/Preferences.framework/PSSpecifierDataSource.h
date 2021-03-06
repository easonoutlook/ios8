/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <Preferences/PSSpecifierDataSource-Protocol.h>

@class NSMutableArray, NSMutableSet;

@interface PSSpecifierDataSource : NSObject <PSSpecifierDataSource>
{
    NSMutableSet *_observerRefs;
    _Bool _specifiersLoaded;
    NSMutableArray *_specifiers;
}

+ (id)loadSpecifiersFromPlist:(id)arg1 inBundle:(id)arg2 target:(id)arg3 stringsTable:(id)arg4;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableArray *specifiers; // @synthesize specifiers=_specifiers;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (id)specifierForID:(id)arg1;
- (void)performUpdatesAnimated:(_Bool)arg1 usingBlock:(id)arg2;
- (void)reloadSpecifiers;
- (_Bool)areSpecifiersLoaded;
- (void)loadSpecifiers;
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;
- (void)_invalidateSpecifiersForObservers;
- (void)_clearAllSpecifiers;
- (void)performUpdates:(id)arg1;
- (void)enumerateObserversOfClass:(Class)arg1 usingBlock:(id)arg2;
- (id)observersOfClass:(Class)arg1;
- (void)enumerateObserversUsingBlock:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

