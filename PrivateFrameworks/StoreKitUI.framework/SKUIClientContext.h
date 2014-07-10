/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SUClientInterfaceDelegatePrivate-Protocol.h"

@class IKAppContext, NSArray, NSBundle, NSDictionary, NSMapTable, NSMutableArray, NSString, SKUIApplicationController, SKUILocalizedStringDictionary, SKUIStoreDialogController, SKUIURL, SSURLBag, SSVPlatformContext, SUClientInterface, SUStorePageViewController;

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate>
{
    NSString *_additionalPurchaseParameters;
    SKUIApplicationController *_applicationController;
    NSBundle *_bundle;
    SUClientInterface *_clientInterface;
    NSDictionary *_configurationDictionary;
    SKUIStoreDialogController *_dialogController;
    SUStorePageViewController *_legacyHTMLSidepackViewController;
    SKUILocalizedStringDictionary *_localizedStrings;
    NSString *_metricsConfigurationIdentifier;
    NSMapTable *_metricsPageContexts;
    NSMutableArray *_navigationHistory;
    NSString *_navigationHistoryPersistenceKey;
    NSString *_purchaseAffiliateIdentifier;
    SKUIURL *_purchaseReferrerURL;
    long long _purchaseURLBagType;
    IKAppContext *_scriptAppContext;
    NSString *_storeFrontIdentifier;
    SSURLBag *_urlBag;
    long long _userInterfaceIdiomOverride;
}

+ (id)_configurationDictionaryWithBagDictionary:(id)arg1;
+ (id)_cachePathForStoreFrontIdentifier:(id)arg1;
+ (id)defaultContext;
@property(nonatomic) long long userInterfaceIdiomOverride; // @synthesize userInterfaceIdiomOverride=_userInterfaceIdiomOverride;
@property(readonly, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(retain, nonatomic, getter=_scriptAppContext, setter=_setScriptAppContext:) IKAppContext *_scriptAppContext; // @synthesize _scriptAppContext;
@property(copy, nonatomic) SKUIURL *purchaseReferrerURL; // @synthesize purchaseReferrerURL=_purchaseReferrerURL;
@property(copy, nonatomic) NSString *navigationHistoryPersistenceKey; // @synthesize navigationHistoryPersistenceKey=_navigationHistoryPersistenceKey;
@property(copy, nonatomic) NSString *metricsConfigurationIdentifier; // @synthesize metricsConfigurationIdentifier=_metricsConfigurationIdentifier;
@property(readonly, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property(nonatomic, getter=_applicationController, setter=_setApplicationController:) __weak SKUIApplicationController *_applicationController; // @synthesize _applicationController;
- (void).cxx_destruct;
- (id)description;
- (void)_setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (id)_navigationHistory;
- (void)_setPurchaseURLBagType:(long long)arg1;
- (void)_setPurchaseAffiliateIdentifier:(id)arg1;
- (void)_setAdditionalPurchaseParameters:(id)arg1;
- (void)_prepareLegacyHTMLSidepack;
- (id)_dequeueLegacyHTMLSidepackViewController;
- (void)sendOnXEventWithDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3;
@property(readonly, nonatomic) SSVPlatformContext *platformContext;
- (void)loadValueForConfigurationKey:(id)arg1 completionBlock:(id)arg2;
- (void)customizePurchase:(id)arg1;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2;
- (void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
- (id)valueForConfigurationKey:(id)arg1;
@property(readonly, nonatomic) SSURLBag *URLBag;
- (id)tabBarItemsForStyle:(long long)arg1;
- (void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2;
- (void)pushNavigationHistoryPageIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *navigationHistory;
- (id)metricsPageContextForViewController:(id)arg1;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedAlertWithError:(id)arg1;
- (void)getDefaultMetricsControllerWithCompletionBlock:(id)arg1;
- (void)dealloc;
- (id)initWithConfigurationDictionary:(id)arg1;

@end

