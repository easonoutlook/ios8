/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSExtensionContext.h"

#import "_UIIVCResponseDelegate-Protocol.h"

// Not exported
@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate>
{
    id <_UIIVCResponseDelegate> _responseDelegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(retain, nonatomic) id <_UIIVCResponseDelegate> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)_openURL:(id)arg1 completion:(id)arg2;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_performInputViewControllerOutput:(id)arg1;

@end

