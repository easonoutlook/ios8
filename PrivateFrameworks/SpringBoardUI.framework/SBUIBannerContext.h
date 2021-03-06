/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SBUIBannerItem;

@interface SBUIBannerContext : NSObject
{
    SBUIBannerItem *_item;
    id <SBUIBannerSource> _source;
    id <SBUIBannerTarget> _target;
    _Bool _isValid;
    _Bool _requestsModalPresentation;
    NSString *_presentingActionIdentifier;
}

@property(copy, nonatomic) NSString *presentingActionIdentifier; // @synthesize presentingActionIdentifier=_presentingActionIdentifier;
@property(nonatomic) _Bool requestsModalPresentation; // @synthesize requestsModalPresentation=_requestsModalPresentation;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_isValid;
@property(readonly, retain, nonatomic) id <SBUIBannerTarget> target; // @synthesize target=_target;
@property(readonly, retain, nonatomic) id <SBUIBannerSource> source; // @synthesize source=_source;
@property(readonly, retain, nonatomic) SBUIBannerItem *item; // @synthesize item=_item;
- (id)description;
- (void)invalidate;
- (void)dealloc;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 presentingActionIdentifier:(id)arg4 requestModalPresentation:(_Bool)arg5;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;

@end

