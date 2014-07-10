/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKDServerConfiguration, NSObject<OS_dispatch_group>;

@interface CKDGlobalConfigurationOperation : CKDOperation
{
    CKDServerConfiguration *_configuration;
    NSObject<OS_dispatch_group> *_configurationFetchedGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *configurationFetchedGroup; // @synthesize configurationFetchedGroup=_configurationFetchedGroup;
@property(retain, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)main;
- (_Bool)shouldCheckAppVersion;

@end
