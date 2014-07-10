/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MKAnnotationView.h"

@class CALayer, CAShapeLayer;

// Not exported
@interface FMFAnnotationView : MKAnnotationView
{
    _Bool _isRotating;
    _Bool _wantsRotation;
    long long _annotationSize;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_markerOval;
    CAShapeLayer *_markerCenter;
    CAShapeLayer *_tailLayer;
    CALayer *_centerImageLayer;
    double _futureRotationAmount;
}

+ (id)circlePath;
@property(nonatomic) double futureRotationAmount; // @synthesize futureRotationAmount=_futureRotationAmount;
@property(nonatomic) _Bool wantsRotation; // @synthesize wantsRotation=_wantsRotation;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(retain, nonatomic) CALayer *centerImageLayer; // @synthesize centerImageLayer=_centerImageLayer;
@property(retain, nonatomic) CAShapeLayer *tailLayer; // @synthesize tailLayer=_tailLayer;
@property(retain, nonatomic) CAShapeLayer *markerCenter; // @synthesize markerCenter=_markerCenter;
@property(retain, nonatomic) CAShapeLayer *markerOval; // @synthesize markerOval=_markerOval;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) long long annotationSize; // @synthesize annotationSize=_annotationSize;
- (void).cxx_destruct;
- (id)markerCenterPathSmall;
- (id)markerOvalPathSmall;
- (id)markerCenterPath;
- (id)markerOvalPath;
- (id)shutterCircle;
- (id)smallCircle;
- (id)largeCircle;
- (id)smallTail;
- (id)largeTail;
- (id)largeBezierPath;
- (id)smallBezierPath;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (struct CGRect)centerImageFrameForSize:(long long)arg1;
- (id)shutterLineWidthForSize:(long long)arg1;
- (id)lineWidthForSize:(long long)arg1;
- (id)shadowOpacityForSize:(long long)arg1;
- (void)sizeAnnotationView;
- (void)updateAnnotationShutter;
- (void)setAnnotationSize:(double)arg1 animated:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)prepareForReuse;
- (void)setPersonImage:(id)arg1;
- (id)clipImageToCircle:(id)arg1;
- (id)fallbackPersonImage;
- (double)animationDuration;
- (struct CGRect)hitRectForSize;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;

@end

