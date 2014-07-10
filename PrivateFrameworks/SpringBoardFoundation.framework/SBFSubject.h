/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardFoundation/SBFObservable.h>

#import <SpringBoardFoundation/SBFObserver-Protocol.h>

@class NSMutableArray;

@interface SBFSubject : SBFObservable <SBFObserver>
{
    NSMutableArray *_observers;
}

- (id)subscribe:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)_observers;
- (void)dealloc;
- (id)init;

@end

