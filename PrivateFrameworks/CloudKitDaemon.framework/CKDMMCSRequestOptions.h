/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CKDMMCSRequestOptions : NSObject
{
    _Bool _usesBackgroundSession;
    _Bool _allowsCellularAccess;
    NSString *_applicationBundleID;
    NSString *_secondaryApplicationBundleID;
    NSString *_containerID;
}

@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) _Bool usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) NSString *secondaryApplicationBundleID; // @synthesize secondaryApplicationBundleID=_secondaryApplicationBundleID;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
- (void).cxx_destruct;
- (id)MMCSOptions;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithOperation:(id)arg1;

@end

