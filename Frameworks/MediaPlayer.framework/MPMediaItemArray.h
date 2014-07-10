/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface MPMediaItemArray : NSObject <NSSecureCoding>
{
    Class _itemArrayCoderPIDDataCodingClass;
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

