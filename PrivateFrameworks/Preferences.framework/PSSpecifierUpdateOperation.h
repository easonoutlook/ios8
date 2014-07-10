/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSNumber, PSSpecifier;

@interface PSSpecifierUpdateOperation : NSObject <NSCopying>
{
    long long _operation;
    PSSpecifier *_specifier;
    NSNumber *_index;
    NSNumber *_toIndex;
}

+ (id)moveOperationWithSpecifier:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
+ (id)removeOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)reloadOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)insertOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
@property(retain, nonatomic) NSNumber *toIndex; // @synthesize toIndex=_toIndex;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
- (_Bool)applyToArray:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 index:(id)arg3;

@end

