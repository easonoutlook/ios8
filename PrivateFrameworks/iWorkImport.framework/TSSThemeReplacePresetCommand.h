/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

#import "TSDPropagatableCommand-Protocol.h"

@class NSString, TSPObject<TSSPreset>, TSSTheme;

// Not exported
@interface TSSThemeReplacePresetCommand : TSKCommand <TSDPropagatableCommand>
{
    TSSTheme *mTheme;
    NSString *mPresetKind;
    TSPObject<TSSPreset> *mPreset;
    TSPObject<TSSPreset> *mOldPreset;
    unsigned long long mIndex;
}

@property(readonly) TSPObject<TSSPreset> *oldPreset; // @synthesize oldPreset=mOldPreset;
@property(readonly) TSPObject<TSSPreset> *preset; // @synthesize preset=mPreset;
@property(readonly) TSSTheme *theme; // @synthesize theme=mTheme;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_installPreset:(id)arg1;
- (_Bool)process;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 preset:(id)arg2 index:(unsigned long long)arg3 context:(id)arg4;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (_Bool)modifiesAnyObjectPassingTest:(id)arg1;

@end

