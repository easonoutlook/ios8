/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

// Not exported
@interface CICode128BarcodeGenerator : CICodeGenerator
{
    NSNumber *inputQuietSpace;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputQuietSpace; // @synthesize inputQuietSpace;
- (struct CGImage *)outputCGImage;

@end
