/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIElementProtocol-Protocol.h"

@interface AXUIElement : NSObject <UIElementProtocol>
{
    struct __AXUIElement *_axElement;
    long long _cachedRefCount;
    struct __CFDictionary *_cachedAttributes;
    _Bool _isValid;
}

+ (id)uiApplicationAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 startWithElement:(id)arg2;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 hitTestOrientation:(int)arg2;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1 cache:(struct __CFDictionary *)arg2;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1;
+ (void)initialize;
+ (void)applyElementAttributeCacheScheme:(int)arg1;
+ (id)uiSystemWideApplication;
+ (struct __AXUIElement *)systemWideAXUIElement;
@property(nonatomic) struct __CFDictionary *cachedAttributes; // @synthesize cachedAttributes=_cachedAttributes;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3;
- (struct _NSRange)_lineRangeForPosition:(unsigned long long)arg1;
- (long long)_lineEndPosition;
- (long long)_lineStartPosition;
- (id)_valueForRange:(struct _NSRange)arg1;
- (id)_attributedValueForRange:(struct _NSRange)arg1;
- (id)_objectForRange:(struct _NSRange)arg1 withParameterizedAttribute:(int)arg2;
- (struct _NSRange)_selectedTextRange;
- (void)setAXAttribute:(int)arg1 withObject:(id)arg2;
- (_Bool)isMockElement;
- (void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;
- (void)setAXAttribute:(int)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(int)arg1 withUIElementArray:(id)arg2;
- (void)setAXAttribute:(int)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(int)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(int)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(int)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(int)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(int)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(int)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(int)arg1 withString:(id)arg2;
- (void)setAXAttribute:(int)arg1 withBOOL:(_Bool)arg2;
- (id)_elementsWithParameter:(int)arg1 andCount:(unsigned long long)arg2;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (id)uiElementsWithAttribute:(int)arg1;
- (id)uiElementsWithAttribute:(int)arg1 parameter:(void *)arg2;
- (_Bool)performAXAction:(int)arg1;
- (_Bool)canPerformAXAction:(int)arg1;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (id)valueArrayWithAXAttributes:(struct __CFArray *)arg1;
- (id)objectWithAXAttribute:(int)arg1 parameter:(void *)arg2;
- (id)objectWithAXAttribute:(int)arg1;
- (struct _NSRange)rangeWithAXAttribute:(int)arg1;
- (struct CGRect)rectWithAXAttribute:(int)arg1;
- (struct CGPath *)pathWithAXAttribute:(int)arg1;
- (struct CGPoint)pointWithAXAttribute:(int)arg1;
- (id)numberWithAXAttribute:(int)arg1;
- (_Bool)boolWithAXAttribute:(int)arg1;
- (id)stringWithAXAttribute:(int)arg1;
- (id)arrayWithAXAttribute:(int)arg1;
- (void)updateCache:(int)arg1;
- (void *)_cachedValueForAttribute:(int)arg1;
- (id)_outputCache;
- (_Bool)isValid;
- (_Bool)isValidForApplication:(id)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (void)_createCache:(_Bool)arg1;
- (void)disableCache;
- (void)enableCache:(_Bool)arg1;
- (void *)modifyStaticCacheValue:(void *)arg1;
- (void)_invalidate;
- (void)setAXElement:(struct __AXUIElement *)arg1;
@property(readonly, nonatomic) struct __AXUIElement *axElement; // @synthesize axElement=_axElement;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)pid;
- (void)dealloc;
- (id)initWithAXElement:(struct __AXUIElement *)arg1;
- (id)initWithAXElement:(struct __AXUIElement *)arg1 cache:(struct __CFDictionary *)arg2;

@end

