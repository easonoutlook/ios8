/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol UITextInputAdditions
@property(readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)interactionAssistant;
- (id)textInputView;

@optional
- (_Bool)_useGesturesForEditableContent;
- (id)_textInputViewForAddingGestureRecognizers;
@end
