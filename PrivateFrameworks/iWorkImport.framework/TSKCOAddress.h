/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

// Not exported
@interface TSKCOAddress : NSObject
{
    TSKCOAddress *mParent;
    NSArray *mAllPathElements;
}

@property(readonly, nonatomic) TSKCOAddress *parent; // @synthesize parent=mParent;
- (id)description;
- (_Bool)equals:(id)arg1;
- (_Bool)contains:(id)arg1;
- (_Bool)hasSamePrefix:(id)arg1;
@property(readonly, nonatomic) NSArray *allPathElements;
- (id)path;
@property(readonly, nonatomic) NSString *pathElement;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

