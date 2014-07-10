/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSError.h"

@interface NSError (BRAdditions)
+ (id)brc_errorAccountMismatch;
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToContainer:(id)arg2;
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingPOSIXError:(int)arg2;
+ (id)brc_errorNoContainerForBundle:(id)arg1;
+ (id)brc_errorContainerNotFound:(id)arg1;
+ (id)brc_errorItemNotFound:(id)arg1;
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;
+ (id)brc_errorPathOutsideAnyCloudDocsContainerAtURL:(id)arg1;
+ (id)brc_errorNotInCloud:(id)arg1;
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;
+ (id)brc_errorMethodNotImplemented:(const char *)arg1;
+ (id)brc_errorDaemonNotConfigured;
+ (id)errorFromErrno;
+ (id)errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)errorWithPOSIXCode:(int)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
- (_Bool)br_isCloudDocsErrorCode:(long long)arg1;
- (_Bool)isCocoaErrorCode:(long long)arg1;
- (_Bool)isPOSIXErrorCode:(long long)arg1;
@end

