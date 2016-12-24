/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBViewControllerAppearanceLifecycleListener.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>
#import <Facebook/FBNotificationsPullToRefreshManagingListener.h>

@class FBNotificationsComponentDataSourceWrapper, FBViewControllerAppearanceLifecycleListenerAnnouncer, NSNotificationCenter, FBNotificationsFriendingIntermixedPullToRefreshManager, NSMutableSet, NSString;

@interface FBIntermixedTabFriendRequestLoggingHelper : NSObject <FBViewControllerAppearanceLifecycleListener, FBComponentCellAppearanceEventListener, FBComponentTableViewDataSourceSelectionEventListener, FBNotificationsPullToRefreshManagingListener> {

	FBNotificationsComponentDataSourceWrapper* _componentDataSource;
	FBViewControllerAppearanceLifecycleListenerAnnouncer* _lifecycleAnnouncer;
	NSNotificationCenter* _notificationCenter;
	FBNotificationsFriendingIntermixedPullToRefreshManager* _pullToRefreshManager;
	BOOL _isInView;
	NSMutableSet* _seenFriendRequestIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewControllerViewWillAppear:(BOOL)arg1 ;
-(void)viewControllerViewDidDisappear:(BOOL)arg1 ;
-(id)initWithComponentDataSource:(id)arg1 controllerLifecycleAnnouncer:(id)arg2 notificationCenter:(id)arg3 ;
-(void)_logFriendRequestImpression;
-(void)_saveVisibleFriendRequests;
-(void)_didEnterBackground;
-(void)pullToRefreshManagerDidTriggerRefresh:(id)arg1 ;
-(void)setUpWithPullToRefreshManager:(id)arg1 ;
-(void)dealloc;
@end
