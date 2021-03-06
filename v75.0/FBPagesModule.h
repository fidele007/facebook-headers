/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>
#import <Facebook/FBDeferredJobsConfiguringModule.h>
#import <Facebook/FBFeedOptimisticPostCheckerConfiguringModule.h>
#import <Facebook/FBFeedSecondaryActionConfiguringModule.h>
#import <Facebook/FBFeedStorySupplementaryContentProviderConfiguringModule.h>
#import <Facebook/FBForceTouchConfiguringModule.h>
#import <Facebook/FBIntentHandlerConfiguringModule.h>
#import <Facebook/FBMenuItemConfiguringModule.h>
#import <Facebook/FBURLSegueConfiguringModule.h>
#import <Facebook/FBWWWSegueConfiguringModule.h>
#import <Facebook/FBFeedSecondaryActionConfiguringModule.h>
#import <Facebook/FBForceTouchConfiguringModule.h>
#import <Facebook/FBIntentHandlerConfiguringModule.h>
#import <Facebook/FBAppServiceConfiguringModule.h>
#import <Facebook/FBPluginProvider.h>

@class NSString;

@interface FBPagesModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED <FBDeferredJobsConfiguringModule, FBFeedOptimisticPostCheckerConfiguringModule, FBFeedSecondaryActionConfiguringModule, FBFeedStorySupplementaryContentProviderConfiguringModule, FBForceTouchConfiguringModule, FBIntentHandlerConfiguringModule, FBMenuItemConfiguringModule, FBURLSegueConfiguringModule, FBWWWSegueConfiguringModule, FBFeedSecondaryActionConfiguringModule, FBForceTouchConfiguringModule, FBIntentHandlerConfiguringModule, FBAppServiceConfiguringModule, FBPluginProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appServicesWithSession:(id)arg1 ;
+(id)intentHandlers:(id)arg1 providerMap:(id)arg2 ;
+(id)URLSegues:(id)arg1 ;
+(NSDictionary*)menuItemHandlers:(id)arg1 ;
+(id)deferredJobs;
+(id)WWWSegues:(id)arg1 ;
+(id)feedSecondaryActions;
+(Class)feedStorySupplementaryContentProvider;
+(id)feedOptimisticStoryPostCheckers;
+(id)forceTouchHandlers:(id)arg1 ;
+(id)pluginConfigurationsWithSession:(id)arg1 ;
-(id)supportedKeys;
-(id)ID;
@end

