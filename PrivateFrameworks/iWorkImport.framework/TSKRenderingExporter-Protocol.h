/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "TSKExporter-Protocol.h"

@protocol TSKRenderingExporter <TSKExporter>
- (_Bool)hasMoreThanOnePageToPrint;
- (_Bool)paginate;
- (void)setPaginate:(_Bool)arg1;
- (unsigned long long)pageCount;
- (double)progressForCurrentPage;
- (id)imager;
- (struct CGRect)unscaledClipRect;
- (struct CGRect)boundsRect;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (_Bool)setInfosToCurrentPage;
- (_Bool)incrementPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (void)teardown;
- (void)setup;
- (_Bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id *)arg4;

@optional
- (void)setMaxPixels:(double)arg1;
@end

