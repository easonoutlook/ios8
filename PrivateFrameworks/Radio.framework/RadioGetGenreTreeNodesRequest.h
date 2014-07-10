/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Radio/RadioRequest.h>

@class SSMetricsConfiguration, SSMetricsPageEvent, SSURLConnectionRequest;

@interface RadioGetGenreTreeNodesRequest : RadioRequest
{
    unsigned long long _parentNodeID;
    SSURLConnectionRequest *_request;
    SSMetricsConfiguration *_metricsConfiguration;
    SSMetricsPageEvent *_metricsPageEvent;
}

+ (id)responseContentKey;
+ (id)requestBagKey;
+ (id)fallbackRequestPath;
+ (id)cacheKeyForGenreWithNodeID:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) SSMetricsPageEvent *metricsPageEvent; // @synthesize metricsPageEvent=_metricsPageEvent;
@property(readonly, retain, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
- (void).cxx_destruct;
- (id)_genreTreeByApplyingResponse:(id)arg1;
- (void)startWithCompletionHandler:(id)arg1;
- (void)startWithCachedCompletionHandler:(id)arg1 networkCompletionHandler:(void)arg2;
- (id)initWithParentNodeID:(unsigned long long)arg1;
- (id)init;

@end

