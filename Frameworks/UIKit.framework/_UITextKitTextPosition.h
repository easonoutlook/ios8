/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITextPosition.h>

// Not exported
@interface _UITextKitTextPosition : UITextPosition
{
    long long _offset;
    long long _affinity;
}

+ (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;
+ (id)positionWithOffset:(long long)arg1;
@property long long affinity; // @synthesize affinity=_affinity;
@property long long offset; // @synthesize offset=_offset;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

