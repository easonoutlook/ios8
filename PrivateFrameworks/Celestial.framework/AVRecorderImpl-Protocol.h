/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AVRecorderImpl <NSObject>
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (_Bool)audioCurrentAverageDecibelLevels:(float *)arg1 andPeakDecibelLevels:(float *)arg2;
- (_Bool)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2;
- (unsigned long long)audioNumDeviceChannels;
- (void)setMicVolume:(float)arg1;
- (float)micVolume;
- (_Bool)autoFocusAtPoint:(struct CGPoint)arg1;
- (_Bool)takePhoto;
- (_Bool)isRecording;
- (void)stop;
- (_Bool)start;
- (_Bool)isActive;
- (void)deactivate;
- (_Bool)activate:(id *)arg1;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)init;
@end

