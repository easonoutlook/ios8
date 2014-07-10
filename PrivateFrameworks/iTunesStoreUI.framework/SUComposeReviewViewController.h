/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "SKComposeReviewDelegate-Protocol.h"

@class NSURL, SKComposeReviewViewController;

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate>
{
    NSURL *_compositionURL;
    SKComposeReviewViewController *_remoteViewController;
}

@property(readonly, nonatomic) NSURL *compositionURL; // @synthesize compositionURL=_compositionURL;
- (void)_showRemoteView;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;
- (void)loadView;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)prepareWithCompletionBlock:(id)arg1;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)initWithCompositionURL:(id)arg1;
- (id)init;

@end

