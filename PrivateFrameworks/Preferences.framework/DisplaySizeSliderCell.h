/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSSliderTableCell.h>

@class UILabel;

@interface DisplaySizeSliderCell : PSSliderTableCell
{
    UILabel *_smallSizeLabel;
    UILabel *_largeSizeLabel;
    UILabel *_largestSizeLabel;
}

- (void)layoutSubviews;
- (id)newControl;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

