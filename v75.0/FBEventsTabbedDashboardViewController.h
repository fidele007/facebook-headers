/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBEmbeddedTabBarListControllerListener.h>
#import <Facebook/FBEventsComposerViewControllerDelegate.h>
#import <Facebook/FBEventsDashboardIntentHandlerDelegate.h>
#import <Facebook/FBNuxBannerControllerDelegate.h>

@protocol FBEmbeddedTabBarListController, FBNuxBannerViewController;
@class FBEventActionResponder, FBEventsDashboardToolbox, FBUserSession, FBEventAnalyticTracker, FBScenePathContext, FBScenePath, NSArray, FBEmbeddedTabController, FBEventsDashboardCalendarViewController, FBTransientViewStateManager, UIViewController, NSString;

@interface FBEventsTabbedDashboardViewController : UIViewController <FBEmbeddedTabBarListControllerListener, FBEventsComposerViewControllerDelegate, FBEventsDashboardIntentHandlerDelegate, FBNuxBannerControllerDelegate> {

	FBEventActionResponder* _actionResponder;
	FBEventsDashboardToolbox* _toolbox;
	FBUserSession* _session;
	FBEventsDashboardScrollCounts _scrollCounts;
	FBEventAnalyticTracker* _tracker;
	FBScenePathContext* _scenePathContext;
	FBScenePath* _scenePath;
	NSArray* _trackingCodes;
	long long _initialTabIndex;
	id<FBEmbeddedTabBarListController> _tabBarListController;
	FBEmbeddedTabController* _embeddedTabController;
	NSArray* _tabConfigs;
	FBEventsDashboardCalendarViewController* _calendarVC;
	FBTransientViewStateManager* _viewStateManager;
	UIViewController*<FBNuxBannerViewController> _nuxBannerController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(void)eventComposerDidCancel:(id)arg1 ;
-(void)eventComposer:(id)arg1 didCreateEvent:(id)arg2 ;
-(void)eventComposer:(id)arg1 didEditEvent:(id)arg2 ;
-(void)eventComposer:(id)arg1 didDeleteEvent:(id)arg2 ;
-(void)setAnalyticsFromModule:(id)arg1 ;
-(void)_dismissEventsComposer:(id)arg1 ;
-(void)nuxBannerControllerDidDismissBanner:(id)arg1 ;
-(void)didSelectTabAtIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(void)didLoadContentView:(id)arg1 forTabAtIndex:(unsigned long long)arg2 ;
-(void)didUpdateHeaderViewSize:(CGSize)arg1 ;
-(void)handleDashboardIntentWithTabIndex:(long long)arg1 ;
-(void)didTapCreate:(id)arg1 ;
-(void)_addTabBarToView;
-(void)_showNUXBannerIfNeeded;
-(void)_navigateToEventWithGraphQLID:(id)arg1 ;
-(id)initWithInitialTabIndex:(long long)arg1 session:(id)arg2 tracker:(id)arg3 trackingCodes:(id)arg4 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

