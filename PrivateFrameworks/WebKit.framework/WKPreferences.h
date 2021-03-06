/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface WKPreferences : NSObject
{
    struct RefPtr<WebKit::WebPreferences> _preferences;
    struct RetainPtr<NSString> _userDefaultsKeyPrefix;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(nonatomic) double minimumFontSize;
@property(nonatomic) _Bool suppressesIncrementalRendering;
@property(nonatomic) _Bool javaScriptCanOpenWindowsAutomatically;
@property(nonatomic, getter=isJavaScriptEnabled) _Bool javaScriptEnabled;
@property(readonly, nonatomic) NSString *userDefaultsKeyPrefix;
- (id)initWithUserDefaultsKeyPrefix:(id)arg1;
- (id)init;
@property(nonatomic, setter=_setTelephoneNumberDetectionIsEnabled:) _Bool _telephoneNumberDetectionIsEnabled;

@end

