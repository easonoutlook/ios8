/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewController.h>

@class UIPrintPanelViewController;

// Not exported
@interface UIPrintPanelTableViewController : UITableViewController
{
    UIPrintPanelViewController *_printPanelViewController;
    long long _rangeRow;
    long long _copiesRow;
    long long _duplexRow;
    long long _paperRow;
    _Bool _contactingPrinter;
    _Bool _printerWarningWasShown;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateDuplex:(id)arg1;
- (void)updateCopies:(id)arg1;
- (void)updatePageRange:(struct _NSRange)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)clearPrintPanelViewController;
- (void)setShowContactingPrinter:(_Bool)arg1;
- (void)showContacting;
- (void)showCancelButton;
- (void)dealloc;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)_updateSize;
- (void)_update:(_Bool)arg1;

@end

