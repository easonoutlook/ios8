/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest
{
    NSSet *_insertedObjects;
    NSSet *_updatedObjects;
    NSSet *_deletedObjects;
    NSSet *_optimisticallyLockedObjects;
    void *_reserved1;
    void *_reserved2;
}

+ (void)initialize;
- (unsigned long long)requestType;
- (id)description;
@property(readonly) NSSet *lockedObjects;
@property(readonly) NSSet *deletedObjects;
@property(readonly) NSSet *updatedObjects;
@property(readonly) NSSet *insertedObjects;
- (id)init;
- (void)dealloc;
- (id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4;
- (_Bool)hasChanges;
- (void)setDeletedObjects:(id)arg1;

@end

