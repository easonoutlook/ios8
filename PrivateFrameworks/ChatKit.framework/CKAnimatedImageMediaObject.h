/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKImageMediaObject.h>

@interface CKAnimatedImageMediaObject : CKImageMediaObject
{
}

+ (id)UTITypes;
- (void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)generateThumbnailsForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (id)generateAnimatedPreviewFromThumbnails:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (id)notificationCenter;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;

@end

