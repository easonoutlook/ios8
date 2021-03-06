/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class CALayer, NSString;

@interface MCDButton : UIButton
{
    CALayer *_focusColorLayer;
    _Bool _showBezelInTouch;
    NSString *_labelTemplateString;
}

+ (id)buttonWithType:(long long)arg1;
@property(nonatomic) _Bool showBezelInTouch; // @synthesize showBezelInTouch=_showBezelInTouch;
@property(copy, nonatomic) NSString *labelTemplateString; // @synthesize labelTemplateString=_labelTemplateString;
- (void).cxx_destruct;
- (void)_updateButtonStyle;
- (void)layoutSubviews;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)willMoveToWindow:(id)arg1;
- (void)_focusStateDidChange;
- (_Bool)_isFocusableElement;

@end

