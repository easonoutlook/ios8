/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADEffect.h>

@class OADColor;

// Not exported
@interface OADGlowEffect : OADEffect
{
    OADColor *mColor;
    float mRadius;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setRadius:(float)arg1;
- (float)radius;
- (void)setColor:(id)arg1;
- (id)color;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

