/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <WebKit/WKObject-Protocol.h>

@class NSArray, WKBackForwardListItem;

@interface WKBackForwardList : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebBackForwardList> _list;
}

- (id).cxx_construct;
@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) NSArray *forwardList;
@property(readonly, nonatomic) NSArray *backList;
- (id)itemAtIndex:(long long)arg1;
@property(readonly, nonatomic) WKBackForwardListItem *forwardItem;
@property(readonly, nonatomic) WKBackForwardListItem *backItem;
@property(readonly, nonatomic) WKBackForwardListItem *currentItem;
- (void)dealloc;

@end
