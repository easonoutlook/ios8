/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSHashTable;

@interface AVCaptureSessionConfiguration : NSObject
{
    long long _configurationID;
    NSArray *_inputs;
    NSArray *_outputs;
    NSHashTable *_videoPreviewLayers;
    NSArray *_connections;
}

@property(readonly) NSArray *connections; // @synthesize connections=_connections;
@property(readonly) NSHashTable *videoPreviewLayers; // @synthesize videoPreviewLayers=_videoPreviewLayers;
@property(readonly) NSArray *outputs; // @synthesize outputs=_outputs;
@property(readonly) NSArray *inputs; // @synthesize inputs=_inputs;
@property(readonly) long long configurationID; // @synthesize configurationID=_configurationID;
- (id)uniqueVideoPreviewLayers:(id)arg1;
- (id)uniqueConnections:(id)arg1;
- (id)uniqueOutputs:(id)arg1;
- (id)uniqueInputs:(id)arg1;
- (void)dealloc;
- (id)initWithConfigurationID:(long long)arg1 inputs:(id)arg2 outputs:(id)arg3 videoPreviewLayers:(id)arg4 connections:(id)arg5;

@end

