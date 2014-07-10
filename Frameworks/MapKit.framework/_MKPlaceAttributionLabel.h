/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIImage;

// Not exported
@interface _MKPlaceAttributionLabel : NSObject
{
    UIImage *image;
    double textBaselineOffset;
    double imageBaselineOffset;
    NSString *imagePlaceholder;
}

@property(retain) NSString *imagePlaceholder; // @synthesize imagePlaceholder;
@property double imageBaselineOffset; // @synthesize imageBaselineOffset;
@property double textBaselineOffset; // @synthesize textBaselineOffset;
@property(retain) UIImage *image; // @synthesize image;
- (void).cxx_destruct;
- (id)attributionWithString:(id)arg1;

@end

