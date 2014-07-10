/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

// Not exported
@interface _HKCFGReplacementRule : NSObject
{
    NSString *_description;
    NSArray *_rightHandSide;
    id _nodeEvaluator;
    unsigned long long _lengthIncrease;
}

+ (id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(id)arg3;
@property(readonly, nonatomic) unsigned long long lengthIncrease; // @synthesize lengthIncrease=_lengthIncrease;
@property(readonly, copy, nonatomic) id nodeEvaluator; // @synthesize nodeEvaluator=_nodeEvaluator;
@property(readonly, copy, nonatomic) NSArray *rightHandSide; // @synthesize rightHandSide=_rightHandSide;
- (void).cxx_destruct;
- (id)description;

@end

