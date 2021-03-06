/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionReusableView.h"

@class NSLayoutConstraint, UIView;

@interface GKSectionSeparatorView : UICollectionReusableView
{
    double _separatorOffset;
    UIView *_underlineView;
    NSLayoutConstraint *_underlineYConstraint;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *underlineYConstraint; // @synthesize underlineYConstraint=_underlineYConstraint;
@property(retain, nonatomic) UIView *underlineView; // @synthesize underlineView=_underlineView;
@property(nonatomic) double separatorOffset; // @synthesize separatorOffset=_separatorOffset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

