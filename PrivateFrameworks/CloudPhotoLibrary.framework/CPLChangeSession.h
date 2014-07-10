/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CPLAbstractObject-Protocol.h"

@class CPLLibraryManager, CPLPlatformObject, NSProgress, NSString;

@interface CPLChangeSession : NSObject <CPLAbstractObject>
{
    CPLPlatformObject *_platformObject;
    NSProgress *_sessionProgress;
    NSString *_sessionIdentifier;
    CPLLibraryManager *_libraryManager;
    unsigned long long _state;
}

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) CPLLibraryManager *libraryManager; // @synthesize libraryManager=_libraryManager;
@property(readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) NSProgress *sessionProgress; // @synthesize sessionProgress=_sessionProgress;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (void)tearDownWithCompletionHandler:(id)arg1;
- (void)finalizeWithCompletionHandler:(id)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (void)resume;
- (void)pause;
- (void)dealloc;
- (id)_sessionLogDomain;
- (id)initWithLibraryManager:(id)arg1;
- (id)init;

@end

