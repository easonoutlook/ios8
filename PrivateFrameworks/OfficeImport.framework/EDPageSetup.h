/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface EDPageSetup : NSObject
{
    int mOrientation;
    int mPageOrder;
    _Bool mCustomFirstPageNumber;
    unsigned long long mFirstPageNumber;
    unsigned long long mFitToHeight;
    unsigned long long mFitToWidth;
    unsigned long long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;
- (void)setFooterMargin:(float)arg1;
- (float)footerMargin;
- (void)setHeaderMargin:(float)arg1;
- (float)headerMargin;
- (void)setBottomMargin:(float)arg1;
- (float)bottomMargin;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;
- (void)setRightMargin:(float)arg1;
- (float)rightMargin;
- (void)setLeftMargin:(float)arg1;
- (float)leftMargin;
- (void)setScale:(unsigned long long)arg1;
- (unsigned long long)scale;
- (void)setFitToWidth:(unsigned long long)arg1;
- (unsigned long long)fitToWidth;
- (void)setFitToHeight:(unsigned long long)arg1;
- (unsigned long long)fitToHeight;
- (void)setFirstPageNumber:(unsigned long long)arg1;
- (unsigned long long)firstPageNumber;
- (void)setCustomFirstPageNumber:(_Bool)arg1;
- (_Bool)customFirstPageNumber;
- (void)setOrder:(int)arg1;
- (int)order;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (id)init;

@end

