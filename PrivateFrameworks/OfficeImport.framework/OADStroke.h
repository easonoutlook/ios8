/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADProperties.h>

#import "NSCopying-Protocol.h"

@class OADColor, OADDash, OADFill, OADLineEnd, OADLineJoin;

// Not exported
@interface OADStroke : OADProperties <NSCopying>
{
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    OADLineEnd *mHead;
    OADLineEnd *mTail;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    unsigned char mPenAlignment;
    unsigned int mIsColorOverridden:1;
    unsigned int mIsCompoundTypeOverridden:1;
    unsigned int mIsCapOverridden:1;
    unsigned int mIsWidthOverridden:1;
    unsigned int mIsJoinOverridden:1;
    unsigned int mIsDashOverridden:1;
    unsigned int mIsFillOverridden:1;
    unsigned int mIsPenAlignmentOverridden:1;
}

+ (id)defaultProperties;
+ (id)blackStroke;
+ (id)nullStroke;
@property(retain, nonatomic) OADLineEnd *tail; // @synthesize tail=mTail;
@property(retain, nonatomic) OADLineEnd *head; // @synthesize head=mHead;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (_Bool)isPenAlignmentOverridden;
- (void)setPenAlignment:(int)arg1;
- (int)penAlignment;
- (_Bool)isCompoundTypeOverridden;
- (void)setCompoundType:(int)arg1;
- (int)compoundType;
- (_Bool)isCapOverridden;
- (void)setCap:(int)arg1;
- (int)cap;
- (_Bool)isWidthOverridden;
- (void)setWidth:(float)arg1;
- (float)width;
- (_Bool)isJoinOverridden;
- (void)setJoin:(id)arg1;
- (id)join;
- (_Bool)isDashOverridden;
- (void)setDash:(id)arg1;
- (id)dash;
- (_Bool)isFillOverridden;
- (void)setFill:(id)arg1;
- (id)fill;
- (_Bool)isColorOverridden;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
