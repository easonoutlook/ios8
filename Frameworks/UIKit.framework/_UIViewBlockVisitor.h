/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIViewVisitor.h>

// Not exported
@interface _UIViewBlockVisitor : _UIViewVisitor
{
    id _visitorBlock;
}

@property(copy, nonatomic) id visitorBlock; // @synthesize visitorBlock=_visitorBlock;
- (_Bool)_visitView:(id)arg1;
- (void)dealloc;
- (id)initWithTraversalDirection:(unsigned long long)arg1 visitorBlock:(id)arg2;

@end

