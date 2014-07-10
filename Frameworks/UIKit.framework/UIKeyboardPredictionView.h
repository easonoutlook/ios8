/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIKBBackgroundView, UIKBKeyView, UILabel, UITouch;

// Not exported
@interface UIKeyboardPredictionView : UIView
{
    UIKBBackgroundView *m_backgroundView;
    NSMutableArray *m_predictionCells;
    unsigned long long m_activeIndex;
    NSString *m_openQuote;
    NSString *m_closeQuote;
    UIView *m_message;
    UILabel *m_messageLabel;
    UIKBKeyView *m_messageKeyView;
    double m_messageShownTime;
    struct CGPoint m_initLocation;
    _Bool m_dragging;
    _Bool m_hasLongCandidates;
    _Bool _show;
    UITouch *_activeTouch;
}

+ (_Bool)enabled;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (double)predictionViewHeight;
+ (unsigned long long)numberOfCandidates;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
- (id)description;
- (double)height;
- (void)setShowsPredictionView:(_Bool)arg1 animate:(_Bool)arg2;
- (void)showMessageWithSize:(struct CGSize)arg1;
- (int)maxMessageCount;
- (void)setPredictions:(id)arg1 shouldAcceptTopCandidate:(_Bool)arg2;
- (void)removeMessage;
- (void)deactivateCandidate;
- (void)activateCandidateAtPoint:(struct CGPoint)arg1;
- (void)acceptCandidate;
- (void)acceptCandidateAtCell:(id)arg1;
- (unsigned long long)predictionCount;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setActiveCellWithPoint:(struct CGPoint)arg1;
- (void)setActiveCellWithIndex:(unsigned long long)arg1;
- (void)setTouchedCellState:(int)arg1;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)releaseMessage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)suspend;
- (void)updateQuotes;

@end

