/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

#import <iTunesStoreUI/SUScriptNativeObject-Protocol.h>

@class SUClientInterface, SUSection;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject>
{
    _Bool _canBeWeakScriptReference;
    SUClientInterface *_clientInterface;
    _Bool _loading;
    SUSection *_section;
    long long _storeBarStyle;
}

@property(retain, nonatomic) SUSection *section; // @synthesize section=_section;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void)_loadingDidChangeNotification:(id)arg1;
- (_Bool)clearsWeakScriptReferences;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_sectionForViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setToolbarHidden:(_Bool)arg1;
- (void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2;
- (void)setParentViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (void)loadView;
- (long long)ITunesStoreUIBarStyle;
- (id)description;
- (id)copyScriptViewController;
- (id)copyArchivableContext;
- (void)addChildViewController:(id)arg1;
- (void)dealloc;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (id)initWithSection:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

