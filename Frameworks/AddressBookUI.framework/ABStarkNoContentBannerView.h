/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UILabel;

@interface ABStarkNoContentBannerView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *subtitleString;
@property(retain, nonatomic) NSString *titleString;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

