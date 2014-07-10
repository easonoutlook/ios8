/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IKViewElement.h"

@class NSArray, NSMutableArray, NSSet, NSString;

@interface SKUIViewElement : IKViewElement
{
    NSMutableArray *_flattenedChildren;
    long long _pinStyle;
}

@property(readonly, nonatomic) long long pinStyle; // @synthesize pinStyle=_pinStyle;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) _Bool rendersWithPerspective;
@property(readonly, nonatomic) NSSet *personalizationLibraryItems;
@property(readonly, nonatomic) long long pageComponentType;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) NSArray *flattenedChildren;
- (id)firstChildForElementType:(unsigned long long)arg1;
- (void)enumerateViewElementsWithDictionary:(id)arg1 factory:(id)arg2 usingBlock:(id)arg3;
- (void)enumerateChildrenUsingBlock:(id)arg1;
- (id)elementWithIdentifier:(id)arg1;
- (_Bool)isDescendentFromViewElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

// Remaining properties
@property(readonly, retain, nonatomic) NSString *itmlID; // @dynamic itmlID;

@end

