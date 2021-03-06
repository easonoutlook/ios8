/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IKViewElementStyle, NSArray, NSMutableDictionary;

@interface IKStyleFactory : NSObject
{
    IKViewElementStyle *_globalStyle;
    NSArray *_baseStyles;
    NSMutableDictionary *_stylesMap;
}

@property(readonly, retain, nonatomic) NSMutableDictionary *stylesMap; // @synthesize stylesMap=_stylesMap;
@property(readonly, retain, nonatomic) NSArray *baseStyles; // @synthesize baseStyles=_baseStyles;
@property(readonly, retain, nonatomic) IKViewElementStyle *globalStyle; // @synthesize globalStyle=_globalStyle;
- (void).cxx_destruct;
- (id)_normalizeClassSelector:(id)arg1;
- (id)styleForClassSelector:(id)arg1;
- (id)initWithStyles:(id)arg1;

@end

