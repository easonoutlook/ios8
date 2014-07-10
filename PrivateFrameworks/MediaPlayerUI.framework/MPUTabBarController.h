/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITabBarController.h"

@class NSArray, NSString;

@interface MPUTabBarController : UITabBarController
{
    NSArray *_customizableViewControllerIdentifiers;
    Class _viewControllerFactoryClass;
    NSArray *_viewControllerIdentifiers;
}

+ (Class)_moreNavigationControllerClass;
@property(copy, nonatomic) NSArray *viewControllerIdentifiers; // @synthesize viewControllerIdentifiers=_viewControllerIdentifiers;
@property(retain, nonatomic) Class viewControllerFactoryClass; // @synthesize viewControllerFactoryClass=_viewControllerFactoryClass;
@property(copy, nonatomic) NSArray *customizableViewControllerIdentifiers; // @synthesize customizableViewControllerIdentifiers=_customizableViewControllerIdentifiers;
- (void).cxx_destruct;
- (id)_viewControllerForIdentifier:(id)arg1;
- (void)_reloadTabBarFromIdentifiersAnimated:(_Bool)arg1;
- (id)_identifierForViewControllerAtIndex:(unsigned long long)arg1;
- (id)_identifierForViewController:(id)arg1;
- (id)_existingViewControllerForIdentifier:(id)arg1;
- (_Bool)shouldSelectViewController:(id)arg1;
- (void)setViewControllerIdentifiers:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *selectedViewControllerIdentifier;
@property(readonly, nonatomic) NSArray *filteredViewControllerIdentifiers;
- (void)reloadTabsPurgingExistingTabs:(_Bool)arg1;
- (void)reloadTabsAnimated:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <MPUTabBarControllerDelegate> delegate;

@end

