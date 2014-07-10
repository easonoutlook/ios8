/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

#import "TSPCopying-Protocol.h"
#import "TSSPreset-Protocol.h"

@class NSSet, NSString, TSURetainedPointerKeyDictionary;

// Not exported
@interface TSWPTOCSettings : TSPObject <TSPCopying, TSSPreset>
{
    int _scope;
    NSString *_displayName;
    TSURetainedPointerKeyDictionary *_map;
}

@property(retain, nonatomic) TSURetainedPointerKeyDictionary *map; // @synthesize map=_map;
@property(nonatomic) int scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)description;
- (_Bool)showInTOCForParagraphStyle:(id)arg1;
- (id)entryStyleForParagraphStyle:(id)arg1;
- (void)removeIndexedStyle:(id)arg1;
- (void)addIndexedStyle:(id)arg1 withEntryStyle:(id)arg2 showInTOC:(_Bool)arg3;
- (void)addIndexedStyle:(id)arg1 withEntryStyle:(id)arg2;
@property(readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property(readonly, nonatomic) NSSet *indexedStyles;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TOCSettingsArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct TOCSettingsArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (_Bool)isThemeEquivalent:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

