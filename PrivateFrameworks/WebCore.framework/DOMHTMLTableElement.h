/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLCollection, DOMHTMLTableCaptionElement, DOMHTMLTableSectionElement, NSString;

// Not exported
@interface DOMHTMLTableElement : DOMHTMLElement
{
}

- (void)deleteRow:(int)arg1;
- (id)insertRow:(int)arg1;
- (void)deleteCaption;
- (id)createCaption;
- (id)createTBody;
- (void)deleteTFoot;
- (id)createTFoot;
- (void)deleteTHead;
- (id)createTHead;
@property(copy) NSString *width;
@property(copy) NSString *summary;
@property(copy) NSString *rules;
@property(copy) NSString *frameBorders;
@property(copy) NSString *cellSpacing;
@property(copy) NSString *cellPadding;
@property(copy) NSString *border;
@property(copy) NSString *bgColor;
@property(copy) NSString *align;
@property(readonly) DOMHTMLCollection *tBodies;
@property(readonly) DOMHTMLCollection *rows;
@property(retain) DOMHTMLTableSectionElement *tFoot;
@property(retain) DOMHTMLTableSectionElement *tHead;
@property(retain) DOMHTMLTableCaptionElement *caption;
- (int)structuralComplexityContribution;

@end

