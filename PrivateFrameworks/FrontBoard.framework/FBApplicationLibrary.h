/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class LSApplicationWorkspace, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FBApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    LSApplicationWorkspace *_applicationWorkspace;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observerQueue_observers;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_workQueue_installedApplicationsByBundleID;
    NSMutableDictionary *_workQueue_placeholdersByBundleID;
    _Bool _workQueue_usingNetwork;
    unsigned long long _workQueue_synchronizationActionCount;
    NSMutableArray *_workQueue_pendingSynchronizationExecutionBlocks;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    _Bool _usingNetwork;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isUsingNetwork) _Bool usingNetwork; // @synthesize usingNetwork=_usingNetwork;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)networkUsageChanged:(_Bool)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (_Bool)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2;
- (void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1;
- (id)_workQueue_placeholderForProxy:(id)arg1 updateExistingIfNecessary:(_Bool)arg2 createIfNecessary:(_Bool)arg3 wasCreated:(_Bool *)arg4;
- (id)_workQueue_applicationInfoForProxy:(id)arg1 createIfNecessary:(_Bool)arg2 wasCreated:(_Bool *)arg3;
- (id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(_Bool)arg2 createdPlaceholders:(const id *)arg3 existingApplications:(const id *)arg4 unmappedProxies:(const id *)arg5;
- (id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(_Bool)arg2 createIfNecessary:(_Bool)arg3 createdPlaceholders:(const id *)arg4 existingPlaceholders:(const id *)arg5 unmappedProxies:(const id *)arg6;
- (void)_reload;
- (void)_workQueue_decrementSynchronizationActionCount;
- (void)_workQueue_incrementSynchronizationActionCount;
- (void)_workQueue_executeInstallSynchronizationBlock:(id)arg1;
- (void)_sendToObservers:(id)arg1 networkUsageDidChange:(id)arg2 usingNetwork:(_Bool)arg3;
- (void)_sendToObservers:(id)arg1 didRemoveApplications:(id)arg2;
- (void)_sendToObservers:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3;
- (void)_sendToObservers:(id)arg1 didAddApplications:(id)arg2;
- (void)_sendToObservers:(id)arg1 didCancelPlaceholders:(id)arg2;
- (void)_sendToObservers:(id)arg1 didAddPlaceholders:(id)arg2;
- (void)_dispatchToObservers:(id)arg1 synchronously:(_Bool)arg2 block:(id)arg3;
- (id)_observers;
- (void)executeOrPendInstallSynchronizationBlock:(id)arg1;
- (id)description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)uninstallApplication:(id)arg1 completion:(id)arg2;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (id)allPlaceholders;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (id)allInstalledApplications;
- (void)dealloc;
- (id)init;

@end

