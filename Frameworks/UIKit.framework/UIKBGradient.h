/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

// Not exported
@interface UIKBGradient : NSObject <NSCopying>
{
    NSString *_gradientName;
    NSString *_flatColorName;
    NSString *_startColorName;
    NSString *_endColorName;
    NSArray *_colors;
    double _middleLocation;
    double _opacity;
    _Bool _horizontal;
    _Bool _usesRGBColors;
    _Bool _didQueryRGBColors;
}

+ (id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2;
+ (id)gradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (id)gradientWithFlatColor:(id)arg1;
+ (id)gradientWithName:(id)arg1;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWith3Colors:(id)arg1 middleLocation:(double)arg2;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithName:(id)arg1;
- (struct CGGradient *)CGGradient;
@property(readonly, nonatomic) _Bool usesRGBColors;

@end

