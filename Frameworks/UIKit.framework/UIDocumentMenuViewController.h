/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

#import "UIAlertControllerContaining-Protocol.h"
#import "_UIDocumentPickerViewControllerHost-Protocol.h"

@class NSMutableArray, UIAlertController, _UIDocumentPickerRemoteViewController;

@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerViewControllerHost, UIAlertControllerContaining>
{
    id <UIDocumentMenuDelegate> _weak_delegate;
    _Bool _dismissDelegateCalled;
    NSMutableArray *_auxiliaryOptions;
    _UIDocumentPickerRemoteViewController *_remoteViewController;
    UIAlertController *_alertController;
}

@property(nonatomic) _Bool dismissDelegateCalled; // @synthesize dismissDelegateCalled=_dismissDelegateCalled;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic, getter=_remoteViewController, setter=_setRemoteViewController:) _UIDocumentPickerRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) NSMutableArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
- (void)setModalPresentationStyle:(long long)arg1;
- (long long)modalPresentationStyle;
- (id)_containedAlertController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (void)_preferredContentSizeChanged:(struct CGSize)arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_dismissViewController;
- (void)_didSelectURL:(id)arg1 withSandboxExtension:(id)arg2;
- (void)_didSelectPicker;
- (void)_dismissViewControllerAndCallDelegate:(_Bool)arg1;
@property(nonatomic) __weak id <UIDocumentMenuDelegate> delegate;
- (void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned long long)arg3 handler:(id)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)_popoverDismissed:(id)arg1;
- (void)_commonInitWithCompletion:(id)arg1;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;

@end

