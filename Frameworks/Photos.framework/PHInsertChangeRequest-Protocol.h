/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PHChangeRequest-Protocol.h"

@protocol PHInsertChangeRequest <PHChangeRequest>
@property(readonly, getter=isNew) _Bool new;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1;
- (id)initForNewObject;
@end

