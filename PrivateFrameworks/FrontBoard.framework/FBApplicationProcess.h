/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FrontBoard/FBProcess.h>

#import "BKSProcessDelegate-Protocol.h"
#import "BSWatchdogDelegate-Protocol.h"

@class BKSApplicationDataStore, BKSProcess, BKSProcessAssertion, BSMachSendRight, FBApplicationInfo, FBApplicationProcessExitContext, FBApplicationWatchdog, FBProcessCPUStatistics, FBProcessExecutionContext, NSMutableArray, NSMutableSet;

@interface FBApplicationProcess : FBProcess <BKSProcessDelegate, BSWatchdogDelegate>
{
    BKSApplicationDataStore *_dataStore;
    NSMutableSet *_allowedLockedFilePaths;
    NSMutableArray *_queuedSceneBlocksToExecuteAfterLaunch;
    FBApplicationProcessExitContext *_exitContext;
    FBProcessExecutionContext *_executionContext;
    FBApplicationWatchdog *_watchdog;
    _Bool _bootstrapped;
    _Bool _bootstrapFailed;
    _Bool _isBeingDebugged;
    _Bool _hasFinishedLaunching;
    BSMachSendRight *_taskNamePort;
    BSMachSendRight *_taskPort;
    BSMachSendRight *_gsEventPort;
    long long _terminationReason;
    int _defaultSceneSuspendType;
    FBProcessCPUStatistics *_cpuStatistics;
    double _execTime;
    BKSProcess *_bksProcess;
    BKSProcessAssertion *_launchProcessAssertion;
    BKSProcessAssertion *_continuousProcessAssertion;
    _Bool _beingDebugged;
    _Bool _supportsBackgroundTaskAssertions;
    _Bool _supportsSuspendOnLock;
    _Bool _recordingAudio;
    _Bool _nowPlayingWithAudio;
    _Bool _connectedToExternalAccessory;
    FBApplicationInfo *_applicationInfo;
}

+ (void)deleteAllJobs;
@property(nonatomic, getter=_queue_taskPort, setter=_queue_setTaskPort:) BSMachSendRight *taskPort; // @synthesize taskPort=_taskPort;
@property(readonly, retain, nonatomic, getter=_queue_cpuStatistics) FBProcessCPUStatistics *cpuStatistics; // @synthesize cpuStatistics=_cpuStatistics;
@property(nonatomic, getter=isConnectedToExternalAccessory) _Bool connectedToExternalAccessory; // @synthesize connectedToExternalAccessory=_connectedToExternalAccessory;
@property(nonatomic, getter=isNowPlayingWithAudio) _Bool nowPlayingWithAudio; // @synthesize nowPlayingWithAudio=_nowPlayingWithAudio;
@property(nonatomic, getter=isRecordingAudio) _Bool recordingAudio; // @synthesize recordingAudio=_recordingAudio;
@property(readonly, nonatomic, getter=_queue_supportsSuspendOnLock) _Bool supportsSuspendOnLock; // @synthesize supportsSuspendOnLock=_supportsSuspendOnLock;
@property(readonly, nonatomic, getter=_queue_supportsBackgroundTaskAssertions) _Bool supportsBackgroundTaskAssertions; // @synthesize supportsBackgroundTaskAssertions=_supportsBackgroundTaskAssertions;
@property(readonly, nonatomic, getter=_queue_hasFinishedLaunching) _Bool hasFinishedLaunching; // @synthesize hasFinishedLaunching=_hasFinishedLaunching;
- (void)process:(id)arg1 isBeingDebugged:(_Bool)arg2;
- (void)processWillExpire:(id)arg1;
- (void)process:(id)arg1 taskStateDidChange:(int)arg2;
- (void)watchdogFired:(id)arg1;
- (void)watchdogStarted:(id)arg1;
- (void)_queue_dropContinuousProcessAssertion;
- (void)_queue_dropLaunchProcessAssertion;
- (void)_queue_takeLaunchProcessAssertion;
- (_Bool)_queue_shouldWatchdogWithDeclineReason:(id *)arg1;
- (void)_queue_cancelWatchdogTimer;
- (void)_queue_startWatchdogTimerOfType:(int)arg1 withDuration:(double)arg2;
- (void)_queue_killForReason:(long long)arg1 andReport:(_Bool)arg2 withDescription:(id)arg3 completion:(id)arg4;
- (void)_queue_watchdogTerminateWithReason:(int)arg1 format:(id)arg2;
- (unsigned long long)_queue_noteExitedForForceQuit:(_Bool)arg1;
- (_Bool)_queue_isBeingPtraced;
- (_Bool)_queue_isBeingDebugged;
- (void)_queue_forceCrashReportWithReason:(int)arg1 description:(id)arg2;
- (void)_queue_waitToExecOrExit;
- (void)_queue_killWithSignal:(int)arg1;
- (void)_queue_doGracefulKillWithCompletion:(id)arg1 withWatchdog:(void)arg2;
- (id)_queue_lockedFilePathsIgnoringAllowed;
- (_Bool)_queue_consideredUnderLock;
- (int)_queue_calculateDefaultSceneSuspendType;
- (_Bool)_queue_supportsContinuousBackgroundMode;
- (_Bool)_queue_isSystemApplication;
- (int)_queue_ourTaskStateForBKSTaskState:(int)arg1;
- (id)_queue_name;
- (void)_queue_setAllowedLockedFilePaths:(id)arg1;
- (void)_queue_setBeingDebugged:(_Bool)arg1;
- (id)_queue_executionContext;
- (void)_queue_setTaskState:(int)arg1;
- (void)_queue_setVisibility:(int)arg1 stateMonitorVisibility:(int)arg2;
- (void)_queue_setVisibility:(int)arg1;
- (int)_queue_bksVisibilityForVisibility:(int)arg1;
- (void)_queue_invalidateBKSProcess;
- (void)_queue_setupBKSProcess;
- (id)_queue_internalDebugEnvironmentVariables;
- (_Bool)_queue_finishLaunch;
- (_Bool)_queue_bootstrapAndExec;
- (void)_queue_enumerateApplicationObserversWithBlock:(id)arg1;
- (id)_queue_UIRemoteAppPortName;
- (id)_queue_GSEventPortName;
- (id)_workspaceServer;
- (id)_workspace;
- (void)_queue_executeLaunchCompletionBlocks;
- (void)executeBlockAfterLaunchCompletes:(id)arg1;
- (void)_queue_sceneNeedsGracefulExit:(id)arg1 withExitCompletion:(id)arg2;
- (void)_queue_sceneLifecycleStateChanged:(id)arg1;
@property(readonly, nonatomic, getter=_queue_execTime) double execTime;
@property(readonly, nonatomic, getter=_queue_terminationReason) long long terminationReason;
@property(readonly, nonatomic, getter=_queue_defaultSuspendType) int defaultSuspendType;
- (void)_queue_setSupportsBackgroundTaskAssertions:(_Bool)arg1;
- (void)_queue_setSupportsSuspendOnLock:(_Bool)arg1;
- (void)_queue_processReallyDidExit;
- (void)_queue_processDidExit;
- (void)stop;
- (void)launchIfNecessary;
- (_Bool)bootstrapAndExec;
- (id)UIRemoteAppPortName;
- (id)GSEventPortName;
- (id)GSEventPort;
- (double)elapsedCPUTime;
- (id)_applicationWorkspace;
- (id)_createWorkspace;
- (_Bool)isSystemApplicationProcess;
- (_Bool)isApplicationProcess;
- (void)killForReason:(long long)arg1 andReport:(_Bool)arg2 withDescription:(id)arg3 completion:(id)arg4;
- (void)killForReason:(long long)arg1 andReport:(_Bool)arg2 withDescription:(id)arg3;
@property(retain, nonatomic) FBProcessExecutionContext *executionContext; // @dynamic executionContext;
@property(readonly, retain, nonatomic) FBApplicationProcessExitContext *exitContext;
@property(readonly, retain, nonatomic) FBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(nonatomic, getter=isBeingDebugged) _Bool beingDebugged; // @synthesize beingDebugged=_beingDebugged;
- (void)dealloc;
- (id)initWithApplicationInfo:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (id)initWithApplicationInfo:(id)arg1 callOutQueue:(id)arg2;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;

// Remaining properties
@property(nonatomic) id <FBApplicationProcessDelegate> delegate;

@end
