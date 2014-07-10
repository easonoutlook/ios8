/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class IKAppDocument, SKUIHorizontalLockupView, SKUIViewElementLayoutContext, SUPlayerStatus, UITapGestureRecognizer;

@interface SKUIPreviewOverlayViewController : SKUIViewController <UIGestureRecognizerDelegate>
{
    IKAppDocument *_document;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIHorizontalLockupView *_lockupView;
    SUPlayerStatus *_previewStatus;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
- (double)_overlayWidth;
- (void)_tapAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)loadView;
- (void)willAppearWithLayoutContext:(id)arg1;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;
- (void)reloadOverlayView;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

