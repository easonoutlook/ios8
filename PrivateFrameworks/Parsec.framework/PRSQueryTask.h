/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, PRSSearchFeedback, PRSSearchSession;

@interface PRSQueryTask : NSObject
{
    _Bool _webSearch;
    NSString *_fbq;
    PRSSearchFeedback *_feedback;
    id <PRSSearchQueryHandler> _handler;
    NSObject<OS_dispatch_queue> *_queue;
    PRSSearchSession *_session;
}

@property _Bool webSearch; // @synthesize webSearch=_webSearch;
@property(nonatomic) __weak PRSSearchSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <PRSSearchQueryHandler> handler; // @synthesize handler=_handler;
@property(retain) PRSSearchFeedback *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) NSString *fbq; // @synthesize fbq=_fbq;
- (void).cxx_destruct;
- (id)feedbackQueryIdentifier;
- (void)invalidateHandler;
- (void)cancel;
- (void)resume;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4;

@end

