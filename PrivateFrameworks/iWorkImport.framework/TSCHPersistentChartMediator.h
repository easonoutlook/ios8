/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

#import "TSCHMediatorProvider-Protocol.h"
#import "TSCHNotifyOnModify-Protocol.h"

@class TSCHChartMediator;

// Not exported
@interface TSCHPersistentChartMediator : TSPObject <TSCHNotifyOnModify, TSCHMediatorProvider>
{
    TSCHChartMediator *mMediator;
}

@property(readonly, retain, nonatomic) TSCHChartMediator *mediator; // @synthesize mediator=mMediator;
- (void)dealloc;
- (id)initWithContext:(id)arg1 andMediator:(id)arg2;
- (void)saveToArchive:(struct ChartMediatorArchive *)arg1;
- (void)loadFromArchive:(const struct ChartMediatorArchive *)arg1;

@end

