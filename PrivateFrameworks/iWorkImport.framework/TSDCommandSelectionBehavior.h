/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommandSelectionBehavior.h>

@class NSObject<TSDCanvasEditor>, TSKDocumentRoot, TSKSelection<TSDCanvasSelection>, TSPObject<TSKArchivedSelection>, TSPObject<TSKModel>;

// Not exported
@interface TSDCommandSelectionBehavior : TSKCommandSelectionBehavior
{
    TSPObject<TSKArchivedSelection> *mArchivedOldCanvasSelection;
    TSPObject<TSKArchivedSelection> *mArchivedNewCanvasSelection;
    TSPObject<TSKModel> *mModelForSelection;
    TSPObject<TSKModel> *mOldModelForSelection;
    TSKDocumentRoot *mDocumentRootForSelection;
    int mType;
    NSObject<TSDCanvasEditor> *mCanvasEditor;
    unsigned long long mSelectionFlags;
}

@property(readonly, nonatomic) NSObject<TSDCanvasEditor> *canvasEditor; // @synthesize canvasEditor=mCanvasEditor;
@property(readonly, nonatomic) TSPObject<TSKModel> *oldModelForSelection;
@property(readonly, nonatomic) TSPObject<TSKModel> *modelForSelection;
- (void)p_registerSelectionInvalidation:(id)arg1;
- (void)p_adjustCommentVisibilityWhenNecessary;
- (void)p_registerSelectionChange:(id)arg1 forModel:(id)arg2 withSelectionFlags:(unsigned long long)arg3;
@property(readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelectionForRedo;
- (void)registerSelectionChangesForRedo;
@property(readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelectionForUndo;
- (void)registerSelectionChangesForUndo;
- (id)destructiveSelectionChangeForSelection:(id)arg1;
@property(readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelectionForCommit;
- (void)registerSelectionChangesForCommit;
- (void)dealloc;
- (id)initWithCanvasEditor:(id)arg1;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 newModel:(id)arg3 constructedInfos:(id)arg4;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 constructedInfos:(id)arg3;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 canvasSelection:(id)arg3;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 canvasSelection:(id)arg3 selectionFlags:(unsigned long long)arg4;
- (void)saveToArchive:(struct CommandSelectionBehaviorArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CommandSelectionBehaviorArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end

