/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GEORouteHypothesizerDelegate <NSObject>
- (void)routeHypothesizerArrived:(id)arg1;
- (void)routeHypothesizer:(id)arg1 receivedETAError:(id)arg2;
- (void)routeHypothesizer:(id)arg1 receivedETAResponse:(id)arg2;
- (void)routeHypothesizer:(id)arg1 willSendETARequest:(id)arg2;
- (void)routeHypothesizerUpdatedETA:(id)arg1 etaRoute:(id)arg2;
- (void)routeHypothesizer:(id)arg1 matchedToRoute:(id)arg2;
- (void)routeHypothesizerRerouted:(id)arg1 request:(id)arg2 response:(id)arg3;
- (void)routeHypothesizer:(id)arg1 willRequestNewRoute:(id)arg2;
@end

