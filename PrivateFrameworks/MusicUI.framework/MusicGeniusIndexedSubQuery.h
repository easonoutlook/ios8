/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPMediaQuery;

@interface MusicGeniusIndexedSubQuery : NSObject
{
    unsigned long long _index;
    MPMediaQuery *_itemsQuery;
}

@property(readonly, nonatomic) MPMediaQuery *itemsQuery; // @synthesize itemsQuery=_itemsQuery;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)initWithIndex:(unsigned long long)arg1 itemsQuery:(id)arg2;

@end

