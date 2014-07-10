/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSKChangeSourceObserver-Protocol.h"

@class TSDKeyboardMovementManipulator;

// Not exported
@interface TSDCanvasEditorHelper : NSObject <TSKChangeSourceObserver>
{
    id <TSDCanvasEditor> mCanvasEditor;
    _Bool mTornDown;
    TSDKeyboardMovementManipulator *mKeyboardManipulator;
}

+ (_Bool)physicalKeyboardIsSender:(id)arg1;
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (id)canvasSelectionWithInfos:(id)arg1;
+ (Class)selectionClass;
- (void)insertFloatingComment;
- (void)deleteComment:(id)arg1;
- (_Bool)canDeleteComment;
- (void)clearGuides:(id)arg1;
- (void)deleteGuide:(id)arg1;
- (void)pasteUserDefinedGuides:(id)arg1;
- (_Bool)p_canPasteUserDefinedGuides;
- (void)p_copyUserDefinedGuides:(id)arg1;
- (void)copyUserDefinedGuides:(id)arg1;
- (_Bool)p_canCopyUserDefinedGuides;
- (void)arrowKeyReceivedInDirection:(int)arg1 withModifierKeys:(int)arg2;
- (struct CGPoint)p_offsetToMoveLayout:(id)arg1 edge:(int)arg2 toOffset:(double)arg3;
- (struct CGPoint)p_offsetToMoveCenterOfLayout:(id)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGRect)p_boundingBoxForLayouts:(id)arg1;
- (void)didRepositionLayouts:(id)arg1 additionalData:(id *)arg2;
- (void)willRepositionLayouts:(id)arg1 additionalData:(id *)arg2;
- (void)distributeDrawablesEvenly;
- (void)distributeDrawablesByEdge:(int)arg1;
- (void)alignDrawablesByEdge:(int)arg1;
- (id)layoutsForAlignAndDistribute;
- (void)sendToBack:(id)arg1;
- (void)sendBackward:(id)arg1;
- (void)bringForward:(id)arg1;
- (void)bringToFront:(id)arg1;
- (void)reduceDocumentFileSize:(id)arg1;
- (void)reduceFileSizeForSelectedImages:(id)arg1;
- (_Bool)p_canReduceFileSizeForSelectedImages;
- (void)prepareGeometryForInsertingDrawables:(id)arg1 withInsertionContext:(id)arg2;
- (id)commandsToSwapConnectionsFromRep:(id)arg1 toInfo:(id)arg2;
- (id)commandForDeletingDrawablesFromTopLevelContainer:(id)arg1;
- (id)commandForInsertingDrawablesIntoTopLevelContainer:(id)arg1 below:(id)arg2;
- (id)commandForReplacingDrawable:(id)arg1 withDrawable:(id)arg2;
- (id)commandForReplacingImagePlaceholderInSelection:(id)arg1 withDrawables:(id)arg2 withSender:(id)arg3;
- (void)maskImage:(id)arg1 withShapeType:(int)arg2;
- (void)maskImage:(id)arg1 withShape:(id)arg2 shouldOpenGroup:(_Bool)arg3;
- (void)maskWithShapeType:(int)arg1;
- (void)maskWithShape;
- (void)unmask;
- (void)mask;
- (void)selectParent:(id)arg1;
- (_Bool)canGroupDrawables:(id)arg1;
- (void)ungroup:(id)arg1;
- (void)group:(id)arg1;
- (void)unlock:(id)arg1;
- (void)lock:(id)arg1;
- (void)p_setLockStatusOfSelectedDrawables:(_Bool)arg1;
- (void)duplicate:(id)arg1;
- (void)pasteValues:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)p_copy:(id)arg1;
- (void)delete:(id)arg1;
- (void)p_delete:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformSendDrawablesBackwardAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformBringDrawablesForwardAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)p_selectionContainsInlineObjects:(id)arg1;
- (_Bool)canUngroupWithSelection:(id)arg1;
- (int)canvasEditorCanPerformLockAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformMaskWithShapeTypeWithSender:(id)arg1;
- (_Bool)canPerformMaskWithShapeWithSender:(id)arg1;
- (_Bool)canPerformUnmaskWithSender:(id)arg1;
- (_Bool)canPerformMaskWithSender:(id)arg1;
- (int)canvasEditorCanPerformDistributeAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformAlignAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformUngroupAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformGroupAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformSelectAllAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDuplicateAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformPasteValuesAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformPasteAsPlainTextAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformPasteAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCutAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyStyleAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDeleteAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPasteWithSender:(id)arg1 withPasteboard:(id)arg2;
- (id)infosFromCanvasSelection:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (id)canvasSelectionWithInfos:(id)arg1;
- (id)canvasSelectionFromRep:(id)arg1;
- (void)pushNewEditorForSelection:(id)arg1;
- (id)newEditorForEditorClass:(Class)arg1;
- (id)editorToPopToOnEndEditingForSelection:(id)arg1;
- (Class)editorClassForSelection:(id)arg1;
- (Class)editorClassForSelectionIgnoringLockedState:(id)arg1;
- (Class)p_editorClassForSelection:(id)arg1 shouldIgnoreLockedState:(_Bool)arg2;
- (void)notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;
- (_Bool)isRepSelectable:(id)arg1;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)dealloc;
- (void)teardown;
- (id)pasteboardController;
- (id)keyboardMovementManipulator;
- (id)interactiveCanvasController;
- (id)documentRoot;
- (id)canvasEditor;
- (id)initWithCanvasEditor:(id)arg1;

@end

