/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADShade.h>

@class OADRelativeRect;

// Not exported
@interface OADPathShade : OADShade
{
    OADRelativeRect *mFillToRect;
    _Bool mIsFillToRectOverridden;
    int mType;
    _Bool mIsTypeOverridden;
}

+ (id)defaultProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isTypeOverridden;
- (void)setType:(int)arg1;
- (int)type;
- (_Bool)isFillToRectOverridden;
- (void)setFillToRect:(id)arg1;
- (id)fillToRect;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

