/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@interface _MFSearchProcessResultsOperation : NSOperation
{
    id <_MFSearchResultsConsumer> _consumer;
    unsigned long long _type;
    id _completionBlock;
}

+ (id)operationWithResultsOfType:(unsigned long long)arg1 completion:(id)arg2 consumer:(void)arg3;
- (void)main;
- (void)dealloc;

@end

