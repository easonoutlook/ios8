/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class MPUTextDrawing, NSString, RURadioStationsCollectionViewTemplateTextElement;

@interface RURadioStationCollectionViewCellTextImageView : UIImageView
{
    NSString *_text;
    MPUTextDrawing *_textDrawing;
    RURadioStationsCollectionViewTemplateTextElement *_templateTextElement;
}

@property(retain, nonatomic) RURadioStationsCollectionViewTemplateTextElement *templateTextElement; // @synthesize templateTextElement=_templateTextElement;
@property(retain, nonatomic) MPUTextDrawing *textDrawing; // @synthesize textDrawing=_textDrawing;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

