/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSURLRequest, NSURLResponse;

@interface WKNavigation : NSObject
{
    struct RetainPtr<NSURLRequest> _request;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSURLResponse *response;
- (void)setRequest:(id)arg1;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic) NSURLRequest *initialRequest;

@end

