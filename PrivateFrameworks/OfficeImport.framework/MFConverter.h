/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface MFConverter : NSObject
{
}

+ (struct CGRect)boundsInLogicalUnits:(id)arg1;
+ (struct CGRect)boundsInPoints:(id)arg1;
+ (_Bool)mapToPdf:(id)arg1;
+ (void)playInCurrentContext:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (id)play:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (id)playToBitmap:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (id)playToPDF:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (void)fromBinary:(id)arg1 toXml:(id)arg2;

@end

