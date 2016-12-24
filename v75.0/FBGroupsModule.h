/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>
#import <Facebook/FBFeedSecondaryActionConfiguringModule.h>
#import <Facebook/FBForceTouchConfiguringModule.h>
#import <Facebook/FBIntentHandlerConfiguringModule.h>
#import <Facebook/FBPluginProvider.h>
#import <Facebook/FBViewStoryHandlerForActionLinkConfiguringModule.h>
#import <Facebook/FBWWWSegueConfiguringModule.h>

@class FBGroupCreationFlowCoordinator, FBGroupsLandingWildeActionHandler, NSString;

@interface FBGroupsModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED <FBFeedSecondaryActionConfiguringModule, FBForceTouchConfiguringModule, FBIntentHandlerConfiguringModule, FBPluginProvider, FBViewStoryHandlerForActionLinkConfiguringModule, FBWWWSegueConfiguringModule> {

	FBGroupCreationFlowCoordinator* _creationFlowCoordinator;
	FBGroupsLandingWildeActionHandler* _groupsLandingActionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentHandlers:(id)arg1 providerMap:(id)arg2 ;
+(id)WWWSegues:(id)arg1 ;
+(id)feedSecondaryActions;
+(id)forceTouchHandlers:(id)arg1 ;
+(id)pluginConfigurationsWithSession:(id)arg1 ;
+(BOOL)URLhasValidFBID:(id)arg1 ;
+(id)viewStoryHandlerForActionLinksWithSession:(id)arg1 ;
-(id)URLSegues;
-(id)viewControllerForMenuItem:(id)arg1 ;
-(id)supportedKeys;
-(BOOL)shouldClearBookmarkCountOnTap;
-(id)_groupsReactViewControllerForRoute:(id)arg1 url:(id)arg2 navigatorOptions:(id)arg3 ;
-(id)_groupsLandingViewController;
-(id)_webViewControllerForMenuItem:(id)arg1 ;
-(id)_groupFeedViewControllerForGroupFBID:(id)arg1 hoistedStoryIDs:(id)arg2 ;
-(void)didTapCreateGroupInNavBar:(id)arg1 ;
-(void)preloadReactNativeBridgeForGroupFeed:(BOOL*)arg1 ;
-(id)_gridAlbumsViewController:(id)arg1 groupPhotos:(id)arg2 ;
-(id)_segmentedAlbumsViewController:(id)arg1 groupPhotos:(id)arg2 ;
-(id)creationFlowCoordinator;
-(void)_prefillCreationFlowWithURL:(id)arg1 creationFlowCoordinator:(id)arg2 ;
-(id)ID;
@end
