/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIActivityViewController.h"

@class RCCompositionController;

@interface RCShareMemoViewController : UIActivityViewController
{
    RCCompositionController *_compositionController;
}

+ (id)_newPresentedPrepareFailureAlertControllerForComposition:(id)arg1;
+ (id)_newPresentedPrepareAlertControllerForComposition:(id)arg1 dismissHandler:(id)arg2;
+ (void)prepareToShareComposition:(id)arg1 ignoringInteraction:(_Bool)arg2 shouldContinuePreparingBlock:(id)arg3 preparedHandler:(void)arg4;
+ (void)presentInViewController:(id)arg1 composition:(id)arg2 ignoringInteraction:(_Bool)arg3 shouldContinuePreparingBlock:(id)arg4 preparedToPresentBlock:(void)arg5;
+ (id)unsupportedActivityTypes;
@property(readonly, nonatomic) RCCompositionController *compositionController; // @synthesize compositionController=_compositionController;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithCompositionController:(id)arg1;

@end

