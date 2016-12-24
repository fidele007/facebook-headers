/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsPullToRefreshManagingListener.h>
#import <Facebook/FBNotificationsTabVisitSessionListener.h>
#import <Facebook/FBNotificationsForegroundBackgroundEventListener.h>

@protocol FBNotificationsPullToRefreshManaging;
@class FBNotificationsRichNotificationsManager, NSDate, FBNotificationsTabVisitSessionManager, NSString;

@interface FBNotificationsFriendingRichNotificationsAutoReloadingManager : NSObject <FBNotificationsPullToRefreshManagingListener, FBNotificationsTabVisitSessionListener, FBNotificationsForegroundBackgroundEventListener> {

	FBNotificationsRichNotificationsManager* _richNotificationsManager;
	NSDate* _lastRefreshedTime;
	id<FBNotificationsPullToRefreshManaging> _pullToRefreshManager;
	FBNotificationsTabVisitSessionManager* _tabVisitStateManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pullToRefreshManagerDidTriggerRefresh:(id)arg1 ;
-(id)initWithRichNotificationsManager:(id)arg1 tabVisitStateManager:(id)arg2 ;
-(void)setupWithPullToRefreshManager:(id)arg1 ;
-(void)appDidEnterBackgroundWithNotificationsViewOnScreen;
-(void)appDidEnterForegroundWithNotificationsViewOnScreen;
-(void)didEnterNewTabVisitSession;
-(void)didLeaveCurrentTabVisitSession;
-(void)_reloadIfCooledDown;
@end

