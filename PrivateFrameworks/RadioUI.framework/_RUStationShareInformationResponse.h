/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, RadioShareInformation;

@interface _RUStationShareInformationResponse : NSObject
{
    RadioShareInformation *_shareInformation;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) RadioShareInformation *shareInformation; // @synthesize shareInformation=_shareInformation;
- (void).cxx_destruct;
- (id)initWithShareInformation:(id)arg1 error:(id)arg2;

@end

