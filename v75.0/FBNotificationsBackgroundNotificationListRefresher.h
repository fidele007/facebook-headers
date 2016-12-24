/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsSyncManagerListener.h>

@protocol FBNotificationsBackgroundNotificationListRefresherLogging, FBNotificationsBackgroundNotificationListRefresherDelegate;
@class FBUserSession, FBNotificationsSyncManager, FBNotificationsWildeNotificationsService, NSString;

@interface FBNotificationsBackgroundNotificationListRefresher : NSObject <FBNotificationsSyncManagerListener> {

	FBUserSession* _session;
	FBNotificationsSyncManager* _syncManager;
	FBNotificationsWildeNotificationsService* _notificationsService;
	long long _loadReason;
	id<FBNotificationsBackgroundNotificationListRefresherLogging> _logger;
	BOOL _finishedPersistence;
	BOOL _streamLoadFinished;
	BOOL _hasStartedRefreshing;
	BOOL _notificationsWereUpdated;
	BOOL _refreshOnceDataSourceFinishesInitialization;
	id<FBNotificationsBackgroundNotificationListRefresherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNotificationsBackgroundNotificationListRefresherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned long long)arg2 withLoadDataReason:(long long)arg3 changeset:(id)arg4 ;
-(void)notificationsSyncManagerFinishedInitializing:(id)arg1 ;
-(void)_startListeningToAnnouncements;
-(void)_startNotificationsLoad;
-(void)_streamLoadFinishedWithChangeset:(id)arg1 isHeadLoad:(BOOL)arg2 ;
-(void)_finishRequestIfApplicable;
-(void)_refreshOnDataSourceInitializationIfNeeded;
-(void)_finishRequestWithNoData;
-(void)_stopListeningToAnnouncements;
-(id)initWithSession:(id)arg1 notificationsService:(id)arg2 delegate:(id)arg3 loadReason:(long long)arg4 logger:(id)arg5 ;
-(void)refreshNotificationList;
-(void)setDelegate:(id<FBNotificationsBackgroundNotificationListRefresherDelegate>)arg1 ;
-(id)init;
-(id<FBNotificationsBackgroundNotificationListRefresherDelegate>)delegate;
@end

