/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class MCDButton;

@interface MCDPlayModeControlView : UIView
{
    _Bool _creatingGenius;
    MCDButton *_repeatButton;
    MCDButton *_geniusButton;
    MCDButton *_shuffleButton;
}

@property(nonatomic) _Bool creatingGenius; // @synthesize creatingGenius=_creatingGenius;
@property(readonly, nonatomic) MCDButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(readonly, nonatomic) MCDButton *geniusButton; // @synthesize geniusButton=_geniusButton;
@property(readonly, nonatomic) MCDButton *repeatButton; // @synthesize repeatButton=_repeatButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

