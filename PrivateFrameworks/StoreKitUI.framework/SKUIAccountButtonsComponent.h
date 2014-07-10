/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUIAccountButtonsViewElement, SKUILink;

@interface SKUIAccountButtonsComponent : SKUIPageComponent
{
    SKUILink *_ecommerceLink;
    _Bool _hidesTermsAndConditions;
}

@property(nonatomic) _Bool hidesTermsAndConditions; // @synthesize hidesTermsAndConditions=_hidesTermsAndConditions;
@property(retain, nonatomic) SKUILink *ECommerceLink; // @synthesize ECommerceLink=_ecommerceLink;
- (void).cxx_destruct;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIAccountButtonsViewElement *viewElement; // @dynamic viewElement;

@end

