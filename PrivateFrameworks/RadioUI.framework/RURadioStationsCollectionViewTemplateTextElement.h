/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPUTextDrawingCache, NSString, UIFont;

@interface RURadioStationsCollectionViewTemplateTextElement : NSObject
{
    UIFont *_emphasizedFont;
    UIFont *_regularFont;
    long long _numberOfLines;
    double _scaledFirstBaselineOffset;
    _Bool _wantsAdditionalLineForExtraLargeContentSizes;
    _Bool _wantsEmphasizedStationName;
    NSString *_fontTextStyle;
    double _defaultFirstBaselineOffset;
    long long _defaultNumberOfLines;
    MPUTextDrawingCache *_textDrawingCache;
    MPUTextDrawingCache *_nowPlayingTextDrawingCache;
}

@property(readonly, nonatomic) MPUTextDrawingCache *nowPlayingTextDrawingCache; // @synthesize nowPlayingTextDrawingCache=_nowPlayingTextDrawingCache;
@property(readonly, nonatomic) MPUTextDrawingCache *textDrawingCache; // @synthesize textDrawingCache=_textDrawingCache;
@property(readonly, nonatomic) _Bool wantsEmphasizedStationName; // @synthesize wantsEmphasizedStationName=_wantsEmphasizedStationName;
@property(readonly, nonatomic) _Bool wantsAdditionalLineForExtraLargeContentSizes; // @synthesize wantsAdditionalLineForExtraLargeContentSizes=_wantsAdditionalLineForExtraLargeContentSizes;
@property(readonly, nonatomic) long long defaultNumberOfLines; // @synthesize defaultNumberOfLines=_defaultNumberOfLines;
@property(readonly, nonatomic) double defaultFirstBaselineOffset; // @synthesize defaultFirstBaselineOffset=_defaultFirstBaselineOffset;
@property(readonly, nonatomic) NSString *fontTextStyle; // @synthesize fontTextStyle=_fontTextStyle;
- (void).cxx_destruct;
- (void)_updateNumberOfLinesForTextDrawingCache:(id)arg1;
- (void)_updateFontsForTextDrawingCache:(id)arg1;
- (id)_newTextDrawingCacheWithStationNameEmphasizer:(_Bool)arg1;
- (id)_fontWithEmphasis:(_Bool)arg1;
- (void)updateForPreferredContentSizeChange;
@property(readonly, nonatomic) UIFont *tallestFont;
@property(readonly, nonatomic) double scaledFirstBaselineOffset;
@property(readonly, nonatomic) long long numberOfLines;
- (void)preHeatTextDrawingCacheForStrings:(id)arg1;
- (id)initWithFontTextStyle:(id)arg1 defaultFirstBaselineOffset:(double)arg2 defaultNumberOfLines:(long long)arg3 wantsAdditionalLineForExtraLargeContentSizes:(_Bool)arg4 wantsEmphasizedStationName:(_Bool)arg5;

@end

