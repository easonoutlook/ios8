/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ABUIPerson, NSString;

@interface ABActionsController : NSObject
{
    int _property;
    int _multiValueIdentifier;
    id _value;
    NSString *_stringValue;
    void *_context;
    int _lastPropertyForActions;
    struct __CFArray *_actionsForProperty;
    ABUIPerson *_person;
}

+ (int)defaultActionForProperty:(int)arg1;
+ (id)newActionsControllerForProperty:(int)arg1;
@property(retain, nonatomic) ABUIPerson *person; // @synthesize person=_person;
- (void)_performAction:(int)arg1 forProperty:(int)arg2;
- (int)_actionAtIndex:(long long)arg1 forProperty:(int)arg2;
- (struct __CFArray *)_actionsForProperty:(int)arg1;
- (void)setContext:(void *)arg1;
- (void *)context;
- (void)setMultiValueIdentifier:(int)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)performActionAtIndex:(long long)arg1 forProperty:(int)arg2;
- (void)performDefaultAction;
- (int)defaultAction;
- (void)performAction:(int)arg1;
- (id)urlForAction:(int)arg1 forProperty:(int)arg2;
- (void)resetPrimaryPropertyActions;
- (id)titleAtIndex:(long long)arg1 forProperty:(int)arg2;
- (id)titleForAction:(int)arg1;
- (long long)actionsCountForProperty:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithProperty:(int)arg1;

@end

