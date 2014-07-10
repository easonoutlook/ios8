/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "PUPhotoEditLayoutStaticAdaptable-Protocol.h"

@class NSArray, UIButton, _UIBackdropView;

@interface PUPhotoEditToolbar : UIView <PUPhotoEditLayoutStaticAdaptable>
{
    UIView *_mainToolbarContainer;
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    NSArray *_basicViewsConstraints;
    NSArray *_mainActionButtonConstraints;
    NSArray *_secondaryActionButtonConstraints;
    NSArray *_toolButtonsConstraints;
    _Bool _useTranslucentBackground;
    long long _layoutOrientation;
    NSArray *_toolButtons;
    UIButton *_mainActionButton;
    UIButton *_secondaryActionButton;
    double _longSideMargin;
}

@property(nonatomic) double longSideMargin; // @synthesize longSideMargin=_longSideMargin;
@property(nonatomic) _Bool useTranslucentBackground; // @synthesize useTranslucentBackground=_useTranslucentBackground;
@property(retain, nonatomic) UIButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
@property(retain, nonatomic) UIButton *mainActionButton; // @synthesize mainActionButton=_mainActionButton;
@property(copy, nonatomic) NSArray *toolButtons; // @synthesize toolButtons=_toolButtons;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void).cxx_destruct;
- (void)_updateBackgroundAnimated:(_Bool)arg1;
- (void)updateConstraints;
- (void)setUseTranslucentBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

