/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPLayout.h>

@class TSTCellStyle, TSWPParagraphStyle;

// Not exported
@interface TSTWPLayout : TSWPLayout
{
    _Bool _cellWraps;
    CDStruct_0441cfb5 _cellID;
    int _paragraphAlignment;
    unsigned int _autoSizeFlags;
    TSTCellStyle *_cellStyle;
    TSWPParagraphStyle *_textStyle;
    CDStruct_5f1f7aa9 _mergeRange;
    CDStruct_5f1f7aa9 _cachedMaskSpillRange;
    struct CGRect _cachedMaskRect;
    struct CGRect _autosizedFrame;
}

@property(nonatomic) struct CGRect autosizedFrame; // @synthesize autosizedFrame=_autosizedFrame;
@property(nonatomic) CDStruct_5f1f7aa9 cachedMaskSpillRange; // @synthesize cachedMaskSpillRange=_cachedMaskSpillRange;
@property(nonatomic) struct CGRect cachedMaskRect; // @synthesize cachedMaskRect=_cachedMaskRect;
@property(nonatomic) unsigned int autoSizeFlags; // @synthesize autoSizeFlags=_autoSizeFlags;
@property(nonatomic) CDStruct_5f1f7aa9 mergeRange; // @synthesize mergeRange=_mergeRange;
@property(nonatomic) int paragraphAlignment; // @synthesize paragraphAlignment=_paragraphAlignment;
@property(nonatomic) _Bool cellWraps; // @synthesize cellWraps=_cellWraps;
@property(retain, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) TSTCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) CDStruct_0441cfb5 cellID; // @synthesize cellID=_cellID;
- (id).cxx_construct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 frame:(struct CGRect)arg2;

@end

