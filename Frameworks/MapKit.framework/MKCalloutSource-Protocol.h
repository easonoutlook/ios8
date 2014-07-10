/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol MKCalloutSource <NSObject>
- (id)debugAnchorPointString;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(_Bool)arg3;
- (id)title;

@optional
@property(readonly, retain, nonatomic) UIView *detailCalloutAccessoryView;
@property(readonly, retain, nonatomic) UIView *rightCalloutAccessoryView;
@property(readonly, retain, nonatomic) UIView *leftCalloutAccessoryView;
@property(readonly, copy, nonatomic) NSString *subtitle;
@end

