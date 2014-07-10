/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "RUIWebContainerViewDelegate-Protocol.h"
#import "RemoteUITableFooter-Protocol.h"

@class NSURL, RUIWebContainerView;

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter>
{
    RUIWebContainerView *_webContainerView;
    id <RUITableFooterDelegate> _delegate;
    NSURL *_baseURL;
}

@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) __weak id <RUITableFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;

@end

