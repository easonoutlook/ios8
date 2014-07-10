/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

@class TSKCommandContainer, TSKCommandController, TSPObject<TSKPersistentUndoRedoState>;

// Not exported
@interface TSKCommand : TSPObject
{
    TSKCommandContainer *_persistedUndoCollectionContainer;
    TSKCommandContainer *_currentUndoCollectionContainer;
    TSPObject<TSKPersistentUndoRedoState> *_undoRedoState;
    TSKCommandController *_commandController;
}

+ (id)commandFromArrayOfCommands:(id)arg1;
@property(nonatomic) TSKCommandController *commandController; // @synthesize commandController=_commandController;
- (void)dealloc;
- (void)saveToArchive:(struct CommandArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CommandArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isCommandObject;
- (_Bool)canImplicitlyGroupWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)performIndirectCommand:(id)arg1;
- (id)stopCollectingUndo;
- (void)beginCollectingUndo;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (id)actionString;
- (void)redo;
- (void)undo;
- (void)commit;
- (_Bool)process;
- (_Bool)shouldRunSynchronously;
- (id)initWithContext:(id)arg1;
@property(retain, nonatomic) TSPObject<TSKPersistentUndoRedoState> *undoRedoState;

@end

