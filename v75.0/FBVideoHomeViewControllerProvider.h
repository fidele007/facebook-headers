/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInvalidating.h>
#import <Facebook/FBVideoHomePrefetchControllerDelegate.h>
#import <Facebook/FBVideoHomeSessionStateListener.h>
#import <Facebook/FBVideoHomeGuideDataFetcherListener.h>

@class FBUserSession, FBVideoHomeViewController, FBVideoHomeGuidePrefetchObserver, FBVideoHomeGuideGQLCCFactory, FBVideoHomeGuideDataFetcher, FBVideoHomePrefetchController, FBVideoHomeGuideBadgeUpdateSubscriptionHandler, FBVideoHomeDataSource, FBVideoHomeDataLivenessManager, FBVideoHomeReactionStyleMapper, FBVideoHomePlaceholderDataManager, FBVideoHomeJewelManager, FBVideoHomeNotificationsSeenStateManager, FBVideoHomeInAppNotificationDataSource, FBVideoHomeDataStatusLogger, FBVideoHomeSession, FBVideoHomeSessionController, NSString;

@interface FBVideoHomeViewControllerProvider : NSObject <FBInvalidating, FBVideoHomePrefetchControllerDelegate, FBVideoHomeSessionStateListener, FBVideoHomeGuideDataFetcherListener> {

	FBUserSession* _session;
	FBVideoHomeViewController* _viewController;
	FBVideoHomeGuidePrefetchObserver* _prefetchObserver;
	FBVideoHomeGuideGQLCCFactory* _guideGQLCCFactory;
	FBVideoHomeGuideDataFetcher* _guideDataFetcher;
	FBVideoHomePrefetchController* _prefetchController;
	FBVideoHomeGuideBadgeUpdateSubscriptionHandler* _guideBadgeUpdateHandler;
	FBVideoHomeDataSource* _dataSource;
	FBVideoHomeDataLivenessManager* _livenessManager;
	FBVideoHomeReactionStyleMapper* _styleMapper;
	FBVideoHomePlaceholderDataManager* _placeholderDataManager;
	FBVideoHomeJewelManager* _jewelManager;
	FBVideoHomeNotificationsSeenStateManager* _seenStateManager;
	FBVideoHomeInAppNotificationDataSource* _beeperDataSource;
	FBVideoHomeDataStatusLogger* _dataStatusLogger;
	BOOL _invalidated;
	/*^block*/id _onBadgeCountMaxUpdate;
	FBVideoHomeSession* _videoHomeSession;
	FBVideoHomeSessionController* _videoHomeSessionController;

}

@property (nonatomic,copy) id onBadgeCountMaxUpdate;                                                   //@synthesize onBadgeCountMaxUpdate=_onBadgeCountMaxUpdate - In the implementation block
@property (nonatomic,readonly) FBVideoHomeSession * videoHomeSession;                                  //@synthesize videoHomeSession=_videoHomeSession - In the implementation block
@property (nonatomic,readonly) FBVideoHomeSessionController * videoHomeSessionController;              //@synthesize videoHomeSessionController=_videoHomeSessionController - In the implementation block
@property (nonatomic,readonly) FBVideoHomeInAppNotificationDataSource * beeperDataSource;              //@synthesize beeperDataSource=_beeperDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(FBVideoHomeSession *)videoHomeSession;
-(id)jewelDataSource;
-(FBVideoHomeSessionController *)videoHomeSessionController;
-(void)setOnBadgeCountMaxUpdate:(id)arg1 ;
-(id)viewControllerWithBookmarkName:(id)arg1 ;
-(void)willEnterMenuItem;
-(void)willLeaveMenuItemWithBookMarkName:(id)arg1 ;
-(void)_applicationDidEnterForegroundAndIsIdle;
-(void)videoHomePrefetchController:(id)arg1 didUpdateMetadata:(id)arg2 ;
-(void)videoHomeGuideDataFetcherWillLoadUnits:(id)arg1 loadType:(unsigned long long)arg2 ;
-(void)videoHomeGuideDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3 requestType:(unsigned long long)arg4 error:(id)arg5 ;
-(void)videoHomeGuideDataFetcherDidClearDataAndRequests:(id)arg1 ;
-(void)videoHomeGuideDataFetcherDidMarkDataDirty:(id)arg1 withReason:(id)arg2 ;
-(void)videoHomeSession:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3 ;
-(void)videoHomeSession:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3 ;
-(void)_createDownloaders;
-(void)_includeVideoHomeDebugInfo;
-(void)_loadDataWithLoggingReason:(id)arg1 ;
-(void)_createVideoHomeViewControllerIfNeeded;
-(void)handleAPNSWithPayLoad:(id)arg1 launchedByUser:(BOOL)arg2 ;
-(void)handleDeferredPrefetching;
-(id)onBadgeCountMaxUpdate;
-(FBVideoHomeInAppNotificationDataSource *)beeperDataSource;
-(void)dealloc;
-(void)invalidate;
-(void)_applicationDidEnterBackground;
-(BOOL)isValid;
-(id)initWithSession:(id)arg1 ;
@end

