/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>
#import <Facebook/FBAppServiceConfiguringModule.h>
#import <Facebook/FBFeedGraphQLConnectionManagerListenerConfiguringModule.h>
#import <Facebook/FBFeedSecondaryActionConfiguringModule.h>
#import <Facebook/FBGraphQLConfiguringModule.h>
#import <Facebook/FBIntentHandlerConfiguringModule.h>
#import <Facebook/FBNuxPresenterConfiguringModule.h>
#import <Facebook/FBPluginProvider.h>
#import <Facebook/FBPublishingListenerProvidingPlugin.h>
#import <Facebook/FBStartupDestination.h>
#import <Facebook/FBURLSegueConfiguringModule.h>

@protocol FBNewsFeedViewControllerProviding;
@class FBDeletedMediaInvalidationController, FBFeedLoadingViewController, FBPagingContainerViewController, UIViewController, FBGoodFriendsGating, NSString;

@interface FBFeedModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED <FBAppServiceConfiguringModule, FBFeedGraphQLConnectionManagerListenerConfiguringModule, FBFeedSecondaryActionConfiguringModule, FBGraphQLConfiguringModule, FBIntentHandlerConfiguringModule, FBNuxPresenterConfiguringModule, FBPluginProvider, FBPublishingListenerProvidingPlugin, FBStartupDestination, FBURLSegueConfiguringModule> {

	FBDeletedMediaInvalidationController* _deletedMediaInvalidationController;
	FBFeedLoadingViewController* _feedLoadingViewController;
	FBPagingContainerViewController* _closeFriendsContainerViewController;
	UIViewController*<FBNewsFeedViewControllerProviding> _newsFeedViewController;
	FBPagingContainerViewController* _topicFeedsViewController;
	FBPagingContainerViewController* _splitPagingContainerViewController;
	FBGoodFriendsGating* _goodFriendsGatingBackingIvarLazilyLoaded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appServicesWithSession:(id)arg1 ;
+(id)intentHandlers:(id)arg1 providerMap:(id)arg2 ;
+(id)URLSegues:(id)arg1 ;
+(id)feedSecondaryActions;
+(id)pluginConfigurationsWithSession:(id)arg1 ;
+(id)nuxPresenterFactoriesWithSession:(id)arg1 ;
+(id)destinationIdentifier;
+(void)prefetchContentWithSession:(id)arg1 ;
+(id)loggingConfiguration;
+(id)criticalServicesWithSession:(id)arg1 ;
+(id)publishingListenersForUserSession:(id)arg1 ;
+(id)defaultGraphQLParams:(id)arg1 ;
+(id)connectionManagerListeners;
+(void)setAlwaysHidePublisherBar:(BOOL)arg1 ;
+(void)setCustomNewsFeedViewControllerProvider:(/*^block*/id)arg1 ;
-(id)viewControllerForMenuItem:(id)arg1 ;
-(id)supportedKeys;
-(id)defaultMenuItem;
-(BOOL)shouldClearBookmarkCountOnTap;
-(id)initWithSession:(id)arg1 providerMap:(id)arg2 ;
-(id)viewControllerForNewsFeed;
-(void)_applicationDidFinishEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(id)_projectViewControllerForFeedModule;
-(id)_mainNewsFeedController;
-(id)viewControllerForSplitFeeds;
-(id)containerViewControllerForCloseFriendsFeed;
-(id)viewControllerForFeedLoadingModule;
-(id)goodFriendsGating;
-(id)viewControllerForFeedModule;
-(void)dealloc;
-(id)ID;
@end

