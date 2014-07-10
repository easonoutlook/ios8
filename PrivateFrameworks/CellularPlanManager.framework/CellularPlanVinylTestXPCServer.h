/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSXPCListener;

// Not exported
@interface CellularPlanVinylTestXPCServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *fXpcListener;
    NSMutableArray *fXpcConnections;
    id <CellularPlanVinylTest> fDelegate;
}

- (void)dealloc;
- (void)stop;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 andDelegate:(id)arg2;

@end

