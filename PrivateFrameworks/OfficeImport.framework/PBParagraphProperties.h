/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface PBParagraphProperties : NSObject
{
}

+ (void)readParagraphProperties:(id)arg1 paragraphProperty:(struct PptParaProperty *)arg2 bulletStyle:(struct PptParaProperty9 *)arg3 isMaster:(_Bool)arg4 state:(id)arg5;
+ (void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(struct PptParaRun *)arg2 bulletStyle:(struct PptParaProperty9 *)arg3 state:(id)arg4;
+ (int)pptFontAlignWithOADTextFontAlign:(int)arg1;
+ (int)pptAlignmentTypeWithOADTextAlignType:(int)arg1;
+ (short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2;
+ (void)readAlign:(id)arg1 pptAlignmentType:(int)arg2;

@end

