/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImage, UIImageView, _UIBackdropView;

@interface TPWallpaperView : UIView
{
    _Bool _blursBackground;
    _Bool _hidesContactImage;
    _Bool _shouldLockContactImage;
    _Bool _shouldBindBlurringWithPresenceOfContactImage;
    UIImage *_contactImage;
    double _blurProportion;
    UIImageView *_contactImageView;
    _UIBackdropView *_backdropEffectView;
}

@property(retain) _UIBackdropView *backdropEffectView; // @synthesize backdropEffectView=_backdropEffectView;
@property(retain) UIImageView *contactImageView; // @synthesize contactImageView=_contactImageView;
@property(nonatomic) _Bool shouldBindBlurringWithPresenceOfContactImage; // @synthesize shouldBindBlurringWithPresenceOfContactImage=_shouldBindBlurringWithPresenceOfContactImage;
@property _Bool shouldLockContactImage; // @synthesize shouldLockContactImage=_shouldLockContactImage;
@property(nonatomic) _Bool hidesContactImage; // @synthesize hidesContactImage=_hidesContactImage;
@property(nonatomic) double blurProportion; // @synthesize blurProportion=_blurProportion;
@property(nonatomic) _Bool blursBackground; // @synthesize blursBackground=_blursBackground;
@property(retain, nonatomic) UIImage *contactImage; // @synthesize contactImage=_contactImage;
- (void)updateBindBlurringWithPresenceOfContactImage;
- (void)setContactImage:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

