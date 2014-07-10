/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSATheme.h>

@class NSArray;

// Not exported
@interface TNTheme : TSATheme
{
    NSArray *mTablePrototypes;
}

+ (void)initialize;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;
- (void)bootstrapBlackHardCodedTheme;
- (void)bootstrapWhiteHardCodedTheme;
- (void)p_initDefaultHardCodedStyles;
@property(retain, nonatomic) NSArray *tablePrototypes;

@end

