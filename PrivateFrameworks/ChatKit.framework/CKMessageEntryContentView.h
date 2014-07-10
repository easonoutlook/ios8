/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIScrollView.h"

#import "UITextViewDelegate-Protocol.h"

@class CKComposition, CKMessageEntryRichTextView, CKMessageEntryTextView, NSString, UIView;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate>
{
    _Bool _shouldShowSubject;
    _Bool _shouldShowCharacterCount;
    _Bool _needsTextLayout;
    _Bool _needsEnsureSelectionVisible;
    _Bool _ignoreEndEditing;
    CKComposition *_composition;
    CKMessageEntryTextView *_subjectView;
    CKMessageEntryRichTextView *_textView;
    UIView *_activeView;
    double _placeholderHeight;
    UIView *_dividerLine;
    struct UIEdgeInsets _textAlignmentInsets;
    struct UIEdgeInsets _subjectAlignmentInsets;
}

@property(nonatomic) _Bool ignoreEndEditing; // @synthesize ignoreEndEditing=_ignoreEndEditing;
@property(nonatomic) _Bool needsEnsureSelectionVisible; // @synthesize needsEnsureSelectionVisible=_needsEnsureSelectionVisible;
@property(nonatomic) _Bool needsTextLayout; // @synthesize needsTextLayout=_needsTextLayout;
@property(retain, nonatomic) UIView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(nonatomic) struct UIEdgeInsets subjectAlignmentInsets; // @synthesize subjectAlignmentInsets=_subjectAlignmentInsets;
@property(nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
@property(nonatomic) double placeholderHeight; // @synthesize placeholderHeight=_placeholderHeight;
@property(nonatomic) UIView *activeView; // @synthesize activeView=_activeView;
@property(retain, nonatomic) CKMessageEntryRichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) CKMessageEntryTextView *subjectView; // @synthesize subjectView=_subjectView;
@property(nonatomic) _Bool shouldShowCharacterCount; // @synthesize shouldShowCharacterCount=_shouldShowCharacterCount;
@property(nonatomic) _Bool shouldShowSubject; // @synthesize shouldShowSubject=_shouldShowSubject;
- (void)invalidateComposition;
- (void)calculateTextMetrics;
- (void)ensureSelectionVisibleIfNeeded;
- (_Bool)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
@property(nonatomic) BOOL balloonColor;
@property(readonly, nonatomic) struct UIEdgeInsets contentTextAlignmentInsets;
@property(readonly, nonatomic, getter=isShowingDictationPlaceholder) _Bool showingDictationPlaceholder;
@property(copy, nonatomic) NSString *placeholderText;
@property(readonly, nonatomic, getter=isSingleLine) _Bool singleLine;
- (_Bool)makeActive;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(retain, nonatomic) CKComposition *composition; // @synthesize composition=_composition;
- (id)initWithFrame:(struct CGRect)arg1 shouldShowSubject:(_Bool)arg2 shouldShowCharacterCount:(_Bool)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

