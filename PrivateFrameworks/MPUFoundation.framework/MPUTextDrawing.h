/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSAttributedString, NSString, UIImage;

@interface MPUTextDrawing : NSObject
{
    NSString *_text;
    NSAttributedString *_attributedText;
    UIImage *_image;
    double _firstBaselineOffsetFromTop;
    double _lastBaselineOffsetFromBottom;
}

- (void)_setLastBaselineOffsetFromBottom:(double)arg1;
@property(nonatomic) double lastBaselineOffsetFromBottom; // @synthesize lastBaselineOffsetFromBottom=_lastBaselineOffsetFromBottom;
- (void)_setFirstBaselineOffsetFromTop:(double)arg1;
@property(nonatomic) double firstBaselineOffsetFromTop; // @synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop;
- (void)_setImage:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_setAttributedText:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)_setText:(id)arg1;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

