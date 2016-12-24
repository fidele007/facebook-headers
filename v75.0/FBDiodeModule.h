/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>
#import <Facebook/FBClassProvidable.h>
#import <Facebook/FBAppServiceConfiguringModule.h>
#import <Facebook/FBIntentHandlerConfiguringModule.h>
#import <Facebook/FBJewelConfiguringModule.h>
#import <Facebook/FBMessengerAuxiliaryViewControllerCreating.h>
#import <Facebook/FBURLSegueConfiguringModule.h>
#import <Facebook/FBPushNotificationHandler.h>

@class FBMessengerQuickPromotionInterstitialViewController, FBUserSession, FBDiodeModuleLazyDependencies, FBMessengerInboxCountsManager, NSString;

@interface FBDiodeModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED <FBClassProvidable, FBAppServiceConfiguringModule, FBIntentHandlerConfiguringModule, FBJewelConfiguringModule, FBMessengerAuxiliaryViewControllerCreating, FBURLSegueConfiguringModule, FBPushNotificationHandler> {

	FBMessengerQuickPromotionInterstitialViewController* _menuItemQPInterstitialViewController;
	BOOL _quickPromotionBasedDiodeEnabled;
	FBUserSession* _session;
	FBDiodeModuleLazyDependencies* _lazyDependencies;
	FBMessengerInboxCountsManager* _messengerInboxCountsManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appServicesWithSession:(id)arg1 ;
+(id)instanceForSession:(id)arg1 providerMap:(id)arg2 ;
+(id)providerModule;
+(id)jewelManager:(id)arg1 ;
+(id)intentHandlers:(id)arg1 providerMap:(id)arg2 ;
+(id)URLSegues:(id)arg1 ;
+(void)setDisableDiodeService;
+(id)providerModuleWithConfigurator:(id)arg1 ;
-(void)cleanupSession;
-(id)viewControllerForMenuItem:(id)arg1 ;
-(id)supportedKeys;
-(id)defaultMenuItem;
-(BOOL)shouldRedirectFromBookmarkForMenuItem:(id)arg1 ;
-(void)performRedirectFromBookmarkForMenuItem:(id)arg1 ;
-(BOOL)handleMenuItem:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 ;
-(void)handleAPNSWithPayLoad:(id)arg1 launchedByUser:(BOOL)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)auxiliaryMessengerViewControllerWithController:(id)arg1 ;
-(id)initWithSession:(id)arg1 lazyDependencies:(id)arg2 ;
-(id)defaultDisplayName;
-(id)displayNameForMessengerRedirectMenuItem;
-(void)dealloc;
-(id)displayName;
-(id)ID;
@end

