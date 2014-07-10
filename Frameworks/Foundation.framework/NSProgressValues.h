/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString, _NSProgressFraction;

// Not exported
@interface NSProgressValues : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_userInfo;
    _NSProgressFraction *_selfFraction;
    _NSProgressFraction *_childFraction;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    _Bool _isCancellable;
    _Bool _isPausable;
    _Bool _isCancelled;
    _Bool _isPaused;
    NSString *_kind;
    _Bool _isPrioritizable;
}

+ (id)decodableClasses;
+ (_Bool)supportsSecureCoding;
+ (id)_derivedKeys;
- (id)overallFraction;
- (void)setTotalUnitCount:(long long)arg1;
- (long long)totalUnitCount;
- (void)setCompletedUnitCount:(long long)arg1;
- (long long)completedUnitCount;
- (void)setFractionCompleted:(double)arg1;
- (double)fractionCompleted;
- (void)setFinished:(_Bool)arg1;
- (_Bool)isFinished;
- (void)setIndeterminate:(_Bool)arg1;
- (_Bool)isIndeterminate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)_indentedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

