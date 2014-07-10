/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSString;

@interface RUTermsViewController : UIViewController
{
    NSString *_terms;
    unsigned long long _currentTermsVersion;
    id <RUTermsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <RUTermsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long currentTermsVersion; // @synthesize currentTermsVersion=_currentTermsVersion;
- (void).cxx_destruct;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_acceptAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)loadView;
- (void)dealloc;
- (id)initWithCurrentTermsVersion:(unsigned long long)arg1 terms:(id)arg2;

@end

