/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBSLocalNotificationClient : NSObject
{
}

+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)setScheduledLocalNotifications:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(_Bool)arg3;
+ (void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(_Bool)arg3;
+ (void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)scheduledLocalNotifications;
+ (void)setScheduledLocalNotifications:(id)arg1;
+ (void)cancelAllLocalNotifications;
+ (void)cancelLocalNotification:(id)arg1;
+ (void)scheduleLocalNotification:(id)arg1;
+ (void)_scheduleLocalNotifications:(id)arg1 cancel:(_Bool)arg2 replace:(_Bool)arg3 optionalBundleIdentifier:(id)arg4;
+ (void)_scheduleLocalNotifications:(id)arg1 cancel:(_Bool)arg2 replace:(_Bool)arg3 optionalBundleIdentifier:(id)arg4 waitUntilDone:(_Bool)arg5;
+ (id)getPendingNotification;
+ (id)currentUserNotificationSettingsForBundleID:(id)arg1;
+ (id)currentUserNotificationSettings;
+ (void)migrateUserNotificationSettingsForBundleIdentifierPushSettingsPairs:(id)arg1;
+ (void)registerUserNotificationSettings:(id)arg1;
+ (unsigned int)currentAllowedNotificationTypesForBundleID:(id)arg1;

@end

