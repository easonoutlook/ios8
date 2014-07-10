/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AXValidationReportingServices, NSMutableArray, NSString;

@interface AXValidationManager : NSObject
{
    _Bool _shouldLogToConsole;
    _Bool _shouldCrashOnError;
    _Bool _shouldReportToServer;
    _Bool _forceDoNotReport;
    _Bool _debugBuild;
    unsigned long long _numberOfValidationErrors;
    NSString *_validationTargetName;
    NSString *_overrideProcessName;
    NSMutableArray *_consoleErrorMessages;
    AXValidationReportingServices *_validationReportingServices;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AXValidationReportingServices *validateionReportingServices; // @synthesize validateionReportingServices=_validationReportingServices;
@property(nonatomic, getter=isDebugBuild) _Bool debugBuild; // @synthesize debugBuild=_debugBuild;
@property(retain, nonatomic) NSMutableArray *consoleErrorMessages; // @synthesize consoleErrorMessages=_consoleErrorMessages;
@property(copy, nonatomic) NSString *overrideProcessName; // @synthesize overrideProcessName=_overrideProcessName;
@property(copy, nonatomic) NSString *validationTargetName; // @synthesize validationTargetName=_validationTargetName;
@property(nonatomic) _Bool forceDoNotReport; // @synthesize forceDoNotReport=_forceDoNotReport;
@property(nonatomic) unsigned long long numberOfValidationErrors; // @synthesize numberOfValidationErrors=_numberOfValidationErrors;
@property(nonatomic) _Bool shouldReportToServer; // @synthesize shouldReportToServer=_shouldReportToServer;
@property(nonatomic) _Bool shouldCrashOnError; // @synthesize shouldCrashOnError=_shouldCrashOnError;
@property(nonatomic) _Bool shouldLogToConsole; // @synthesize shouldLogToConsole=_shouldLogToConsole;
- (void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (_Bool)installSafeCategory:(id)arg1 canInteractWithTargetClass:(_Bool)arg2;
- (_Bool)installSafeCategory:(id)arg1;
- (_Bool)validateProtocol:(id)arg1 hasProperty:(id)arg2;
- (_Bool)validateProtocol:(id)arg1 hasRequiredClassMethod:(id)arg2;
- (_Bool)validateProtocol:(id)arg1 hasOptionalClassMethod:(id)arg2;
- (_Bool)validateProtocol:(id)arg1 hasRequiredInstanceMethod:(id)arg2;
- (_Bool)validateProtocol:(id)arg1 hasOptionalInstanceMethod:(id)arg2;
- (_Bool)validateProtocol:(id)arg1 hasMethod:(id)arg2 isInstanceMethod:(_Bool)arg3 isRequired:(_Bool)arg4;
- (_Bool)validateClass:(id)arg1 conformsToProtocol:(id)arg2;
- (_Bool)validateClass:(id)arg1 hasProperty:(id)arg2;
- (_Bool)validateClass:(id)arg1 hasClassMethod:(id)arg2;
- (_Bool)validateClass:(id)arg1 hasInstanceMethod:(id)arg2;
- (_Bool)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(char *)arg3;
- (_Bool)validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(char *)arg3;
- (_Bool)_validateClass:(id)arg1 hasMethod:(id)arg2 methodType:(int)arg3 returnType:(id)arg4 arguments:(id)arg5;
- (_Bool)_validateClass:(id)arg1 hasMethod:(id)arg2 methodType:(int)arg3;
- (_Bool)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 withType:(char *)arg3;
- (_Bool)validateClass:(id)arg1 hasInstanceVariable:(id)arg2;
- (_Bool)validateClass:(id)arg1 isKindOfClass:(id)arg2;
- (_Bool)validateClass:(id)arg1;
- (void)_printConsoleReport:(_Bool)arg1 isDelayed:(_Bool)arg2;
- (void)installSafeCategories:(id)arg1 afterDelay:(void)arg2 validationTargetName:(double)arg3 overrideProcessName:(id)arg4 forceDoNotReport:(id)arg5;
- (void)installSafeCategories:(id)arg1 afterDelay:(void)arg2 validationTargetName:(double)arg3 overrideProcessName:(id)arg4;
- (void)performValidations:(id)arg1 withPreValidationHandler:(void)arg2 postValidationHandler:(id)arg3 safeCategoryInstallationHandler:(void)arg4;
- (void)performValidations:(id)arg1 withPreValidationHandler:(void)arg2 postValidationHandler:(id)arg3;
- (void)dealloc;
- (id)init;

@end

