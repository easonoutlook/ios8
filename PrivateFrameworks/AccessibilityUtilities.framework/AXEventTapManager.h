/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSRecursiveLock;

@interface AXEventTapManager : NSObject
{
    NSMutableArray *_eventTaps;
    NSMutableArray *_addedEventTapPairs;
    NSMutableSet *_removedEventTapIdentifiers;
    _Bool _isEnumeratingEventTaps;
    _Bool _shouldReorderEventTaps;
    id _installationGSCallback;
    id _installationHIDCallback;
    NSRecursiveLock *_eventTapLock;
    struct __IOHIDEventSystemClient *_ioSystemPostBackClient;
    id _installationEventRepPost;
}

+ (id)sharedManager;
@property(copy, nonatomic) id installationEventRepPost; // @synthesize installationEventRepPost=_installationEventRepPost;
@property(copy, nonatomic) id installationHIDCallback; // @synthesize installationHIDCallback=_installationHIDCallback;
@property(copy, nonatomic) id installationGSCallback; // @synthesize installationGSCallback=_installationGSCallback;
- (void)_removeHIDEventTapFilter:(id)arg1;
- (void)removeEventTap:(id)arg1;
- (id)installEventTap:(id)arg1 identifier:(void)arg2 type:(id)arg3;
- (void)_installSystemEventTap:(id)arg1;
- (void)_installHIDFilter:(id)arg1;
- (void)_installEventTap:(id)arg1;
- (void)_setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)_reorderEventTaps;
- (_Bool)_processGSEvent:(CDStruct_7f3c0925 *)arg1;
- (_Bool)_processHIDEvent:(struct __IOHIDEvent *)arg1 taskPort:(unsigned int)arg2 bundleId:(id)arg3;
- (void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(_Bool)arg3 namedTaps:(id)arg4;
- (void)sendHIDSystemEvent:(id)arg1 senderID:(unsigned long long)arg2;
- (void)_enumerateEventTapPairsUsingBlock:(id)arg1;
- (id)_copyCurrentEventTapPairs;
- (void)_setHIDEventTapCallback:(void *)arg1;
- (void)_setGSEventTapCallback:(void *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
