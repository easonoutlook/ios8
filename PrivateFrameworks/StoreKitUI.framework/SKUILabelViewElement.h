/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIViewElementText;

@interface SKUILabelViewElement : SKUIViewElement
{
    long long _labelViewStyle;
    NSString *_moreButtonTitle;
    long long _numberOfLines;
    SKUIViewElementText *_text;
}

@property(readonly, nonatomic) SKUIViewElementText *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(readonly, nonatomic) NSString *moreButtonTitle; // @synthesize moreButtonTitle=_moreButtonTitle;
@property(readonly, nonatomic) long long labelViewStyle; // @synthesize labelViewStyle=_labelViewStyle;
- (void).cxx_destruct;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

