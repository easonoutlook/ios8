/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangeRepeatModeCommand : MPRemoteCommand
{
    unsigned long long _currentRepeatType;
}

@property(nonatomic) unsigned long long currentRepeatType; // @synthesize currentRepeatType=_currentRepeatType;
- (id)_mediaRemoteCommandInfoOptions;
- (id)keyPathsForValuesTriggeringCommandsChanged;

@end

