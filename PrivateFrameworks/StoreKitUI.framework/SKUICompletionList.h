/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUICacheCoding-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface SKUICompletionList : NSObject <SKUICacheCoding>
{
    NSArray *_completions;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *completions; // @synthesize completions=_completions;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCompletionListDictionary:(id)arg1;

@end

