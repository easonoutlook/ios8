/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptCell.h>

@class UIActivityIndicatorView;

@interface CKTranscriptHeaderCell : CKTranscriptCell
{
    UIActivityIndicatorView *_loadingIndicator;
}

+ (double)defaultCellHeight;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void)layoutSubviewsForAlignmentContents;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

