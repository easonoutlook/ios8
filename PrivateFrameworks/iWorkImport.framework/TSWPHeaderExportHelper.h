/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSWPHeaderExportHelper : NSObject
{
}

+ (id)getMergedHeaderFooter:(int)arg1 fromHeaderFooterProvider:(id)arg2;
+ (_Bool)pAppendHeaderFooterFragment:(id)arg1 paragraph:(unsigned long long)arg2 toCompositHeaderFooter:(id)arg3 segment:(unsigned long long)arg4 lastSegmentInserted:(unsigned long long)arg5 themeParStyle:(id)arg6 otherHFStyles:(id)arg7 headerFooterProvider:(id)arg8;
+ (id)pHFParagraphStyleWithPropertiesFromStyle:(id)arg1 baseStyle:(id)arg2 otherHFStyles:(id)arg3 provider:(id)arg4;
+ (void)pApplyParagraphStyle:(id)arg1 toHFFragment:(id)arg2 documentRoot:(id)arg3;

@end

