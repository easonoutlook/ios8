/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SLComposeSheetConfigurationItem : NSObject
{
    id <SLComposeSheetConfigurationItemObserving> _changeObserver;
    _Bool _valuePending;
    NSString *_title;
    NSString *_value;
    id _tapHandler;
}

@property(copy, nonatomic) id tapHandler; // @synthesize tapHandler=_tapHandler;
@property(nonatomic) _Bool valuePending; // @synthesize valuePending=_valuePending;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setChangeObserver:(id)arg1;
- (id)changeObserver;
- (id)init;

@end

