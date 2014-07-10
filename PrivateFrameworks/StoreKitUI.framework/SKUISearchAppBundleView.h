/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, NSString, UILabel;

@interface SKUISearchAppBundleView : UIView
{
    NSArray *_imageViews;
    NSArray *_labels;
    UILabel *_headerLabel;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)_reload;
- (void)layoutSubviews;
- (id)titleAtIndex:(long long)arg1;
- (void)setTitle:(id)arg1 atIndex:(long long)arg2;
- (id)imageAtIndex:(long long)arg1;
- (void)setImage:(id)arg1 atIndex:(long long)arg2;
@property(copy, nonatomic) NSString *headerTitle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

