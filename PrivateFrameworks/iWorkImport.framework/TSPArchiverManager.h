/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, TSPDescriptionGenerator;

// Not exported
@interface TSPArchiverManager : NSObject
{
    id <TSPArchiverManagerDelegate> _delegate;
    Class _archiverClass;
    NSMapTable *_archivers;
    NSObject<OS_dispatch_queue> *_archiversHighQueue;
    NSObject<OS_dispatch_queue> *_archiversLowQueue;
    NSObject<OS_dispatch_queue> *_archiveHighQueue;
    NSObject<OS_dispatch_queue> *_archiveDefaultQueue;
    NSObject<OS_dispatch_queue> *_archiveLowQueue;
    NSObject<OS_dispatch_queue> *_archiveCompletionQueue;
    struct {
        unsigned int isStopped:1;
        unsigned int delegateRespondsToDidCreateArchiver:1;
        unsigned int delegateRespondsToShouldDelayArchivingObject:1;
    } _flags;
    TSPDescriptionGenerator *_descriptionGenerator;
}

@property(retain, nonatomic) TSPDescriptionGenerator *descriptionGenerator; // @synthesize descriptionGenerator=_descriptionGenerator;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stop;
- (void)archiveWithArchiver:(id)arg1 queue:(id)arg2 archiveCompletion:(id)arg3;
- (id)archiverForObject:(id)arg1 archiveQueue:(id)arg2 archiveCompletion:(id)arg3;
- (void)archiveObjectWithLowPriority:(id)arg1;
- (void)archiveObjectWithHighPriority:(id)arg1;
- (void)archiverForObject:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 archiverClass:(Class)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

