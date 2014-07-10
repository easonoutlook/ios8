/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TPPageController.h>

#import "TSKChangeSourceObserver-Protocol.h"

@class TPTextWrapController;

// Not exported
@interface TPPaginatedPageController : TPPageController <TSKChangeSourceObserver>
{
    TPTextWrapController *_wrapController;
}

- (unsigned long long)p_backupPageIndexForCharIndex:(unsigned long long)arg1;
- (struct _NSRange)p_pageRangeAffectedByInfo:(id)arg1;
- (void)p_performWithCachedPageLayouts:(id)arg1;
- (void)p_rebuildCachedLayoutChildrenFromStartPage:(unsigned long long)arg1 toEndPage:(unsigned long long)arg2 setNeedsLayout:(_Bool)arg3;
- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)processHeaderFooterPropertyChanged;
- (void)processSectionChanged:(id)arg1;
- (id)textWrapper;
- (struct CGSize)canvasSizeToFitAllPages;
- (unsigned long long)calculatePageIndexFromCanvasPoint:(struct CGPoint)arg1;
- (unsigned long long)pageIndexFromCanvasPoint:(struct CGPoint)arg1;
- (struct CGRect)pageRectForPageIndex:(unsigned long long)arg1;
- (struct CGPoint)pageOriginForPageIndex:(unsigned long long)arg1;
- (Class)p_pageInfoClass;
- (struct CGSize)pageSize;
- (_Bool)isPaginated;
- (void)d_toggleWrapAnimation;
- (void)dealloc;
- (void)teardown;
- (id)initWithDocumentRoot:(id)arg1;

@end

