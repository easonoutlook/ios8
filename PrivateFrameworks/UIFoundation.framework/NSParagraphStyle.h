/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray;

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    double _lineSpacing;
    double _paragraphSpacing;
    double _headIndent;
    double _tailIndent;
    double _firstLineHeadIndent;
    double _minimumLineHeight;
    double _maximumLineHeight;
    NSArray *_tabStops;
    struct {
        unsigned int alignment:4;
        unsigned int lineBreakMode:4;
        unsigned int tabStopsIsMutable:1;
        unsigned int isNaturalDirection:1;
        unsigned int rightToLeftDirection:1;
        unsigned int fixedMultiple:2;
        unsigned int refCount:19;
    } _flags;
    double _defaultTabInterval;
    id _extraData;
}

+ (long long)defaultWritingDirectionForLanguage:(id)arg1;
+ (long long)_defaultWritingDirection;
+ (id)defaultParagraphStyle;
+ (void)initialize;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_isSuitableForFastStringDrawingWithAlignment:(long long *)arg1 lineBreakMode:(long long *)arg2 tighteningFactorForTruncation:(double *)arg3;
- (long long)headerLevel;
- (float)tighteningFactorForTruncation;
@property(readonly) float hyphenationFactor;
- (id)textLists;
- (id)textBlocks;
@property(readonly, nonatomic) double defaultTabInterval;
@property(readonly) double paragraphSpacingBefore;
@property(readonly) double lineHeightMultiple;
@property(readonly) long long baseWritingDirection;
@property(readonly) long long lineBreakMode;
@property(readonly) double maximumLineHeight;
@property(readonly) double minimumLineHeight;
@property(readonly) double firstLineHeadIndent;
@property(readonly, copy, nonatomic) NSArray *tabStops;
@property(readonly) double tailIndent;
@property(readonly) double headIndent;
@property(readonly) long long alignment;
@property(readonly) double paragraphSpacing;
@property(readonly) double lineSpacing;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)_initWithParagraphStyle:(id)arg1;
- (void)_deallocExtraData;
- (void)_allocExtraData;

@end

