/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKit/CKOperation.h>

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation : CKOperation
{
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    id _notificationChangedBlock;
    id _fetchNotificationChangesCompletionBlock;
    CKServerChangeToken *_resultServerChangeToken;
}

@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(copy, nonatomic) id fetchNotificationChangesCompletionBlock; // @synthesize fetchNotificationChangesCompletionBlock=_fetchNotificationChangesCompletionBlock;
@property(copy, nonatomic) id notificationChangedBlock; // @synthesize notificationChangedBlock=_notificationChangedBlock;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithPreviousServerChangeToken:(id)arg1;

@end

