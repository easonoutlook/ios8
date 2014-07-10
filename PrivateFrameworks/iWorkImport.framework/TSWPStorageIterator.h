/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCharacterSet, NSMutableArray, TSWPStorage;

// Not exported
@interface TSWPStorageIterator : NSObject
{
    TSWPStorage *_storage;
    unsigned long long _charIndex;
    unsigned long long _startCharIndex;
    NSMutableArray *_rangeProviders;
    NSMutableArray *_locationProviders;
    NSMutableArray *_pendingEvents;
    _Bool _sendEventsForNilObjects;
    _Bool _lastEventWasMarker;
    NSCharacterSet *_markers;
}

@property(retain, nonatomic) NSCharacterSet *markers; // @synthesize markers=_markers;
- (id)description;
- (id)nextEvent;
- (void)p_forceRangeEndForProvider:(id)arg1 providerIndex:(unsigned long long)arg2 atCharIndex:(unsigned long long)arg3;
- (void)p_emitEventForMarkerCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;
- (void)p_emitEventWithType:(int)arg1 provider:(id)arg2 range:(struct _NSRange)arg3 object:(id)arg4;
- (void)p_emitPendingCharactersAndEvent:(id)arg1;
- (void)addLocationProvider:(id)arg1;
- (void)addAttributeRangeProvider:(int)arg1;
- (void)addRangeProvider:(id)arg1;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

@end
