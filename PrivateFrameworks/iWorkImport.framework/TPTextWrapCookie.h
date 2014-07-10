/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, TSDLayout<TSWPLayoutTarget>, TSDWrapPolygon, TSUPointerKeyDictionary, TSWPColumn;

// Not exported
@interface TPTextWrapCookie : NSObject
{
    TSDLayout<TSWPLayoutTarget> *_target;
    NSMutableArray *_floatingWrappables;
    TSUPointerKeyDictionary *_wrapPathInverseTransformInRootDictionary;
    TSWPColumn *_column;
    TSDWrapPolygon *_interiorWrapPolygon;
    struct CGAffineTransform _targetInverseTransformInRoot;
}

+ (id)textWrapCookieForColumn:(id)arg1 targetLayout:(id)arg2;
@property(readonly, nonatomic) struct CGAffineTransform targetInverseTransformInRoot; // @synthesize targetInverseTransformInRoot=_targetInverseTransformInRoot;
@property(retain, nonatomic) TSDWrapPolygon *interiorWrapPolygon; // @synthesize interiorWrapPolygon=_interiorWrapPolygon;
@property(readonly, retain, nonatomic) NSArray *floatingWrappables; // @synthesize floatingWrappables=_floatingWrappables;
@property(retain, nonatomic) TSWPColumn *column; // @synthesize column=_column;
- (id)transformedWrapPolygonForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform)arg2;
- (void)addFloatingWrappable:(id)arg1;
@property(nonatomic) TSDLayout<TSWPLayoutTarget> *target; // @dynamic target;
- (void)dealloc;
- (id)initWithColumn:(id)arg1 targetLayout:(id)arg2;

@end

