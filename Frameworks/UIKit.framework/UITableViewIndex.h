/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class NSArray, NSString, UIColor, UIFont;

// Not exported
@interface UITableViewIndex : UIControl
{
    NSArray *_titles;
    UIFont *_font;
    long long _selectedSection;
    _Bool _pastTop;
    _Bool _pastBottom;
    struct CGSize _cachedSize;
    struct CGSize _cachedSizeToFit;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
    UIColor *_indexTrackingBackgroundColor;
    double _topPadding;
    double _bottomPadding;
    double _verticalTextHeightEstimate;
    NSArray *_entries;
}

@property(readonly, nonatomic) _Bool pastBottom; // @synthesize pastBottom=_pastBottom;
@property(readonly, nonatomic) _Bool pastTop; // @synthesize pastTop=_pastTop;
@property(readonly, nonatomic) long long selectedSection; // @synthesize selectedSection=_selectedSection;
- (id)_externalDotImage;
- (id)_dotImage;
- (void)tintColorDidChange;
@property(retain, nonatomic) UIColor *indexBackgroundColor;
@property(retain, nonatomic) UIColor *indexTrackingBackgroundColor;
@property(retain, nonatomic) UIColor *indexColor;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_selectSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)_visibleBoundsForRect:(struct CGRect)arg1 stride:(double *)arg2;
- (unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1;
@property(readonly, nonatomic) NSString *selectedSectionTitle;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) NSArray *titles;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_cacheAndMeasureTitles;
- (id)_displayTitles;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (double)_minLineSpacingForIdiom:(long long)arg1;
- (id)_fontForIdiom:(long long)arg1;
- (long long)_idiom;

@end

