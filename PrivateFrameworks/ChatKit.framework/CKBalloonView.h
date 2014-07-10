/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKBalloonImageView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CKManualUpdater, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface CKBalloonView : CKBalloonImageView <UIGestureRecognizerDelegate>
{
    BOOL _orientation;
    _Bool _hasTail;
    _Bool _filled;
    _Bool _showingMenu;
    _Bool _canUseOpaqueMask;
    _Bool _hasOverlay;
    _Bool _wantsSkinnyMask;
    id <CKBalloonViewDelegate> _delegate;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    unsigned long long _balloonCorners;
    CKManualUpdater *_displayUpdater;
    CKBalloonImageView *_overlay;
    struct UIEdgeInsets _textAlignmentInsets;
}

@property(retain, nonatomic) CKBalloonImageView *overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) CKManualUpdater *displayUpdater; // @synthesize displayUpdater=_displayUpdater;
@property(nonatomic) unsigned long long balloonCorners; // @synthesize balloonCorners=_balloonCorners;
@property(nonatomic) _Bool wantsSkinnyMask; // @synthesize wantsSkinnyMask=_wantsSkinnyMask;
@property(nonatomic) _Bool hasOverlay; // @synthesize hasOverlay=_hasOverlay;
@property(nonatomic) _Bool canUseOpaqueMask; // @synthesize canUseOpaqueMask=_canUseOpaqueMask;
@property(nonatomic, getter=isShowingMenu) _Bool showingMenu; // @synthesize showingMenu=_showingMenu;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
@property(nonatomic, getter=isFilled) _Bool filled; // @synthesize filled=_filled;
@property(nonatomic) _Bool hasTail; // @synthesize hasTail=_hasTail;
@property(nonatomic) BOOL orientation; // @synthesize orientation=_orientation;
@property(nonatomic) id <CKBalloonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)export:(id)arg1;
- (void)copy:(id)arg1;
- (void)sendAsTextMessage:(id)arg1;
- (void)more:(id)arg1;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;
- (void)showMenu;
- (void)longPressGestureRecognized:(id)arg1;
- (void)doubleTapGestureRecognized:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)setHasOverlay:(_Bool)arg1 autoDismiss:(_Bool)arg2;
- (void)_dismissOverlay;
@property(readonly, nonatomic) UIColor *overlayColor;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)setNeedsPrepareForDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)description;
- (void)dealloc;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;

@end
