/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@interface SBUISizeObservingView : UIView
{
    _Bool _delegateInterestedInSizeChanges;
    id <SBUISizeObservingViewDelegate> _delegate;
}

@property(nonatomic) id <SBUISizeObservingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

