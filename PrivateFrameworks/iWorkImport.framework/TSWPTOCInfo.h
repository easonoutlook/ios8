/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPShapeInfo.h>

@class NSArray, NSSet, TSWPTOCPartitioner, TSWPTOCSettings;

// Not exported
@interface TSWPTOCInfo : TSWPShapeInfo
{
    TSWPTOCPartitioner *_partitioner;
    NSArray *_tocEntries;
    id <TSWPTOCController> _tocController;
    TSWPTOCSettings *_tocSettings;
    NSArray *_pageNumberRanges;
}

+ (_Bool)canPartition;
@property(retain, nonatomic) NSArray *pageNumberRanges; // @synthesize pageNumberRanges=_pageNumberRanges;
@property(retain, nonatomic, setter=setTOCSettings:) TSWPTOCSettings *tocSettings; // @synthesize tocSettings=_tocSettings;
@property(nonatomic) id <TSWPTOCController> tocController; // @synthesize tocController=_tocController;
- (void)saveTOCInfoMessage:(struct TOCInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadTOCInfoMessage:(const struct TOCInfoArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (_Bool)supportsAttachedComments;
- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)p_regenerateStorageContent;
- (id)containedStorageFormattedUsingParagraphStyle:(id)arg1;
@property(readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property(retain, nonatomic, setter=setTOCEntries:) NSArray *tocEntries; // @synthesize tocEntries=_tocEntries;
- (id)partitioner;
- (Class)repClass;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;

@end

