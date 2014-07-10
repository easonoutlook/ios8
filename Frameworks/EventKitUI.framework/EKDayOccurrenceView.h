/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "EKDayOccurrenceTravelTimeViewMetricsDelegate-Protocol.h"
#import "NSCopying-Protocol.h"

@class EKDayOccurrenceContentView, EKDayOccurrenceTravelTimeView, EKEvent, NSString, UIColor, UIImageView;

@interface EKDayOccurrenceView : UIView <NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate>
{
    double _visibleHeight;
    UIImageView *_eventBackgroundView;
    UIImageView *_travelBackgroundView;
    UIImageView *_eventBackgroundViewWithoutBar;
    EKDayOccurrenceContentView *_content;
    EKDayOccurrenceTravelTimeView *_travelTimeContentView;
    _Bool _needsContentCalc;
    _Bool _needsBackgroundImageUpdate;
    UIView *_startResizeHandle;
    UIView *_endResizeHandle;
    double _originalXBeforeOffset;
    unsigned int _touchKeptInsideOccurrence:1;
    unsigned int _offsetContentForLandscape:1;
    _Bool _visibleHeightLocked;
    struct UIEdgeInsets _padding;
    struct CGRect _unpinnedBackgroundFrame;
    UIView *_pinFadeView;
    double _travelTimeSubviewHeightInPoints;
    _Bool _selected;
    _Bool _dimmed;
    _Bool _allDayDrawingStyle;
    _Bool _drawsResizeHandles;
    _Bool _hideBackgroundImage;
    _Bool _hideText;
    _Bool _isSelectedCopyView;
    _Bool _tentative;
    _Bool _declined;
    _Bool _needsReply;
    _Bool _allDay;
    _Bool _showsTravelTime;
    _Bool _reduceLayoutProcessingForAnimation;
    _Bool _pinnedToBottom;
    int _occurrenceBackgroundStyle;
    id _delegate;
    EKEvent *_occurrence;
    UIColor *_color;
    double _cappedColorBarHeight;
    double _travelTime;
    struct UIEdgeInsets _margin;
}

+ (struct UIEdgeInsets)defaultPadding;
+ (struct UIEdgeInsets)defaultMargin;
+ (double)barToBarHorizontalDistanceIncludingBarWidth;
+ (double)colorBarThickness;
+ (double)barToBarGapWidth;
+ (id)_adjustedStripeColorForDarkBackground:(id)arg1;
+ (id)_adjustedOccurrenceColorForDarkBackground:(id)arg1 opaque:(_Bool)arg2;
+ (id)_lightStripeColorForColor:(id)arg1;
+ (id)_lightColorForColor:(id)arg1 opaque:(_Bool)arg2;
+ (id)_color:(id)arg1 lightenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3;
+ (id)_cachedImageForCalendarColor:(id)arg1 selected:(_Bool)arg2 declined:(_Bool)arg3 cancelled:(_Bool)arg4 tentative:(_Bool)arg5 needsReply:(_Bool)arg6 colorBarStyle:(long long)arg7 dayViewBackgroundStyle:(int)arg8;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(double)arg4 colorBarStyle:(long long)arg5;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBarStyle:(long long)arg3;
+ (struct CGRect)contentStretchRectForFrame:(struct CGRect)arg1;
+ (double)bottomShadowMargin;
+ (double)minimumHeightForOrientation:(long long)arg1 isAllDay:(_Bool)arg2 usesSmallText:(_Bool)arg3;
+ (double)minimumHeightForOrientation:(long long)arg1 isAllDay:(_Bool)arg2;
+ (double)minimumHeightForOrientation:(long long)arg1;
+ (id)occurrenceViewWithFrame:(struct CGRect)arg1;
+ (void)clearCaches;
+ (void)_clearViewCache;
+ (id)_viewCache;
@property(nonatomic) _Bool pinnedToBottom; // @synthesize pinnedToBottom=_pinnedToBottom;
@property(nonatomic) _Bool reduceLayoutProcessingForAnimation; // @synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation;
@property(nonatomic) int occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;
@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(nonatomic) _Bool showsTravelTime; // @synthesize showsTravelTime=_showsTravelTime;
@property(nonatomic) double cappedColorBarHeight; // @synthesize cappedColorBarHeight=_cappedColorBarHeight;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(nonatomic) _Bool needsReply; // @synthesize needsReply=_needsReply;
@property(nonatomic, getter=isDeclined) _Bool declined; // @synthesize declined=_declined;
@property(nonatomic, getter=isTentative) _Bool tentative; // @synthesize tentative=_tentative;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool isSelectedCopyView; // @synthesize isSelectedCopyView=_isSelectedCopyView;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) _Bool hideText; // @synthesize hideText=_hideText;
@property(nonatomic) _Bool hideBackgroundImage; // @synthesize hideBackgroundImage=_hideBackgroundImage;
@property(nonatomic) _Bool drawsResizeHandles; // @synthesize drawsResizeHandles=_drawsResizeHandles;
@property(nonatomic) _Bool allDayDrawingStyle; // @synthesize allDayDrawingStyle=_allDayDrawingStyle;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) EKEvent *occurrence; // @synthesize occurrence=_occurrence;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHideText:(_Bool)arg1 animate:(_Bool)arg2;
- (void)_resetContentViewPosition;
- (_Bool)_isTimedOccurrenceDrawingStyle;
- (_Bool)resetContentViewToOriginalState:(_Bool)arg1;
- (void)fadeInContentViewAt:(double)arg1 minWidth:(double)arg2 animated:(_Bool)arg3;
- (double)_verticalContentInset;
- (double)enoughHeightForOneLine;
- (double)viewMaxNaturalTextHeight;
- (double)unconstrainedWidth;
- (void)bringResizeHandlesToFront;
- (id)arrayOfResizeHandles;
- (int)dragTypeFromPoint:(struct CGPoint)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)invalidateTravelTimeHeight;
@property(readonly, nonatomic) double travelTimeSubviewHeightInPoints;
- (struct CGRect)_frameMutatedForProximityToHourLine:(struct CGRect)arg1;
- (id)_timedEventBackgroundColor;
- (id)_backgroundColor;
- (struct CGRect)_computeTravelTimeContentRect;
- (struct CGRect)_computeContentRect;
- (id)_newResizeHandleView;
- (void)animateToFrame:(struct CGRect)arg1 isAllDay:(_Bool)arg2 beginFromCurrentState:(_Bool)arg3 whenFinished:(id)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateResizeHandleLocations;
- (void)setVisibleHeight:(double)arg1;
@property(readonly, nonatomic) _Bool visibleHeightLocked;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)_updateColors;
- (void)setAllDayDrawingStyle:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)hasIcon;
@property(nonatomic, getter=isFacebook) _Bool facebook;
@property(nonatomic, getter=isBirthday) _Bool birthday;
@property(nonatomic, getter=isCancelled) _Bool cancelled;
- (void)_invalidateContentBounds;
@property(nonatomic) long long routingMode;
@property(copy, nonatomic) NSString *location;
- (id)time;
- (void)setTime:(id)arg1;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIColor *textBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) UIColor *timeTextColor;
@property(retain, nonatomic) UIColor *titleTextColor;
@property(nonatomic) struct UIEdgeInsets padding;
- (void)_removeTravelTimeSubviews;
- (void)_addTravelTimeSubviews;
@property(nonatomic) _Bool usesSmallText;
- (void)prepareForReuse;
- (id)description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

