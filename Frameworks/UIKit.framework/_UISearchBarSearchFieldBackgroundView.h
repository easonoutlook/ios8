/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UITextFieldRoundedRectBackgroundViewNeue.h>

// Not exported
@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue
{
    _Bool _backgroundContainer;
    long long _barStyle;
    unsigned long long _searchBarStyle;
}

@property(nonatomic) _Bool backgroundContainer; // @synthesize backgroundContainer=_backgroundContainer;
@property(nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
- (void)updateView;
- (id)_fillColor:(_Bool)arg1;
- (id)_strokeColor:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2 updateView:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;

@end

