/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, TSWPStorage;

// Not exported
@interface TSWPStorageIterationEvent : NSObject
{
    NSString *_providerIdentifier;
    int _type;
    NSObject *_object;
    TSWPStorage *_storage;
    struct _NSRange _range;
}

+ (id)characterEventWithRange:(struct _NSRange)arg1;
+ (id)eventWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange)arg3 object:(id)arg4;
@property(nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSObject *object; // @synthesize object=_object;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_providerIdentifier;
- (id).cxx_construct;
- (id)description;
- (_Bool)isRangeEnd;
- (void)dealloc;
- (id)initWithCharacterRange:(struct _NSRange)arg1;
- (id)initWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange)arg3 object:(id)arg4;

@end

