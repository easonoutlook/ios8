/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation
{
    id _saveCompletionBlock;
    id _deleteCompletionBlock;
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
    NSMutableDictionary *_subscriptionsByServerID;
}

@property(retain, nonatomic) NSMutableDictionary *subscriptionsByServerID; // @synthesize subscriptionsByServerID=_subscriptionsByServerID;
@property(retain, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property(retain, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;
@property(copy, nonatomic) id deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) id saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)main;
- (void)_handleSubscriptionDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleSubscriptionSaved:(id)arg1 error:(id)arg2;
- (void)_handleSubscriptionSaved:(id)arg1 responseCode:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

