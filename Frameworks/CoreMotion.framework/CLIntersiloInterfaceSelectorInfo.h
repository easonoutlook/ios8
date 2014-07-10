/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject
{
    int _numArguments;
    int _replyBlockIndex;
    int _returnAddressIndex;
    int _returnValueSize;
    SEL _sel;
    NSMethodSignature *_sig;
    NSString *_str;
}

@property(readonly, retain, nonatomic) NSString *str; // @synthesize str=_str;
@property(readonly, retain, nonatomic) NSMethodSignature *sig; // @synthesize sig=_sig;
@property(readonly, nonatomic) int returnValueSize; // @synthesize returnValueSize=_returnValueSize;
@property(readonly, nonatomic) int returnAddressIndex; // @synthesize returnAddressIndex=_returnAddressIndex;
@property(readonly, nonatomic) int replyBlockIndex; // @synthesize replyBlockIndex=_replyBlockIndex;
@property(readonly, nonatomic) int numArguments; // @synthesize numArguments=_numArguments;
@property(readonly, nonatomic) SEL sel; // @synthesize sel=_sel;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2;

@end

