/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSCHTrendDataPoint : NSObject
{
    double mDataPointX;
    double mDataPointY;
    unsigned long long mGroupIndex;
}

- (long long)xValueCompare:(id)arg1;
- (unsigned long long)groupIndex;
- (double)dataPointY;
- (double)dataPointX;
- (id)initWithPointX:(double)arg1 pointY:(double)arg2 forGroup:(unsigned long long)arg3;

@end

