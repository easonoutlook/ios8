/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray;

@interface PSSpecifierGroupIndex : NSObject <NSCopying>
{
    NSMutableArray *_specifiers;
    NSMutableArray *_groupSections;
    NSMutableArray *_groupSpecifiers;
    NSMutableArray *_ungroupedPrefixSpecifiers;
    _Bool _wantsDebugCallbacks;
}

+ (_Bool)_wantsDebuggingCallbacks;
+ (id)groupIndexWithSpecifiers:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (id)description;
- (void)_appendDescriptionOfArray:(id)arg1 toString:(id)arg2 withTabLevel:(unsigned long long)arg3;
- (id)_tabStringOfDepth:(unsigned long long)arg1;
- (void)_didPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)_willPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (id)_synthesizedSpecifiersFromGroupIndex;
- (id)_groupSections;
- (unsigned long long)indexOfGroupWithID:(id)arg1;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfGroupAtGroupIndex:(unsigned long long)arg1;
- (unsigned long long)groupIndexOfGroupWithID:(id)arg1;
- (unsigned long long)groupIndexOfGroup:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *groupSpecifiers;
- (id)specifiersInGroupWithID:(id)arg1;
- (id)specifiersInGroup:(id)arg1;
- (id)specifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfSpecifiersInGroupWithID:(id)arg1;
- (struct _NSRange)rangeOfSpecifiersInGroup:(id)arg1;
- (struct _NSRange)rangeOfSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (_Bool)getGroup:(out unsigned long long *)arg1 row:(out unsigned long long *)arg2 ofSpecifierWithID:(id)arg3;
- (_Bool)getGroup:(out unsigned long long *)arg1 row:(out unsigned long long *)arg2 ofSpecifier:(id)arg3;
- (_Bool)getGroup:(out unsigned long long *)arg1 row:(out unsigned long long *)arg2 ofSpecifierAtIndex:(unsigned long long)arg3;
- (id)indexPathForSpecifierWithID:(id)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (id)specifierAtIndexPath:(id)arg1;
- (id)indexPathForSpecifierAtIndex:(unsigned long long)arg1 forInsertion:(_Bool)arg2;
- (id)indexPathForSpecifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSpecifierAtIndexPath:(id)arg1 forInsertion:(_Bool)arg2;
- (unsigned long long)indexOfSpecifierAtIndexPath:(id)arg1;
- (unsigned long long)_indexOfSpecifierInSection:(unsigned long long)arg1 row:(unsigned long long)arg2 forInsertion:(_Bool)arg3;
- (void)_getSection:(out unsigned long long *)arg1 row:(out unsigned long long *)arg2 forSpecifierAtIndex:(unsigned long long)arg3 forInsertion:(_Bool)arg4 allowGroupSpecifiers:(_Bool)arg5;
- (void)_getSection:(out unsigned long long *)arg1 row:(out unsigned long long *)arg2 forSpecifierAtIndex:(unsigned long long)arg3 forInsertion:(_Bool)arg4;
- (void)_manuallyFindSection:(out unsigned long long *)arg1 row:(out unsigned long long *)arg2 forSpecifierAtIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfRowsInGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfGroups;
- (void)performSpecifierUpdatesUsingBlock:(id)arg1;
- (void)performUpdateOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)performUpdateOperation:(id)arg1;
- (void)performSpecifierUpdates:(id)arg1;
- (void)reloadWithSpecifiers:(id)arg1;
- (id)_ungroupedPrefixSpecifiers;
- (void)_createGroupIndex;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initForCopyWithGroupIndex:(id)arg1;
- (id)initWithSpecifiers:(id)arg1;
- (id)_init;
- (id)init;

@end

