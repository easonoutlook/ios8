/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPSmartField.h>

// Not exported
@interface TSWPPlaceholderSmartField : TSWPSmartField
{
    _Bool _localizable;
}

@property(nonatomic) _Bool isLocalizable; // @synthesize isLocalizable=_localizable;
- (void)saveToArchive:(struct PlaceholderSmartFieldArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct PlaceholderSmartFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (int)smartFieldKind;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (const struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

