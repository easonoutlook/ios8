/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (GSExtensions)
+ (id)gs_stringWithFileSystemRepresentation:(const char *)arg1;
- (id)gs_stringByUpdatingPathExtensionWithPathOrURL:(id)arg1;
- (id)gs_issueReadExtensionIfNeededForPid:(int)arg1;
- (id)gs_issueExtension:(const char *)arg1 error:(id *)arg2;
- (_Bool)validateGSName:(out id *)arg1;
@end

