/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSURL;

@protocol TSPPackageWriter <NSObject>
@property(readonly, nonatomic) NSURL *relativeURLForExternalData;
@property(readonly, nonatomic) NSURL *documentTargetURL;
- (_Bool)writeData:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)writtenPackageWithURL:(id)arg1;
- (void)closeWithQueue:(id)arg1 completion:(id)arg2;
- (_Bool)addData:(id)arg1 infoMessage:(struct DataInfo *)arg2 saveOperationState:(id)arg3;
- (void)copyComponent:(id)arg1 locator:(id)arg2 completion:(id)arg3;
- (id)newComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(_Bool)arg2;
@end

