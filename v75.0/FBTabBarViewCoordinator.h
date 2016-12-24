/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTabNavigationViewControllerDelegate.h>
#import <Facebook/FBTabBarContainerViewControllerAppearanceTransitioningListener.h>

@protocol FBTabBarViewCoordinatorDelegate;
@class FBUserSession, FBNavigationViewCoordinatorConfig, FBAppSectionManager, FBAppModuleManager, NSDate, FBTabBarContainerViewControllerAppearanceTransitioningListenerAnnouncer, FBTabNavigationViewController, FBTabBarContainerViewController, UIViewController, NSString;

@interface FBTabBarViewCoordinator : NSObject <FBTabNavigationViewControllerDelegate, FBTabBarContainerViewControllerAppearanceTransitioningListener> {

	FBUserSession* _session;
	FBNavigationViewCoordinatorConfig* _config;
	FBAppSectionManager* _appSectionManager;
	FBAppModuleManager* _moduleManager;
	NSDate* _backgroundedDate;
	FBTabBarContainerViewControllerAppearanceTransitioningListenerAnnouncer* _tabBarContainerViewControllerAnnouncer;
	FBTabNavigationViewController* _tabBarNavigationViewController;
	FBTabBarContainerViewController* _tabBarContainerViewController;
	UIViewController* _previouslyUpdatedViewController;
	BOOL _browserMultiTabsEnabled;
	UIViewController* _contentViewController;
	double _resetToDefaultTabTimeout;
	id<FBTabBarViewCoordinatorDelegate> _delegate;

}

@property (nonatomic,retain) UIViewController * contentViewController;                                       //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) BOOL isNuxBeingDisplayed; 
@property (assign,nonatomic) double resetToDefaultTabTimeout;                                                //@synthesize resetToDefaultTabTimeout=_resetToDefaultTabTimeout - In the implementation block
@property (assign,nonatomic) BOOL alwaysExpandLeftTabBar; 
@property (nonatomic,readonly) FBTabBarContainerViewController * tabBarContainerViewController; 
@property (assign,nonatomic,__weak) id<FBTabBarViewCoordinatorDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateForVisibleViewController:(id)arg1 navigationOperation:(long long)arg2 ;
-(void)_didForegroundWithNotification:(id)arg1 ;
-(void)_didBackgroundWithNotification:(id)arg1 ;
-(void)_handleRotation;
-(void)setMinimizedTabBarView:(id)arg1 ;
-(BOOL)alwaysExpandLeftTabBar;
-(void)setAlwaysExpandLeftTabBar:(BOOL)arg1 ;
-(id)_selectedRootViewController;
-(void)tabBarContainerViewControllerViewWillAppear:(BOOL)arg1 ;
-(void)tabBarContainerViewControllerViewDidAppear:(BOOL)arg1 ;
-(id)initWithViewCoordinatorConfig:(id)arg1 tabBar:(id)arg2 appSectionManager:(id)arg3 delegate:(id)arg4 session:(id)arg5 ;
-(FBTabBarContainerViewController *)tabBarContainerViewController;
-(double)resetToDefaultTabTimeout;
-(void)setResetToDefaultTabTimeout:(double)arg1 ;
-(void)updateSelectedTab;
-(BOOL)tabNavigationViewController:(id)arg1 shouldHandleTapOnAlreadySelectedTabItem:(id)arg2 ;
-(void)tabNavigationViewController:(id)arg1 didLongPressOnTabWithAppSectionID:(id)arg2 ;
-(BOOL)isNuxBeingDisplayed;
-(void)setDelegate:(id<FBTabBarViewCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(id<FBTabBarViewCoordinatorDelegate>)delegate;
-(id)rootViewController;
-(void)setNavigationBar:(id)arg1 ;
-(UIViewController *)contentViewController;
-(void)setContentViewController:(UIViewController *)arg1 ;
@end
