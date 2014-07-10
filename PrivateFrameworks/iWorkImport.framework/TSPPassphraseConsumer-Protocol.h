/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol TSPPassphraseConsumer <NSObject>
- (_Bool)setPassphrase:(id)arg1;

@optional
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSData *keychainGenericItem;
@property(readonly, nonatomic) NSString *passphraseHint;
- (_Bool)setDecryptionKey:(id)arg1;
@end

