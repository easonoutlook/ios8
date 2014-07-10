/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUITableViewSection.h>

@class SKUIClientContext;

@interface SKUIProductPageTableSection : SKUITableViewSection
{
    SKUIClientContext *_clientContext;
    _Bool _expanded;
}

@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (double)heightForTextLayout:(id)arg1 isExpanded:(_Bool)arg2;

@end

