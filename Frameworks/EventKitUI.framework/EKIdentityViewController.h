/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "ABPersonViewControllerDelegate-Protocol.h"
#import "EKEditItemViewControllerProtocol-Protocol.h"

@class ABPersonViewController;

@interface EKIdentityViewController : UIViewController <ABPersonViewControllerDelegate, EKEditItemViewControllerProtocol>
{
    id <EKIdentityProtocol> _identity;
    ABPersonViewController *_personViewController;
}

- (void).cxx_destruct;
- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setIdentity:(id)arg1;
- (void)loadView;
- (id)initWithIdentity:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(nonatomic) _Bool presentModally;

@end
