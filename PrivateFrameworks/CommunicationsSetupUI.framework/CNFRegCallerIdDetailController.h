/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSListItemsController.h"

@class CNFRegController;

@interface CNFRegCallerIdDetailController : PSListItemsController
{
    CNFRegController *_regController;
}

@property(readonly, retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
- (void)_setupAccountHandlers;
- (void)reloadCallerIdValues;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRegController:(id)arg1;

@end

