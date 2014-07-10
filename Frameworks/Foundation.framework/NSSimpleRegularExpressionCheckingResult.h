/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult
{
    NSRegularExpression *_regularExpression;
    struct _NSRange _ranges[3];
}

- (id)rangeArray;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRanges;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (struct _NSRange)range;
- (id)regularExpression;
- (void)dealloc;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;

@end

