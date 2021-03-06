/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSKStyleMapper-Protocol.h"

@class NSMutableArray, NSMutableSet, NSSet, TSKAddedToDocumentContext, TSSStylesheet, TSURetainedPointerKeyDictionary;

// Not exported
@interface TSSStyleMapper : NSObject <TSKStyleMapper>
{
    TSSStylesheet *_targetStylesheet;
    TSSStylesheet *_targetThemeStylesheet;
    TSKAddedToDocumentContext *_dolcContext;
    TSURetainedPointerKeyDictionary *_styleMap;
    NSMutableArray *_mappingContext;
    NSMutableSet *_createdStyles;
    _Bool _forceMatchStyle;
    _Bool _varyInThemeStylesheet;
}

@property(readonly, nonatomic) NSSet *createdStyles; // @synthesize createdStyles=_createdStyles;
@property(nonatomic) _Bool forceMatchStyle; // @synthesize forceMatchStyle=_forceMatchStyle;
- (void)varyInThemeStylesheetIf:(_Bool)arg1 forDurationOfBlock:(id)arg2;
- (void)varyInThemeStylesheetForDurationOfBlock:(id)arg1;
- (id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(_Bool)arg2;
- (id)mappedStyleForStyle:(id)arg1;
- (id)_mappedStyleForStyle:(id)arg1 depth:(unsigned long long)arg2;
- (_Bool)shouldMapParentOfStyle:(id)arg1;
- (id)targetParentForStyle:(id)arg1;
- (id)targetParentByNameMatchForStyle:(id)arg1;
- (id)targetParentByContentTagMatchForStyle:(id)arg1;
- (id)targetParentByIdentifierPackageDescriptorFallbackMatchForStyle:(id)arg1;
- (id)targetParentByIdentifierExactMatchForStyle:(id)arg1;
- (id)createRootStyleForStyle:(id)arg1 withPropertyMap:(id)arg2;
- (id)stylesheetForNewRootStyleFromStyle:(id)arg1;
- (void)popMappingContext:(id)arg1;
- (void)pushMappingContext:(id)arg1;
@property(readonly, nonatomic) TSSStylesheet *targetStylesheet;
- (id)initWithTargetStylesheet:(id)arg1 newStyleDOLCContext:(id)arg2;
- (void)dealloc;

@end

