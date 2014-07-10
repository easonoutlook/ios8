/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSURL;

@interface SKUIAssetViewElement : SKUIViewElement
{
    double _initialPlaybackTime;
    long long _itemIdentifier;
    double _playbackDuration;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) double initialPlaybackTime; // @synthesize initialPlaybackTime=_initialPlaybackTime;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

