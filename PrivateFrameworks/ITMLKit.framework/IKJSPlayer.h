/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSPlayer-Protocol.h>

@class IKDOMElement;

@interface IKJSPlayer : IKJSObject <IKJSPlayer>
{
    id <IKJSPlayerAppBridge> _appBridge;
}

@property(nonatomic) __weak id <IKJSPlayerAppBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak IKDOMElement *currentAVMediaElement;

@end

