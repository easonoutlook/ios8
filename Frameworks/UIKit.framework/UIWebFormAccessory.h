/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIInputView.h>

@class UIBarButtonItem, UISegmentedControl, UIToolbar;

@interface UIWebFormAccessory : UIInputView
{
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_flexibleSpaceItem;
    UIBarButtonItem *_previousItem;
    UIBarButtonItem *_nextItem;
    UISegmentedControl *_tab;
    UIBarButtonItem *_autofill;
    UIBarButtonItem *_clearButton;
    id <UIWebFormAccessoryDelegate> delegate;
}

+ (id)toolbarWithItems:(id)arg1;
@property(nonatomic) id <UIWebFormAccessoryDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIBarButtonItem *_clearButton; // @synthesize _clearButton;
@property(retain, nonatomic) UIBarButtonItem *_autofill; // @synthesize _autofill;
@property(retain, nonatomic) UISegmentedControl *_tab; // @synthesize _tab;
@property(nonatomic, getter=isPreviousEnabled) _Bool previousEnabled;
@property(nonatomic, getter=isNextEnabled) _Bool nextEnabled;
- (void)setClearVisible:(_Bool)arg1;
- (void)showAutoFillButton;
- (void)showAutoFillButtonWithTitle:(id)arg1;
- (void)hideAutoFillButton;
- (void)_applyTreatmentToAutoFillLabel;
- (void)_refreshAutofillPresentation;
- (id)_autoFillButton;
- (void)clear:(id)arg1;
- (void)autoFill:(id)arg1;
- (void)_nextTapped:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)_tabSegmentedControlDidChange:(id)arg1;
- (void)done:(id)arg1;
- (void)layoutSubviews;
- (void)_updateFrame;
- (void)_orientationDidChange:(id)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

