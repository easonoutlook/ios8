/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/PBSlideBase.h>

// Not exported
@interface PBSlideMaster : PBSlideBase
{
}

+ (void)flattenPlaceholderTextStylesIntoLayout:(id)arg1 layoutType:(int)arg2 masterStyleMap:(id)arg3;
+ (void)readSlideMasterStyles:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)setFont:(id)arg1 fromCharacterProperties:(id)arg2;
+ (void)setCannedOtherTextListStyle:(id)arg1;
+ (void)padMissingLevels:(id)arg1;
+ (id)createMasterStyleMap:(id)arg1 state:(id)arg2;
+ (void)flattenMasterStyleType:(int)arg1 baseType:(int)arg2 masterStyleMap:(id)arg3;
+ (void)flattenBaseMasterStyleType:(int)arg1 masterStyleMap:(id)arg2;
+ (void)readSlideLayout:(id)arg1 slideHolder:(id)arg2 layoutType:(int)arg3 state:(id)arg4;
+ (void)readMasterDrawables:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)flattenTextStyle:(id)arg1 intoTextBox:(id)arg2;
+ (id)textBodyForPlaceholderType:(int)arg1 slideLayout:(id)arg2;
+ (int)textTypeFor:(int)arg1 placeholderType:(int)arg2;

@end

