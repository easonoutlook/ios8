/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CPLResourceProgressDelegate <NSObject>
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;

@optional
- (void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
@end

