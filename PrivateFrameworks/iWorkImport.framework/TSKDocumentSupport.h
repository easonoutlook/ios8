/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

#import "TSKCommandHistoryDelegate-Protocol.h"

@class NSString, TSKCommandHistory, TSKCommandSelectionBehaviorHistory, TSPLazyReference;

// Not exported
@interface TSKDocumentSupport : TSPObject <TSKCommandHistoryDelegate>
{
    TSPLazyReference *_commandHistoryReference;
    TSPLazyReference *_commandSelectionBehaviorHistoryReference;
    TSPObject *_webState;
    unsigned long long _cachedUndoCount;
    unsigned long long _cachedRedoCount;
    NSString *_cachedUndoActionString;
    NSString *_cachedRedoActionString;
}

@property(readonly, nonatomic) NSString *cachedRedoActionString; // @synthesize cachedRedoActionString=_cachedRedoActionString;
@property(readonly, nonatomic) NSString *cachedUndoActionString; // @synthesize cachedUndoActionString=_cachedUndoActionString;
@property(readonly, nonatomic) unsigned long long cachedRedoCount; // @synthesize cachedRedoCount=_cachedRedoCount;
@property(readonly, nonatomic) unsigned long long cachedUndoCount; // @synthesize cachedUndoCount=_cachedUndoCount;
@property(retain, nonatomic) TSPObject *webState; // @synthesize webState=_webState;
- (void)commandHistoryChanged:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)documentWasSaved;
@property(readonly, nonatomic) _Bool isDocumentEditedSinceLastSave;
- (void)clearCommandHistory;
@property(readonly, nonatomic) _Bool hasCommands;
- (id)newCommandSelectionBehaviorHistoryReference;
@property(readonly, nonatomic) TSKCommandSelectionBehaviorHistory *commandSelectionBehaviorHistory;
- (void)didLoadCommandHistory:(id)arg1;
- (id)newCommandHistoryReference;
@property(readonly, nonatomic) TSKCommandHistory *commandHistory;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

