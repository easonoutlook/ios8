/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MFComposeTypeFactoryDelegate <NSObject>
- (id)attachments;
- (_Bool)hasAnyHiddenTrailingEmptyQuote;
- (id)sendingAccountProxy;
- (id)sendingEmailAddress;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(_Bool)arg2;
- (id)savedHeaders;
- (void)setSavedHeaders:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)bccRecipients;
- (void)setBccRecipients:(id)arg1;
- (id)ccRecipients;
- (void)setCcRecipients:(id)arg1;
- (id)toRecipients;
- (void)setToRecipients:(id)arg1;
- (id)bodyField;
- (id)accountProxyGenerator;

@optional
- (void)addSignature:(_Bool)arg1;
@end

