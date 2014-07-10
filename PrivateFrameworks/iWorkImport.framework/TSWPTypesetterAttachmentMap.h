/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSDLayout, TSWPAttachment;

// Not exported
@interface TSWPTypesetterAttachmentMap : NSObject
{
    TSWPAttachment *_attachment;
    TSDLayout *_layout;
    struct __CTLine *_lineRef;
}

+ (id)mapWithAttachment:(id)arg1 layout:(id)arg2 pageNumber:(unsigned long long)arg3 pageCount:(unsigned long long)arg4 footnoteMarkProvider:(id)arg5 styleProvider:(id)arg6 colorOverride:(id)arg7 textScalePercent:(unsigned long long)arg8;
@property(readonly, nonatomic) struct __CTLine *lineRef; // @synthesize lineRef=_lineRef;
@property(retain, nonatomic) TSDLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) TSWPAttachment *attachment; // @synthesize attachment=_attachment;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

