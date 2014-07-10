/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIRedeemStepViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, SKUIRedeemITunesPassLockup, SKUIRedeemTextField, UIBarButtonItem, UIImageView;

@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController <UITextFieldDelegate>
{
    long long _category;
    SKUIRedeemTextField *_field;
    UIImageView *_imageView;
    NSString *_initialCode;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    UIBarButtonItem *_redeemButton;
}

@property(copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)_redeemAction:(id)arg1;
- (void)_passbookLockupAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_redeemConfigurationImagesDidLoad:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithRedeemCategory:(long long)arg1;

@end

