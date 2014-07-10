/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CAMCaptureController, CAMExposureBiasSlider, CAMFocusAttachmentView, CAMFocusLockAttachmentView, CAMFocusLockView, CAMFocusPointView, CAMFocusSplitAttachmentView, CAMFocusView, CAMVideoPreviewView, NSMutableDictionary;

@interface CAMPreviewView : UIView
{
    UIView *_maskingContainerView;
    UIView *_previewContainer;
    CAMVideoPreviewView *_videoPreviewView;
    UIView *_focusContainerView;
    CAMFocusPointView *_focusView;
    CAMFocusPointView *_exposureView;
    CAMFocusView *_continuousAutoFocusView;
    CAMFocusLockView *_lockFocusView;
    CAMFocusSplitAttachmentView *_splitFocusAndExposureAttachment;
    CAMFocusLockAttachmentView *_lockFocusAttachment;
    CAMFocusAttachmentView *_dismissFocusAttachment;
    CAMExposureBiasSlider *_exposureBiasSlider;
    UIView *_facesContainerView;
    NSMutableDictionary *_faceIDsToViews;
    UIView *_dimmingView;
    double _dimmingStrength;
    unsigned int _canShowFocus:1;
    unsigned int _controlsAreVisible:1;
    _Bool _square;
    _Bool _showSplitFocusAndExposureAttachment;
    _Bool _splitFocusAndExposure;
    _Bool _showLockFocusAttachment;
    _Bool _showExposureBiasSliderOnChange;
    _Bool __showExposureBiasSlider;
    float _exposureBiasMin;
    float _exposureBiasMax;
    float _exposureBiasValue;
    int __exposureBiasSide;
    CAMCaptureController *__sharedCameraController;
    struct CGRect _lastFocusFrame;
    struct CGRect _lastExposureFrame;
}

@property(nonatomic) __weak CAMCaptureController *_sharedCameraController; // @synthesize _sharedCameraController=__sharedCameraController;
@property(nonatomic, setter=_setShowExposureBiasSlider:) _Bool _showExposureBiasSlider; // @synthesize _showExposureBiasSlider=__showExposureBiasSlider;
@property(readonly, nonatomic) int _exposureBiasSide; // @synthesize _exposureBiasSide=__exposureBiasSide;
@property(nonatomic) _Bool showExposureBiasSliderOnChange; // @synthesize showExposureBiasSliderOnChange=_showExposureBiasSliderOnChange;
@property(nonatomic) float exposureBiasValue; // @synthesize exposureBiasValue=_exposureBiasValue;
@property(nonatomic) float exposureBiasMax; // @synthesize exposureBiasMax=_exposureBiasMax;
@property(nonatomic) float exposureBiasMin; // @synthesize exposureBiasMin=_exposureBiasMin;
@property(nonatomic) _Bool showLockFocusAttachment; // @synthesize showLockFocusAttachment=_showLockFocusAttachment;
@property(nonatomic) _Bool splitFocusAndExposure; // @synthesize splitFocusAndExposure=_splitFocusAndExposure;
@property(nonatomic) _Bool showSplitFocusAndExposureAttachment; // @synthesize showSplitFocusAndExposureAttachment=_showSplitFocusAndExposureAttachment;
@property(readonly, nonatomic) struct CGRect lastExposureFrame; // @synthesize lastExposureFrame=_lastExposureFrame;
@property(readonly, nonatomic) struct CGRect lastFocusFrame; // @synthesize lastFocusFrame=_lastFocusFrame;
@property(nonatomic, getter=isSquare) _Bool square; // @synthesize square=_square;
@property(nonatomic) double dimmingStrength; // @synthesize dimmingStrength=_dimmingStrength;
@property(readonly, retain, nonatomic) CAMVideoPreviewView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
- (void).cxx_destruct;
- (void)_setExposureBiasSliderAlpha:(double)arg1 animationDuration:(double)arg2;
- (void)fadeOutFaceTrackingViews;
- (void)showFaceTrackingViewsForFaces:(id)arg1;
- (id)dismissFocusAttachment;
- (id)lockFocusAttachment;
- (void)_updateLockFocusAttachment;
- (_Bool)_shouldVendAttachment:(id)arg1;
- (id)splitFocusAndExposureAttachment;
- (void)_updateSplitFocusAndExposureAttachment;
- (void)setDimmingStrength:(double)arg1 duration:(double)arg2;
- (void)setExposureBiasSide:(int)arg1 animated:(_Bool)arg2;
- (void)setControlsAreVisible:(_Bool)arg1;
- (void)setFocusViewsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShouldShowFocus:(_Bool)arg1;
- (void)resetFocusViewFadeOutSuspensions;
- (void)resumeFocusViewFadeOutResetPending:(_Bool)arg1;
- (void)suspendFocusViewFadeOut;
- (void)dismissFocusViews;
- (_Bool)_shouldDismissFocusViewsOnFocusDidEnd;
- (void)updateFocusViewsLastInteractionTime;
- (void)focusDidEnd;
- (void)removeContinuousAutoFocusView;
- (void)showContinuousAutoFocusView;
- (void)removeAllFocusViewsLeavingActivePointViews:(_Bool)arg1;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)animateFocusLockScaleDown;
- (void)animateFocusLock;
- (void)showLockFocusAtPoint:(struct CGPoint)arg1;
- (id)exposureBiasSlider;
- (id)exposurePointView;
- (id)focusPointView;
- (void)updateExposurePoint:(struct CGPoint)arg1;
- (void)updateFocusPoint:(struct CGPoint)arg1;
- (struct CGPoint)currentExposurePoint;
- (struct CGPoint)currentFocusPoint;
@property(readonly, nonatomic) double lastExposureFadeOutTime;
@property(readonly, nonatomic) double lastFocusFadeOutTime;
- (void)_updateExposureFrameForPoint:(struct CGPoint)arg1;
- (void)_updateFocusFrameForPoint:(struct CGPoint)arg1;
- (void)_layoutExposureBiasSlider;
- (void)_attachAttachment:(id)arg1 toFocusView:(id)arg2 position:(int)arg3;
- (_Bool)_enableExposureBias;
- (_Bool)_allowDismissFocusAttachment;
- (_Bool)_allowFocusLockAttachments;
- (_Bool)_allowSplitFocusAndExposure;
- (void)_createExposureBiasSlider;
- (void)_showFocusAtPoint:(struct CGPoint)arg1 startAnimating:(_Bool)arg2;
- (void)showFocusAtPoint:(struct CGPoint)arg1;
- (void)_createFocusViewIfNeeded;
- (void)setSquare:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

