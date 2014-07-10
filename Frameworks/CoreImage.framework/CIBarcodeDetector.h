/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

// Not exported
@interface CIBarcodeDetector : CIDetector
{
    CIContext *context;
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
}

@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end

