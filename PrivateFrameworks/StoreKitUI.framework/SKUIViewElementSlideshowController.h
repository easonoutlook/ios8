/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUISlideshowViewControllerDataSource-Protocol.h"
#import "SKUISlideshowViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, SKUIIPhoneSlideshowViewController, SKUISlideshowViewController, SKUIViewElementLayoutContext;

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate>
{
    id <SKUIViewElementSlideshowDelegate> _delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
}

@property(retain, nonatomic) SKUIViewElementLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(nonatomic) __weak id <SKUIViewElementSlideshowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)slideshowViewControllerDidFinish:(id)arg1;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2 size:(struct CGSize *)arg3;
- (id)slideshowViewController:(id)arg1 imageAtIndex:(long long)arg2;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (void)presentFromParentViewController:(id)arg1;
@property(readonly, nonatomic) long long numberOfSlideshowItems;
- (void)dealloc;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;

@end

