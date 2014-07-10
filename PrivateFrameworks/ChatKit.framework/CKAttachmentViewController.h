/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKViewController.h>

#import "CKAttachmentCellDelegate-Protocol.h"
#import "CKFeedCollectionViewLayoutDatasource-Protocol.h"
#import "CKFeedCollectionViewLayoutDelegate-Protocol.h"
#import "CKTranscriptRecipientsControllerDelegate-Protocol.h"
#import "QLPreviewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CKAttachmentCollectionView, CKConversation, CKFeedCollectionViewLayout, CKQLPreviewController, CKTranscriptRecipientsController, NSMutableArray, UIBarButtonItem, UICollectionViewFlowLayout, UIView;

@interface CKAttachmentViewController : CKViewController <CKFeedCollectionViewLayoutDelegate, UICollectionViewDelegateFlowLayout, CKAttachmentCellDelegate, CKFeedCollectionViewLayoutDatasource, CKTranscriptRecipientsControllerDelegate, UICollectionViewDataSource, QLPreviewControllerDelegate>
{
    _Bool _initialLoad;
    _Bool _selectingAttachments;
    id <CKAttachmentViewControllerDelegate> _delegate;
    CKAttachmentCollectionView *_collectionView;
    UIView *_headerContentView;
    NSMutableArray *_mediaObjects;
    CKFeedCollectionViewLayout *_feedLayout;
    UICollectionViewFlowLayout *_flowLayout;
    CKQLPreviewController *_qlPreviewController;
    CKConversation *_conversation;
    UIBarButtonItem *_saveButton;
    UIBarButtonItem *_deleteButton;
    CKTranscriptRecipientsController *_recipientsController;
}

@property(retain, nonatomic) CKTranscriptRecipientsController *recipientsController; // @synthesize recipientsController=_recipientsController;
@property(nonatomic, getter=isSelectingAttachments) _Bool selectingAttachments; // @synthesize selectingAttachments=_selectingAttachments;
@property(retain, nonatomic) UIBarButtonItem *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic, getter=isInitialLoad) _Bool initialLoad; // @synthesize initialLoad=_initialLoad;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) CKQLPreviewController *qlPreviewController; // @synthesize qlPreviewController=_qlPreviewController;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) CKFeedCollectionViewLayout *feedLayout; // @synthesize feedLayout=_feedLayout;
@property(retain, nonatomic) NSMutableArray *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property(retain, nonatomic) CKAttachmentCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) id <CKAttachmentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize)arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3;
- (struct CKFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize)arg4;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3;
- (struct CKFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double *)arg3 minimumNumberOfTilesToOmit:(long long *)arg4 forSection:(long long)arg5;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 forFeedLayout:(id)arg2;
- (unsigned long long)numberOfSectionsInFeedLayout:(id)arg1;
- (void)performAction:(SEL)arg1 forAttachmentCell:(id)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (_Bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (void)previewController:(id)arg1 didTransitionToState:(long long)arg2;
- (void)previewController:(id)arg1 willTransitionToState:(long long)arg2;
- (void)_showAllPreviewItemsForPreviewController:(id)arg1;
- (void)_hideCurrentPreviewItemForPreviewController:(id)arg1;
- (void)_deleteSelectedAttachments:(id)arg1;
- (void)_saveSelectedAttachments:(id)arg1;
- (void)_deleteAttachments:(id)arg1;
- (void)_saveAttachments:(id)arg1;
- (id)selectedItems;
- (void)selectAttachments:(id)arg1;
- (void)_updateToolbar;
- (void)_configureCell:(id)arg1 withCollectionView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)_iconForFileURL:(id)arg1 UTIType:(id)arg2;
- (void)_loadAttachments;
- (_Bool)transcriptRecipientsControllerShouldShowAttachmentsHeader:(id)arg1;
- (void)transcriptRecipientsControllerDidChangeSize:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_chatItemsChanged:(id)arg1;
- (void)_layoutForRotation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (id)initWithConversation:(id)arg1;
- (void)dealloc;

@end
