/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TIAutocorrectionList, TIKeyboardCandidate;

// Not exported
@interface UIKeyboardAutocorrectionController : NSObject
{
    TIAutocorrectionList *_autocorrectionList;
    _Bool _needsAutocorrection;
    _Bool _deferredAutocorrection;
    _Bool _requestedAutocorrection;
}

@property(nonatomic) _Bool requestedAutocorrection; // @synthesize requestedAutocorrection=_requestedAutocorrection;
@property(nonatomic) _Bool deferredAutocorrection; // @synthesize deferredAutocorrection=_deferredAutocorrection;
@property(nonatomic) _Bool needsAutocorrection; // @synthesize needsAutocorrection=_needsAutocorrection;
- (void)requestAutocorrectionWithExecutionContext:(id)arg1;
- (_Bool)hasAutocorrection;
- (void)clearAutocorrection;
- (void)setNeedsAutocorrection;
@property(retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property(readonly, nonatomic) TIKeyboardCandidate *autocorrection;
- (void)dealloc;

@end

