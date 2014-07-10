/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPSmartField.h>

@class NSArray;

// Not exported
@interface TSWPCitationSmartField : TSWPSmartField
{
    _Bool _isLocalizable;
    NSArray *_citationRecords;
}

@property(nonatomic) _Bool isLocalizable; // @synthesize isLocalizable=_isLocalizable;
@property(copy, nonatomic) NSArray *citationRecords; // @synthesize citationRecords=_citationRecords;
- (id)bibliographySmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (int)smartFieldKind;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;

@end

