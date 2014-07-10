/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

@class GQDColor, GQDFilteredImage;

// Not exported
@interface GQDTexturedImageFill : NSObject <GQDNameMappable>
{
    int mTechnique;
    GQDColor *mColor;
    GQDFilteredImage *mFilteredImage;
}

+ (const struct StateSpec *)stateForReading;
- (id)imageBinary;
- (id)color;
- (int)technique;
- (void)dealloc;
- (void)setColor:(id)arg1;
- (void)invalidateFilteredImage;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

