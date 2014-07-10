/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKMapTileModel.h>

#import "VKMapLayer-Protocol.h"
#import "VKRouteMatchedAnnotationPresentationObserver-Protocol.h"
#import "VKStyleManagerObserver-Protocol.h"

@class NSMapTable, NSMutableArray, NSMutableSet, NSSet, VKSkyModel, VKStyleManager;

// Not exported
@interface VKOverlayContainerModel : VKMapTileModel <VKRouteMatchedAnnotationPresentationObserver, VKMapLayer, VKStyleManagerObserver>
{
    NSMutableSet *_visibleOverlays;
    NSMutableArray *_overlayPainters;
    NSMapTable *_overlaysToPainters;
    NSMutableSet *_overlaysToAdd;
    NSMutableSet *_overlaysToRemove;
    id <VKOverlayContainerDelegate> _delegate;
    _Bool _shouldCheckForOcclusion;
    _Bool _shouldOccludeTraffic;
    _Bool _shouldShowTraffic;
    _Bool _isShowingRouteInStandardMode;
    NSMapTable *_persistentOverlaysToPainters;
    NSMutableSet *_persistentOverlays;
    id <VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;
    VKSkyModel *_skyModel;
    id <VKOverlayContainerRouteDelegate> _routeDelegate;
    struct ClearItem *_clearItem;
    unsigned int _applicationState;
    CDStruct_b926a728 _puckPosition;
}

+ (_Bool)reloadOnStylesheetChange;
@property(readonly, nonatomic) _Bool isShowingRouteInStandardMode; // @synthesize isShowingRouteInStandardMode=_isShowingRouteInStandardMode;
@property(nonatomic) id <VKOverlayContainerRouteDelegate> routeDelegate; // @synthesize routeDelegate=_routeDelegate;
@property(retain, nonatomic) VKSkyModel *skyModel; // @synthesize skyModel=_skyModel;
@property(nonatomic) _Bool shouldOccludeTraffic; // @synthesize shouldOccludeTraffic=_shouldOccludeTraffic;
@property(readonly, nonatomic) NSSet *persistentOverlays; // @synthesize persistentOverlays=_persistentOverlays;
@property(retain, nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; // @synthesize routeLineSplitAnnotation=_routeLineSplitAnnotation;
@property(nonatomic) _Bool shouldShowTraffic; // @synthesize shouldShowTraffic=_shouldShowTraffic;
@property(nonatomic) _Bool shouldCheckForOcclusion; // @synthesize shouldCheckForOcclusion=_shouldCheckForOcclusion;
@property(readonly, nonatomic) CDStruct_b926a728 puckPosition; // @synthesize puckPosition=_puckPosition;
@property(nonatomic) id <VKOverlayContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void)setApplicationState:(unsigned int)arg1;
- (void)updatedMatchedSection:(fast_shared_ptr_502c59d0)arg1 index:(struct PolylineCoordinate *)arg2;
- (void)didReceiveMemoryWarning;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) VKStyleManager *styleManager;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)_updatePainterOrdering;
@property(readonly, nonatomic, getter=isInRealisticMode) _Bool inRealisticMode;
- (unsigned long long)mapLayerPosition;
- (void)annotationPresentationDidChangePresentationCoordinate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

