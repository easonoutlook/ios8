/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIActivityItemProvider.h"

@class RUStationShareInformationProvider;

@interface RUStationShareURLActivityItemProvider : UIActivityItemProvider
{
    RUStationShareInformationProvider *_shareInformationProvider;
}

@property(readonly, nonatomic) RUStationShareInformationProvider *shareInformationProvider; // @synthesize shareInformationProvider=_shareInformationProvider;
- (void).cxx_destruct;
- (id)item;
- (id)initWithShareInformationProvider:(id)arg1;

@end

