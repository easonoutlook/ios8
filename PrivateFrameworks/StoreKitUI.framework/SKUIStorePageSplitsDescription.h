/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SKUIStorePageSplitsDescription : NSObject <NSCopying>
{
    NSArray *_splits;
    double _splitSpacing;
}

@property(nonatomic) double splitSpacing; // @synthesize splitSpacing=_splitSpacing;
@property(copy, nonatomic) NSArray *splits; // @synthesize splits=_splits;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

