/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDContainerLayout.h>

#import "TSDWrappableParent-Protocol.h"

@class TSDBezierPath, TSDLayoutGeometry;

// Not exported
@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent>
{
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect mBoundsForStandardKnobs;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

- (void)p_invalidateDescendentWrapPaths;
- (void)p_invalidateParentForWrap;
- (void)p_destroyDynamicCopies;
- (void)setDynamicGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (id)descendentWrappables;
- (void)wrappableChildInvalidated;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (id)i_computeWrapPath;
- (id)p_childWrapPathsFrom:(id)arg1;
- (_Bool)supportsFlipping;
- (_Bool)canFlip;
- (_Bool)supportsRotation;
- (_Bool)supportsParentRotation;
- (_Bool)allowsConnections;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (_Bool)providesGuidesForChildLayouts;
- (void)setGeometry:(id)arg1;
- (void)dragBy:(struct CGPoint)arg1;
- (void)invalidateExteriorWrap;
- (void)invalidate;
- (void)endDynamicOperation;
- (struct CGSize)minimumSize;
- (void)takeSizeFromTracker:(id)arg1;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (void)takeRotationFromTracker:(id)arg1;
- (id)computeInfoGeometryDuringResize;
- (void)beginDynamicOperation;
- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect)alignmentFrame;
- (struct CGRect)boundsForStandardKnobs;
- (void)processChangedProperty:(int)arg1;
- (id)computeLayoutGeometry;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)reliedOnLayouts;
- (id)layoutGeometryFromInfo;
- (id)visibleGeometries;
- (void)dealloc;

@end

