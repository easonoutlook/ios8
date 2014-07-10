/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SLComposeSheetConfigurationItemObserving-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, SLComposeServiceViewController, SLSheetTitleView, UIImage, UINavigationItem, UITableView, UITableViewController, UIView;

// Not exported
@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SLComposeSheetConfigurationItemObserving>
{
    NSArray *_configurationItems;
    UITableViewController *_tableViewController;
    SLSheetTitleView *_titleView;
    UINavigationItem *_navItem;
    UIViewController *_autoCompletionViewController;
    SLComposeServiceViewController *_delegate;
    UIView *_contentView;
    UIImage *_serviceIconImage;
}

@property(retain, nonatomic) UIImage *serviceIconImage; // @synthesize serviceIconImage=_serviceIconImage;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak SLComposeServiceViewController *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updateCell:(id)arg1 withConfigurationItem:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateCellForConfigurationItem:(id)arg1;
@property(copy, nonatomic) NSArray *configurationItems;
- (void)configurationItemDidChange:(id)arg1;
- (void)observeConfigurationItems:(id)arg1;
- (void)resetConfigurationItems;
- (void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(id)arg1;
- (void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(double)arg2 contentViewChangeBlock:(id)arg3;
- (void)updateContentViewSize:(struct CGSize)arg1;
- (id)navigationItem;
- (double)_preferredTableViewHeight;
- (void)setPostButtonEnabled:(_Bool)arg1;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) UITableView *tableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

@end

