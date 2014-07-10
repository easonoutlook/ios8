/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface TIAutocorrectionList : NSObject <NSSecureCoding>
{
    _Bool _shouldAcceptTopCandidate;
    NSArray *_candidates;
}

+ (id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(_Bool)arg2;
+ (id)autocorrectionListWithCandidates:(id)arg1;
+ (id)autocorrectionList;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldAcceptTopCandidate; // @synthesize shouldAcceptTopCandidate=_shouldAcceptTopCandidate;
@property(readonly, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(_Bool)arg2;
- (id)initWithCandidates:(id)arg1;
- (id)init;
- (void)dealloc;

@end

