/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADShapeProperties.h>

@class OADConnection;

// Not exported
@interface OADConnectorProperties : OADShapeProperties
{
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;
- (id)description;
- (id)to;
- (id)from;
- (void)dealloc;
- (id)init;
- (id)initWithDefaults;

@end

