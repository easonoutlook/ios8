/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IKAppDocumentDelegate-Protocol.h"
#import "SKUIArtworkRequestDelegate-Protocol.h"
#import "SKUILayoutCacheDelegate-Protocol.h"

@class IKAppDocument, NSHashTable, NSOperationQueue, SKUIClientContext, SKUILayoutCache, SKUIViewElementLayoutContext, SUAudioPlayer;

@interface SKUIPreviewDocumentController : NSObject <IKAppDocumentDelegate, SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate>
{
    SUAudioPlayer *_audioPlayer;
    SKUIClientContext *_clientContext;
    IKAppDocument *_document;
    SKUILayoutCache *_layoutCache;
    SKUIViewElementLayoutContext *_layoutContext;
    NSOperationQueue *_operationQueue;
    NSHashTable *_viewControllers;
}

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(_Bool)arg2;
- (id)_operationQueue;
- (id)_layoutContext;
- (id)_layoutCache;
- (void)_connectToAudioPlayer;
- (void)_playerSessionsDidChangeNotification:(id)arg1;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)newPreviewOverlayViewController;
@property(readonly, nonatomic, getter=isPreviewActive) _Bool previewActive;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

