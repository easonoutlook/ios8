/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GSLibraryProtocol-Protocol.h"

@class GSTemporaryStorage, NSObject<GSAdditionStoring>, NSString;

// Not exported
@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol>
{
    GSTemporaryStorage *_ts;
}

- (_Bool)generationsRemove:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *nameSpace;
@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage;

@end
