/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AXElement, AXElementGroup, AXElementGroupPruner, AXVisualElementGrouper, NSArray, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AXElementFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_elementFetchQueue;
    NSObject<OS_dispatch_queue> *_elementAccessQueue;
    struct __AXObserver *_axRuntimeNotificationObserver;
    unsigned long long _scheduledFetchEvent;
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;
    _Bool _enabled;
    _Bool _eventManagementEnabled;
    _Bool _groupingEnabled;
    _Bool _shouldUsePadInterfaceHeuristics;
    _Bool _fetchingElements;
    id <AXElementFetcherDelegate> _delegate;
    long long _fetchPolicy;
    NSMapTable *_fetchObservers;
    unsigned long long _activeFetchEvents;
    NSArray *_elementCache;
    AXElementGroup *_rootGroupCache;
    AXElementGroup *_keyboardGroupCache;
    AXElement *_currentApp;
    AXVisualElementGrouper *_visualElementGrouper;
    AXElementGroupPruner *_elementGroupPruner;
    NSMutableDictionary *_postFetchFilters;
}

+ (id)currentAppWithPositionHint:(struct CGPoint)arg1;
+ (id)_applicationForElement:(id)arg1;
+ (id)springBoardElement;
+ (id)systemWideElement;
@property(retain, nonatomic) NSMutableDictionary *postFetchFilters; // @synthesize postFetchFilters=_postFetchFilters;
@property(nonatomic, getter=isFetchingElements) _Bool fetchingElements; // @synthesize fetchingElements=_fetchingElements;
@property(nonatomic) _Bool shouldUsePadInterfaceHeuristics; // @synthesize shouldUsePadInterfaceHeuristics=_shouldUsePadInterfaceHeuristics;
@property(retain, nonatomic) AXElementGroupPruner *elementGroupPruner; // @synthesize elementGroupPruner=_elementGroupPruner;
@property(retain, nonatomic) AXVisualElementGrouper *visualElementGrouper; // @synthesize visualElementGrouper=_visualElementGrouper;
@property(retain, nonatomic) AXElement *currentApp; // @synthesize currentApp=_currentApp;
@property(nonatomic, getter=isGroupingEnabled) _Bool groupingEnabled; // @synthesize groupingEnabled=_groupingEnabled;
@property(retain, nonatomic) AXElementGroup *keyboardGroupCache; // @synthesize keyboardGroupCache=_keyboardGroupCache;
@property(retain, nonatomic) AXElementGroup *rootGroupCache; // @synthesize rootGroupCache=_rootGroupCache;
@property(nonatomic, getter=isEventManagementEnabled) _Bool eventManagementEnabled; // @synthesize eventManagementEnabled=_eventManagementEnabled;
@property(retain, nonatomic) NSArray *elementCache; // @synthesize elementCache=_elementCache;
@property(nonatomic) unsigned long long activeFetchEvents; // @synthesize activeFetchEvents=_activeFetchEvents;
@property(retain, nonatomic) NSMapTable *fetchObservers; // @synthesize fetchObservers=_fetchObservers;
@property(nonatomic) long long fetchPolicy; // @synthesize fetchPolicy=_fetchPolicy;
@property(nonatomic) id <AXElementFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_debugLogElementCache;
- (id)_debugStringForFetchEvents:(unsigned long long)arg1;
- (id)_debugStringForPolicy:(long long)arg1;
- (_Bool)_fetchGroups:(_Bool)arg1;
- (id)_filterGroup:(id)arg1 withFilter:(id)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(int)arg2 label:(id)arg3 currentPid:(int)arg4;
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2;
- (void)updateKeyboardGroup:(id)arg1;
- (id)findGroupableMatchingBlock:(id)arg1;
- (id)_findGroupableMatchingBlock:(id)arg1 inElementGroup:(void)arg2;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(_Bool *)arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(_Bool *)arg2;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(_Bool)arg2 didWrap:(_Bool *)arg3;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(_Bool *)arg2;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(_Bool *)arg2;
- (id)lastElement;
- (id)firstElement;
- (id)closestElementToPoint:(struct CGPoint)arg1;
- (id)closestElementToElement:(id)arg1;
- (id)_findElementsMatchingBlock:(id)arg1 internalRequest:(void)arg2;
- (id)findElementsMatchingBlock:(id)arg1;
- (id)findElementMatchingBlock:(id)arg1;
- (id)findElementMatchingElement:(id)arg1;
- (id)_filterElements:(id)arg1 withFilter:(id)arg2;
- (void)removeAllPostFetchFilters;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (void)addPostFetchFilter:(id)arg1 withIdentifier:(void)arg2;
- (id)_fetchFirstElements;
- (id)_fetchVisibleElements;
- (_Bool)_fetchElements:(_Bool)arg1;
- (void)_sendFakeScreenChangeIfNecessaryForGroup:(id)arg1 orElements:(id)arg2 appDidChange:(_Bool)arg3;
- (_Bool)_shouldConsiderCacheAsInvalid;
- (void)disableEventManagement;
- (void)enableEventManagement;
- (id)_axNotificationsForManagedEvents;
- (_Bool)_fetchEventCanBeManaged:(unsigned long long)arg1;
- (long long)_priorityForFetchEvent:(unsigned long long)arg1;
- (double)_delayForFetchEvent:(unsigned long long)arg1;
- (void)_scheduleFetchEvent:(unsigned long long)arg1;
- (void)_tearDownEventCoalesceTimer;
- (void)_fetchEventOccurred:(unsigned long long)arg1;
- (void)fetchEventOccurred:(unsigned long long)arg1;
- (void)refresh;
- (void)removeFetchEvents:(unsigned long long)arg1;
- (void)addFetchEvents:(unsigned long long)arg1;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned long long)arg1;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned long long)arg1 foundNewElements:(_Bool)arg2;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned long long)arg1;
- (void)unregisterAllFetchObservers;
- (void)unregisterFetchObserver:(id)arg1;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
@property(readonly, nonatomic) AXElementGroup *lastKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *firstKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *keyboardGroup;
@property(readonly, nonatomic) AXElementGroup *rootGroup;
@property(readonly, nonatomic) NSArray *availableElements;
@property(readonly, nonatomic) _Bool willFetchElements;
- (_Bool)_updateCurrentApp;
- (id)description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned long long)arg2 fetchPolicy:(long long)arg3 enableEventManagement:(_Bool)arg4 enableGrouping:(_Bool)arg5 beginEnabled:(_Bool)arg6;

@end

