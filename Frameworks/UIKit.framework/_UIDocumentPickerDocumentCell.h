/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIDocumentPickerCell.h>

@class NSString, _UIDocumentPickerContainerItem;

// Not exported
@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell
{
    _Bool _enabled;
    _UIDocumentPickerContainerItem *_item;
    NSString *_containerIdentifier;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(retain, nonatomic) _UIDocumentPickerContainerItem *item; // @synthesize item=_item;
- (id)viewControllerForDisplay;
- (void)updateContents;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;

@end

