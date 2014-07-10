/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class GEOPDFlyover, MKMapView, UITapGestureRecognizer;

// Not exported
@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView
{
    _Bool _animationPaused;
    UITapGestureRecognizer *_interactionTapRecognizer;
    MKMapView *_mapView;
    GEOPDFlyover *_flyover;
}

- (void)setFlyover:(id)arg1;
- (id)flyover;
- (void)setMapView:(id)arg1;
- (id)mapView;
- (void).cxx_destruct;
- (void)restart;
- (void)pause;
- (void)reset;
- (void)present;
- (void)_pauseTour;
- (void)prepareForPresentation;
- (id)initWithFrame:(struct CGRect)arg1 location:(id)arg2 mapItem:(id)arg3;

@end

