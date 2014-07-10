/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

#import "TSDPropagatableCommand-Protocol.h"

@class NSMutableSet, NSSet, TSSPropertyMap, TSSStyle;

// Not exported
@interface TSSStyleUpdatePropertyMapCommand : TSKCommand <TSDPropagatableCommand>
{
    TSSStyle *mStyle;
    TSSPropertyMap *mOldPropertyMap;
    TSSPropertyMap *mNewPropertyMap;
    NSMutableSet *mObjectsUsingStyle;
    _Bool mNotifyForStyleClients;
}

@property(nonatomic) _Bool notifyForStyleClients; // @synthesize notifyForStyleClients=mNotifyForStyleClients;
@property(readonly, nonatomic) TSSPropertyMap *newPropertyMap; // @synthesize newPropertyMap=mNewPropertyMap;
@property(readonly, nonatomic) TSSPropertyMap *oldPropertyMap; // @synthesize oldPropertyMap=mOldPropertyMap;
@property(readonly, nonatomic) TSSStyle *style; // @synthesize style=mStyle;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_setPropertyMap:(id)arg1;
@property(readonly, nonatomic) NSSet *objectsUsingStyle;
- (_Bool)process;
- (void)saveToArchive:(struct StyleUpdatePropertyMapCommandArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct StyleUpdatePropertyMapCommandArchive *)arg1 unarchiver:(id)arg2;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (void)p_tssStyleUpdatePropertyMapCommandUnload;
- (id)initWithContext:(id)arg1 style:(id)arg2 propertyMap:(id)arg3;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (_Bool)modifiesAnyObjectPassingTest:(id)arg1;

@end

