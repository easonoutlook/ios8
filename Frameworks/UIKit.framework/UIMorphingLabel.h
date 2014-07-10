/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor, UIFont, UIMorphingLabelGlyphSet, _UIViewAnimationAttributes;

// Not exported
@interface UIMorphingLabel : UIView
{
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    struct {
        unsigned long long len;
        unsigned long long dir;
    } _memo[51][51];
    CDStruct_8a233cb2 _alignment[100];
    unsigned long long _alignmentSize;
    _UIViewAnimationAttributes *_animationAttributes;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    struct CGRect _visibleRect;
}

@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (double)requiredWidthForText:(id)arg1;
- (_Bool)canFitText:(id)arg1;
- (void)layoutSubviews;
- (void)saveAnimationAttributes;
- (id)attributedString;
- (id)attributedStringForText:(id)arg1;
- (void)animateTextColor;
- (void)animateGlyphs;
- (void)animateAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateMovementFromGlyphsInRange:(struct _NSRange)arg1 toGlyphsInRange:(struct _NSRange)arg2;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (void)animateSubstitutionFromGlyphsInRange:(struct _NSRange)arg1 toGlyphsInRange:(struct _NSRange)arg2;
- (void)animateDeletionOfGlyphsInRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)animateInsertionAtIndex:(unsigned long long)arg1 ofGlyphsInRange:(struct _NSRange)arg2;
- (void)animateHideGlyph:(id)arg1 delay:(double)arg2;
- (void)animateShowGlyph:(id)arg1 alpha:(double)arg2 delay:(double)arg3;
- (void)animateShowGlyph:(id)arg1 delay:(double)arg2;
- (void)animateGlyph:(id)arg1 toScale:(double)arg2 delay:(double)arg3;
- (void)animateGlyph:(id)arg1 toAlpha:(double)arg2 delay:(double)arg3;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint)arg2 delay:(double)arg3;
- (id)uniqueStringWithPrefix:(id)arg1;
- (void)hideGlyph:(id)arg1;
- (id)glyphViewWithImage:(id)arg1;
- (void)calculateGlyphAlignment;
- (unsigned long long)calculateHardAlignment:(CDStruct_8a233cb2 *)arg1 size:(unsigned long long)arg2 fromGlyphs:(const unsigned short *)arg3 count:(unsigned long long)arg4 toGlyphs:(const unsigned short *)arg5 count:(unsigned long long)arg6;
- (double)alphaForFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)baseInit;

@end

