/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DResource.h>

#import "TSCH3DStringIndexableResource-Protocol.h"

@class TSCH3DLabelResourceAttributes;

// Not exported
@interface TSCH3DLabelResource : TSCH3DResource <TSCH3DStringIndexableResource>
{
    _Bool mSizeAndOffsetCalculated;
    tvec2_84d5962d mTightSize;
    tvec2_84d5962d mSize;
    tvec2_84d5962d mLabelRenderOffset;
    tvec2_84d5962d mBitmapLabelRenderOffset;
    TSCH3DLabelResourceAttributes *mAttributes;
}

+ (id)resourceWithLabelAttributes:(id)arg1;
@property(copy, nonatomic) TSCH3DLabelResourceAttributes *attributes; // @synthesize attributes=mAttributes;
- (id).cxx_construct;
- (tvec2_3b141483)labelSizeWithSamples:(double)arg1;
- (tvec2_3b141483)p_clampedLabelSampledSizeReturningClampedRatio:(float *)arg1;
@property(readonly, nonatomic) tvec2_3b141483 clampedLabelSampledSize;
@property(readonly, nonatomic) tvec2_84d5962d bitmapLabelRenderOffset;
@property(readonly, nonatomic) tvec2_84d5962d labelRenderOffset;
@property(readonly, nonatomic) tvec2_84d5962d tightSize;
@property(readonly, nonatomic) tvec2_84d5962d labelSize;
- (_Bool)isEqual:(id)arg1;
- (void)p_calculateSizeAndOffset;
- (id)get;
- (void)setString:(id)arg1;
- (void)dealloc;
- (id)initWithLabelAttributes:(id)arg1;
- (id)init;

@end

