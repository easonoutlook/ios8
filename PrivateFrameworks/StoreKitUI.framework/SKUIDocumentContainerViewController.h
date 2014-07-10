/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewController.h>

#import "IKAppDocumentDelegate-Protocol.h"
#import <StoreKitUI/SKUIModalSourceViewProvider-Protocol.h>
#import "SKUINavigationPaletteProvider-Protocol.h"

@class IKAppDocument, NSDictionary, NSNumber, NSObject<OS_dispatch_source>, NSSet, NSString, NSValue, SKUINavigationBarController, SSVLoadURLOperation, UIView, UIViewController;

@interface SKUIDocumentContainerViewController : SKUIViewController <IKAppDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationPaletteProvider>
{
    UIViewController *_childViewController;
    _Bool _dirty;
    IKAppDocument *_document;
    NSObject<OS_dispatch_source> *_documentUpdateThrottleTimer;
    SSVLoadURLOperation *_loadURLOperation;
    SKUINavigationBarController *_navigationBarController;
    NSNumber *_orientationAtDisappear;
    NSSet *_personalizationItems;
    NSDictionary *_presentationOptions;
    NSValue *_sizeAtDisappear;
    unsigned long long _templateViewElementType;
    NSString *_urlString;
}

- (void).cxx_destruct;
- (id)_sidepackViewControllerWithOptions:(id)arg1 clientContext:(id)arg2;
- (void)_setChildViewController:(id)arg1;
- (void)_sendOnViewAttributesChangeWithAttributes:(id)arg1;
- (void)_reloadNavigationBarController;
- (id)_newViewControllerWithTemplateElement:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (id)_navigationBarViewElement;
- (void)_finishLoadOperationWithResponse:(id)arg1 error:(id)arg2;
- (void)_cancelDocumentUpdateThrottle;
@property(readonly, nonatomic) UIView *navigationPaletteView;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id)arg2;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)loadView;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 clientContext:(id)arg3;

@end
