/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUIMenuViewControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class NSArray, SKUIMenuViewController, UIPopoverController;

@interface SKUIMenuPopoverController : NSObject <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate>
{
    id <SKUIMenuPopoverDelegate> _delegate;
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_popoverController;
}

@property(nonatomic) __weak id <SKUIMenuPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_destroyPopoverController;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
@property(readonly, nonatomic) NSArray *menuTitles;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMenuTitles:(id)arg1 selectedIndex:(long long)arg2;
- (id)initWithMenuTitles:(id)arg1;

@end

