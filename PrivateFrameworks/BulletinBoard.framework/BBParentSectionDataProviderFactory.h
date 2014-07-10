/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBDataProviderFactory-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class BBSectionInfo;

@interface BBParentSectionDataProviderFactory : NSObject <BBDataProviderFactory, NSSecureCoding>
{
    BBSectionInfo *_sectionInfo;
}

+ (_Bool)supportsSecureCoding;
+ (id)factoryFromSectionInfo:(id)arg1;
@property(copy, nonatomic) BBSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)dataProviders;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionInfo:(id)arg1;

@end
