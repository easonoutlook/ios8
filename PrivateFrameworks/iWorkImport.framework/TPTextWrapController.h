/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSWPTextWrap-Protocol.h"

@class NSTimer, TPDocumentRoot;

// Not exported
@interface TPTextWrapController : NSObject <TSWPTextWrap>
{
    TPDocumentRoot *_documentRoot;
    struct CGAffineTransform _canvasSpaceToWrapSpace;
    struct CGAffineTransform _wrapSpaceToCanvasSpace;
    _Bool _wrapAnimationEnabled;
    NSTimer *_wrapAnimationTimer;
}

+ (struct CGPoint)p_baseWrappablePoint;
- (id).cxx_construct;
- (unsigned int)p_splitLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrappable:(id)arg3 cookie:(id)arg4;
- (void)stopAnimation;
- (void)toggleWrapAnimation;
- (_Bool)p_shouldTextFlowAroundWrappable:(id)arg1 inTarget:(id)arg2 inColumn:(id)arg3;
- (void)p_animateWrap;
- (void)p_setWrapAnimationPhase:(double)arg1;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(_Bool)arg4 floatingCausedWrap:(_Bool *)arg5 skipHint:(double *)arg6 userInfo:(id)arg7;
- (id)p_groupInfoContainingWrappable:(id)arg1;
- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(_Bool *)arg3;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;

@end

