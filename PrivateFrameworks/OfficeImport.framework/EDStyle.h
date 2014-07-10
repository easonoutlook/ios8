/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EDImmutableObject-Protocol.h"
#import "NSCopying-Protocol.h"

@class EDProtection, EDResources;

// Not exported
@interface EDStyle : NSObject <NSCopying, EDImmutableObject>
{
    EDResources *mResources;
    unsigned long long mParentIndex;
    unsigned long long mContentFormatId;
    unsigned long long mFontIndex;
    unsigned long long mFillIndex;
    unsigned long long mAlignmentInfoIndex;
    unsigned long long mBordersIndex;
    EDProtection *mProtection;
    unsigned long long mIndex;
    _Bool mContentFormatOverridden;
    _Bool mFontOverridden;
    _Bool mFillOverridden;
    _Bool mAlignmentInfoOverridden;
    _Bool mBordersOverridden;
    _Bool mProtectionOverridden;
    _Bool mDoNotModify;
}

+ (id)styleWithResources:(id)arg1;
- (void)setDoNotModify:(_Bool)arg1;
- (unsigned long long)index;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)setProtection:(id)arg1;
- (id)protection;
- (void)setProtectionOverridden:(_Bool)arg1;
- (_Bool)isProtectionOverridden;
- (void)setBorders:(id)arg1;
- (id)borders;
- (void)setBordersOverridden:(_Bool)arg1;
- (_Bool)isBordersOverridden;
- (void)setAlignmentInfo:(id)arg1;
- (id)alignmentInfo;
- (void)setAlignmentInfoOverridden:(_Bool)arg1;
- (_Bool)isAlignmentInfoOverridden;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)setFillOverridden:(_Bool)arg1;
- (_Bool)isFillOverridden;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setFontOverridden:(_Bool)arg1;
- (_Bool)isFontOverridden;
- (void)setContentFormat:(id)arg1;
- (id)contentFormat;
- (void)setContentFormatOverridden:(_Bool)arg1;
- (_Bool)isContentFormatOverridden;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToStyle:(id)arg1;
- (_Bool)isEquivalentToStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (void)setAlignmentInfoIndex:(unsigned long long)arg1;
- (unsigned long long)alignmentInfoIndex;
- (void)setFillIndex:(unsigned long long)arg1;
- (unsigned long long)fillIndex;
- (void)setBordersIndex:(unsigned long long)arg1;
- (unsigned long long)bordersIndex;
- (void)setParentIndex:(unsigned long long)arg1;
- (unsigned long long)parentIndex;
- (void)setContentFormatId:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;
- (void)setIndex:(unsigned long long)arg1;

@end

