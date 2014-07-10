/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "_WKFormInputSession-Protocol.h"

@class NSObject<NSSecureCoding>, NSString, WKContentView;

// Not exported
@interface WKFormInputSession : NSObject <_WKFormInputSession>
{
    WKContentView *_contentView;
    struct RetainPtr<NSObject<NSSecureCoding>> _userObject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
@property(copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
- (id)initWithContentView:(id)arg1 userObject:(id)arg2;

@end

