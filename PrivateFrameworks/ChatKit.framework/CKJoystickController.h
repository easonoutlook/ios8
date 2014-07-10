/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKJoystickButtonItem, CKJoystickView, NSArray, UIColor;

@interface CKJoystickController : NSObject
{
    _Bool _autoDismiss;
    unsigned long long _highlightStyle;
    NSArray *_passthroughViews;
    id <CKJoystickControllerDelegate> _delegate;
    CKJoystickView *_joystickView;
}

+ (double)joystickExpandedRadius;
+ (double)joystickRadius;
+ (double)joystickExpandAnimationDuration;
+ (id)sharedJoystickOverlay;
@property(retain, nonatomic) CKJoystickView *joystickView; // @synthesize joystickView=_joystickView;
@property(nonatomic) _Bool autoDismiss; // @synthesize autoDismiss=_autoDismiss;
@property(nonatomic) id <CKJoystickControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(readonly, nonatomic) unsigned long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
- (struct CGRect)convertJoystickFrameToView:(id)arg1;
- (void)dismissJoystickAnimated:(_Bool)arg1;
- (void)presentJoystickFromPoint:(struct CGPoint)arg1 inView:(id)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic, getter=isJoystickVisible) _Bool joystickVisible;
@property(nonatomic) CKJoystickButtonItem *highlightedButtonItem;
@property(retain, nonatomic) UIColor *tintColor;
- (void)setRadialButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)setCenterButtonItem:(id)arg1 animated:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSArray *radialButtonItems;
@property(readonly, retain, nonatomic) CKJoystickButtonItem *centerButtonItem;
- (id)initWithCenterButtonItem:(id)arg1 radialButtonItems:(id)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5 highlightStyle:(unsigned long long)arg6;
- (void)dealloc;

@end

