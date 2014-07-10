/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask
{
    _Bool _forceToServer;
    NSString *_previousETag;
    NSString *_requestDataContentType;
    NSData *_requestDataPayload;
    _Bool _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
@property(retain, nonatomic) NSData *requestDataPayload; // @synthesize requestDataPayload=_requestDataPayload;
@property(retain, nonatomic) NSString *requestDataContentType; // @synthesize requestDataContentType=_requestDataContentType;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
@property(nonatomic) _Bool forceToServer; // @synthesize forceToServer=_forceToServer;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)description;
- (void)dealloc;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (id)initWithURL:(id)arg1;

@end

