/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "RUIPageAccessory-Protocol.h"

@class GKButton, GKLabel, NSArray, NSDictionary;

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory>
{
    int _layoutStyle;
    id <GKRemoteUIAuxiliaryViewDelegate> _delegate;
    double _height;
    GKLabel *_label;
    GKLabel *_subLabel;
    GKButton *_button;
    NSDictionary *_attributes;
    NSArray *_replaceableConstraints;
}

@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) GKButton *button; // @synthesize button=_button;
@property(retain, nonatomic) GKLabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) GKLabel *label; // @synthesize label=_label;
@property(nonatomic) double height; // @synthesize height=_height;
- (void)objectModelDidChange:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)applyConstraints;
- (double)labelBaselineToButtonBaselineOffset;
- (double)labelBaselineToSubLabelTopOffset;
- (double)labelTopOffset;
- (double)bottomMargin;
- (double)rightMargin;
- (double)leftMargin;
- (double)labelBaselineOffset;
- (void)createSubLabelWithAttributes:(id)arg1;
- (void)createLabelWithAttributes:(id)arg1;
- (void)createButtonWithAttributes:(id)arg1;
@property(nonatomic) id <GKRemoteUIAuxiliaryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;

@end

