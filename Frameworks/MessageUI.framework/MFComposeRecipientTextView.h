/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFComposeHeaderView.h>

#import "MFComposeRecipientAtomDelegate-Protocol.h"
#import "MFMultiDragDestination-Protocol.h"
#import "MFMultiDragSource-Protocol.h"
#import "NSLayoutManagerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIButton, UIColor, UIFont, UITextView, UIView, _MFAtomTextAttachment, _MFAtomTextView;

@interface MFComposeRecipientTextView : MFComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, MFMultiDragSource, MFMultiDragDestination, MFComposeRecipientAtomDelegate>
{
    _MFAtomTextView *_textView;
    UITextView *_inactiveTextView;
    UIView *_atomContainerView;
    NSMutableArray *_atomViews;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    NSMutableDictionary *_atomLayoutOptionsByRecipient;
    long long _atomViewAnimationDepth;
    struct _NSRange _dragSourceRange;
    id <MFDraggableItem> _pivotItem;
    _Bool _parentIsClosing;
    _Bool _textViewExclusionPathsAreValid;
    NSTimer *_inputDelayTimer;
    NSTimer *_collapsableUpdateTimer;
    NSArray *_properties;
    NSMutableArray *_recipientsBeingRemoved;
    _Bool _editable;
    _Bool _allowsDragAndDrop;
    _Bool _separatorHidden;
    _Bool _focused;
    _Bool _hasUnsafeRecipients;
    _Bool _didIgnoreFirstResponderResign;
    int _hideLastAtomComma;
    UIFont *_baseFont;
    long long _maxRecipients;
    double _inputDelay;
    UIButton *_addButton;
    UIColor *_inactiveTextColor;
    _MFAtomTextAttachment *_placeholderAttachment;
}

+ (id)defaultFont;
@property(retain, nonatomic) _MFAtomTextAttachment *placeholderAttachment; // @synthesize placeholderAttachment=_placeholderAttachment;
@property(nonatomic) int hideLastAtomComma; // @synthesize hideLastAtomComma=_hideLastAtomComma;
@property(retain, nonatomic) UIColor *inactiveTextColor; // @synthesize inactiveTextColor=_inactiveTextColor;
@property(readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) double inputDelay; // @synthesize inputDelay=_inputDelay;
@property(nonatomic) long long maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property(readonly, nonatomic) _Bool didIgnoreFirstResponderResign; // @synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign;
@property(nonatomic) _Bool hasUnsafeRecipients; // @synthesize hasUnsafeRecipients=_hasUnsafeRecipients;
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(nonatomic) _Bool allowsDragAndDrop; // @synthesize allowsDragAndDrop=_allowsDragAndDrop;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(readonly, nonatomic) UIView *atomContainerView; // @synthesize atomContainerView=_atomContainerView;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (id)supportedDropTypes:(id)arg1;
- (struct CGRect)frameForDroppedItem:(id)arg1;
- (id)destinationViewForDrop;
- (void)dropItems:(id)arg1;
- (void)willDropItems:(id)arg1;
- (void)dragExitedWithItems:(id)arg1;
- (void)dragMovedToPoint:(struct CGPoint)arg1 withItems:(id)arg2;
- (void)dragEnteredAtPoint:(struct CGPoint)arg1 withItems:(id)arg2;
- (id)viewForDragSource;
- (void)dragCompletedWithItems:(id)arg1 success:(_Bool)arg2;
- (void)animatePlaceholderForDragFailureWithItems:(id)arg1;
- (void)dragStartedWithItems:(id)arg1;
- (id)viewForDraggedItem:(id)arg1 atScale:(double)arg2;
- (struct CGRect)frameForDraggedItem:(id)arg1 isPivotView:(out _Bool *)arg2;
- (id)itemsForDragAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldCollapseMultipleItems;
- (_Bool)allowsDrag;
- (struct _NSRange)_placeholderAttachmentRange;
- (id)_placeholderAttachmentForRecipient:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2;
- (void)atomTextViewDidResignFirstResponder:(id)arg1;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)_notifyDelegateOfTextChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)atomViewsInRange:(struct _NSRange)arg1;
- (id)atomViewForRecipient:(id)arg1;
- (void)_removeAddressAtomSubview:(id)arg1;
- (void)_addAddressAtomSubview:(id)arg1;
- (void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(struct _NSRange)arg2;
- (void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;
- (id)_atomAttachmentForRecipient:(id)arg1;
- (_Bool)_canAddAdditionalAtoms;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_setAddButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_isAddButtonVisible;
- (void)_setTextViewIsCollapsed:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_isTextViewCollapsed;
- (void)_updateInactiveTextView;
- (_Bool)_textViewContainsAtomizedRecipients;
- (void)_resetSelectionState;
- (_Bool)_shouldAnimateAtomViewChanges;
- (void)_beginAtomViewAnimations;
- (id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2;
- (void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3;
- (id)_atomViewAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)_rangeForComposeRecipientAtom:(id)arg1;
- (void)_invalidateTextContainerExclusionPaths;
- (void)_recomputeTextContainerExclusionPaths;
- (id)_textContainerExclusionPathsWithAddButton:(_Bool)arg1;
- (struct UIEdgeInsets)_recipientViewEdgeInsets;
- (id)_baseAttributes;
- (void)reflow;
- (_Bool)_useRightToLeftLayout;
- (_Bool)becomeFirstResponder;
- (_Bool)finishEnteringRecipient;
- (void)parentDidClose;
- (void)parentWillClose;
- (void)invalidateAtomPresentationOptionsForRecipient:(id)arg1;
- (void)invalidateAtomPresentationOptions;
- (void)clearText;
- (void)setLabel:(id)arg1;
- (void)_invalidateAtomPresentationOptionsCache;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2;
- (void)setProperties:(id)arg1;
- (void)setProperty:(int)arg1;
- (_Bool)hasContent;
@property(retain, nonatomic) UIFont *baseFont; // @synthesize baseFont=_baseFont;
@property(readonly, nonatomic) unsigned long long numberOfRowsOfTextInField;
@property(readonly, nonatomic) double offsetForRowWithTextField;
@property(readonly, nonatomic) UITextView *textView;
@property(readonly, nonatomic) NSString *text;
- (id)_userEnteredTextWithRange:(struct _NSRange *)arg1;
- (_Bool)_hasUnsafeRecipients;
- (void)setEditable:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSArray *uncommentedAddresses;
@property(copy, nonatomic) NSArray *addresses;
@property(nonatomic) id <MFComposeRecipientTextViewDelegate> delegate;
- (void)_addButtonTapped:(id)arg1;
- (_Bool)containsAddress:(id)arg1;
- (void)addAddress:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)_didRemoveRecipient:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(_Bool)arg3;
- (void)addRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)_addRecord:(void *)arg1 identifier:(int)arg2;
- (void)addRecipient:(id)arg1;
@property(copy, nonatomic) NSArray *recipients;
- (void)_removeAllRecipients;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)refreshPreferredContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

