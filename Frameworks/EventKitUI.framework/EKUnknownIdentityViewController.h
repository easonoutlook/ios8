/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "ABUnknownPersonViewControllerDelegate-Protocol.h"

@class ABUnknownPersonViewController;

// Not exported
@interface EKUnknownIdentityViewController : UIViewController <ABUnknownPersonViewControllerDelegate>
{
    id <EKIdentityProtocol> _identity;
    ABUnknownPersonViewController *_unknownPersonViewController;
}

- (void).cxx_destruct;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (void)setIdentity:(id)arg1;
- (void)loadView;
- (id)initWithIdentity:(id)arg1;

@end

