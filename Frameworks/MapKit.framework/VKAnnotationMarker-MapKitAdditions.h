/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "VKAnnotationMarker.h"

#import "MKCalloutSource-Protocol.h"

@class NSString, UIView;

@interface VKAnnotationMarker (MapKitAdditions) <MKCalloutSource>
- (void)_setHiddenForOffscreen:(_Bool)arg1;
@property(retain, nonatomic) UIView *detailCalloutAccessoryView;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *subtitle;
@end

