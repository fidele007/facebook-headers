/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBNotificationsListChangesetWriting.h>
#import <Facebook/FBNotificationsNotificationChangeProvidingListener.h>
#import <Facebook/FBNotificationsSyncManagerListener.h>
#import <Facebook/FBReachabilityListener.h>

@class FBNotificationsViewSeenStateUpdateHelper, FBNotificationsImpressionLogger, FBNotificationsTabVisitSessionManager, FBNotificationsForegroundBackgroundEventListenerAnnouncer, FBNotificationsPillManager, NSString;

@interface FBNotificationsSectionComponentController : FBSectionComponentController <FBNotificationsListChangesetWriting, FBNotificationsNotificationChangeProvidingListener, FBNotificationsSyncManagerListener, FBReachabilityListener> {

	BOOL _onScreen;
	BOOL _initialChangesetApplied;
	BOOL _showTailSpinner;
	unsigned long long _currentReachabilityState;
	FBNotificationsViewSeenStateUpdateHelper* _notificationsViewSeenStateUpdateHelper;
	FBNotificationsImpressionLogger* _impressionLogger;
	FBNotificationsTabVisitSessionManager* _tabVisitSessionManager;
	FBNotificationsForegroundBackgroundEventListenerAnnouncer* _foregroundBackgroundListenerAnnouncer;
	FBNotificationsPillManager* _pillManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned long long)arg2 withLoadDataReason:(long long)arg3 changeset:(id)arg4 ;
-(void)notificationsSyncManagerFinishedInitializing:(id)arg1 ;
-(id)viewStateManager;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)notificationChangeProvider:(id)arg1 didUpdateWithChanges:(id)arg2 ;
-(void)_applicationDidEnterForeground:(id)arg1 ;
-(void)componentWillAppear;
-(void)didRequestReload;
-(id)myToolbox;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)componentDidDisappear;
-(void)componentWillDisappear;
-(void)enqueueArrayChanges:(id)arg1 userInfo:(id)arg2 ;
-(void)_addChangeset:(id)arg1 ;
-(void)componentDidAppear;
-(void)_addInitialChangeset;
-(void)_setShowTailSpinner:(BOOL)arg1 toolbox:(id)arg2 ;
-(void)_stopPTRSpinner;
-(void)_stopPTRSpinnerIfNotLoadingHeadWithSyncManager:(id)arg1 ;
-(void)_showNoContentOrErrorViewIfNeededWithSyncManager:(id)arg1 ;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)didLoad;
@end

