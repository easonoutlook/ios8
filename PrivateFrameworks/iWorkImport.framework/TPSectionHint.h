/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

// Not exported
@interface TPSectionHint : NSObject
{
    NSMutableArray *_pageHints;
    unsigned long long _documentStartPageIndex;
}

@property(nonatomic) unsigned long long documentStartPageIndex; // @synthesize documentStartPageIndex=_documentStartPageIndex;
@property(readonly, nonatomic) NSArray *pageHints; // @synthesize pageHints=_pageHints;
- (void)saveToArchive:(struct SectionHintArchive *)arg1 archiver:(id)arg2 context:(id)arg3 shouldArchiveHintBlock:(id)arg4;
- (id)initWithArchive:(const struct SectionHintArchive *)arg1 unarchiver:(id)arg2;
- (void)setPageHints:(id)arg1;
- (_Bool)containsDocumentPageIndex:(unsigned long long)arg1;
- (_Bool)hasPageHintOfKind:(int)arg1 beforePageIndex:(unsigned long long)arg2;
- (_Bool)hasPageHintOfKind:(int)arg1 atPageIndex:(unsigned long long)arg2;
- (void)trimPageHintsFromPageIndex:(unsigned long long)arg1;
- (id)pageHintForPageIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange documentPageRange;
@property(readonly, nonatomic) unsigned long long lastPageIndex;
@property(readonly, nonatomic) unsigned long long pageCountWithoutFillerPage;
@property(readonly, nonatomic) unsigned long long pageCount;
- (id)copyForArchiving;
- (void)dealloc;
- (id)init;

@end

