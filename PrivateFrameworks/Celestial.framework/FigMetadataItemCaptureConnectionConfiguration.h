/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    struct opaqueCMFormatDescription *_formatDescription;
    struct OpaqueCMClock *_clock;
}

@property(retain, nonatomic) struct OpaqueCMClock *clock; // @synthesize clock=_clock;
@property(retain, nonatomic) struct opaqueCMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

