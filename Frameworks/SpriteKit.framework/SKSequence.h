/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKAction.h>

@class NSArray;

// Not exported
@interface SKSequence : SKAction
{
    struct SKCSequence *_mycaction;
    NSArray *_actions;
    unsigned long long _animIndex;
}

+ (id)sequenceWithActions:(id)arg1;
- (void).cxx_destruct;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

