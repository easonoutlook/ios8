/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class TSWPTextStatistics;

// Not exported
@interface TPDocumentStatistics : NSObject <NSCopying>
{
    _Bool _isAccurate;
    TSWPTextStatistics *_textStatistics;
    unsigned long long _pageCount;
}

@property(nonatomic) _Bool isAccurate; // @synthesize isAccurate=_isAccurate;
@property(nonatomic) unsigned long long pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) TSWPTextStatistics *textStatistics; // @synthesize textStatistics=_textStatistics;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)resetStatistics;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTextStatistics:(id)arg1 pageCount:(unsigned long long)arg2;

@end

