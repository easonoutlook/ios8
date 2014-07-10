/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <SoftwareUpdateServices/SUDownloadPolicy-Protocol.h>

@class SUCarrierDownloadPolicyProperties, SUDescriptor, SUNetworkMonitor;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy>
{
    SUDescriptor *_descriptor;
    SUCarrierDownloadPolicyProperties *_carrierPolicy;
    SUNetworkMonitor *_networkMonitor;
    _Bool _cellularCapable;
}

@property(retain, nonatomic) SUNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(nonatomic, getter=isCellularCapable) _Bool cellularCapable; // @synthesize cellularCapable=_cellularCapable;
@property(retain, nonatomic) SUCarrierDownloadPolicyProperties *carrierPolicy; // @synthesize carrierPolicy=_carrierPolicy;
@property(retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (_Bool)_isDownloadableForNetworkType:(int)arg1 error:(long long *)arg2 cellularFeesApply:(_Bool *)arg3 powerRequired:(_Bool *)arg4;
- (_Bool)isDownloadAllowableForCellular2G;
- (_Bool)isDownloadAllowableForCellular;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2 powerRequired:(_Bool *)arg3;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2;
- (_Bool)isDownloadFreeForCellular;
- (_Bool)isDownloadAllowableForCellularRoaming;
- (_Bool)isDownloadAllowableForWiFi;
- (_Bool)isDownloadable;
- (_Bool)isPowerRequired;
- (_Bool)hasEnoughDiskSpace;
- (_Bool)isSamePolicy:(id)arg1;
- (_Bool)_isCellularCapable;
- (id)_stringForBool:(_Bool)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

@end

