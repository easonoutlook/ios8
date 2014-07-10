/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <QuickLook/QLPreviewUIItem-Protocol.h>

@class NSMutableArray, NSOperation, NSString, NSURL, QLPreviewThumbnailGenerator, UIDocumentInteractionController, UIImage;

@interface QLPreviewArchiveItem : NSObject <QLPreviewUIItem>
{
    UIDocumentInteractionController *_archiveController;
    QLPreviewThumbnailGenerator *_thumbnailGenerator;
    NSString *_path;
    NSURL *_unarchivedURL;
    NSOperation *_unarchiveOperation;
    NSMutableArray *_completionBlocks;
    long long _previewItemIndex;
    long long _UIItemIndex;
    long long _level;
}

@property long long level; // @synthesize level=_level;
@property long long UIItemIndex; // @synthesize UIItemIndex=_UIItemIndex;
@property long long previewItemIndex; // @synthesize previewItemIndex=_previewItemIndex;
- (void)cancelIconUpdate;
- (void)updateIconWithSize:(struct CGSize)arg1 completionBlock:(id)arg2;
@property(readonly) UIImage *icon;
@property(readonly) _Bool isFolder;
- (void)cleanup;
- (void)unarchiveWithCompletionBlock:(id)arg1;
@property(readonly) _Bool unarchived;
@property(readonly) NSURL *previewItemURL;
@property(readonly) NSString *path;
- (void)dealloc;
- (id)initWithArchiveController:(id)arg1 path:(id)arg2;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly) NSString *previewItemTitle;

@end

