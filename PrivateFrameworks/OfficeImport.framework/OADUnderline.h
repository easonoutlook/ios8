/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OADFill, OADStroke;

// Not exported
@interface OADUnderline : NSObject
{
    OADStroke *mStroke;
    OADFill *mFill;
    unsigned char mType;
    unsigned int mIsUsingTextFill:1;
    unsigned int mIsUsingTextStroke:1;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setIsUsingTextStroke:(_Bool)arg1;
- (_Bool)isUsingTextStroke;
- (void)setIsUsingTextFill:(_Bool)arg1;
- (_Bool)isUsingTextFill;
- (void)setType:(int)arg1;
- (int)type;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)setStroke:(id)arg1;
- (id)stroke;
- (void)dealloc;
- (id)initWithStroke:(id)arg1 fill:(id)arg2 type:(int)arg3;

@end

