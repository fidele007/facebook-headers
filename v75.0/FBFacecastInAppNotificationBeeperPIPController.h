/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBScenePathHolding.h>
#import <Facebook/FBVideoPIPControllerDelegate.h>
#import <Facebook/FBPIPController.h>

@protocol FBFacecastInAppNotificationBeeperPIPControllerDelegate, FBLiveStatusUpdateRegistrationToken, FBCancelable;
@class FBUserSession, FBMemFeedStory, FBFeedToolbox, FBTimer, FBFacecastInAppNotificationLogger, FBVideoPIPController, FBVideoDisplayController, FBVideoPlayerComponentStatefulView, FBFacecastInAppNotificationStoryPreviewPlugin, FBFacecastInAppNotificationActorNamePlugin, FBFacecastInAppNotification, FBMemVideo, NSString;

@interface FBFacecastInAppNotificationBeeperPIPController : NSObject <FBScenePathHolding, FBVideoPIPControllerDelegate, FBPIPController> {

	id<FBFacecastInAppNotificationBeeperPIPControllerDelegate> _delegate;
	FBUserSession* _session;
	FBMemFeedStory* _story;
	FBFeedToolbox* _feedToolbox;
	FBTimer* _storyQueryPoller;
	id<FBLiveStatusUpdateRegistrationToken> _liveStatusListener;
	FBFacecastInAppNotificationLogger* _logger;
	id<FBCancelable> _storyPreviewDisappearanceToken;
	id<FBCancelable> _beeperDismissalToken;
	unsigned long long _state;
	FBVideoPIPController* _videoPIPController;
	FBVideoDisplayController* _displayController;
	FBVideoPlayerComponentStatefulView* _playerStatefulView;
	FBFacecastInAppNotificationStoryPreviewPlugin* _storyPreviewPlugin;
	FBFacecastInAppNotificationActorNamePlugin* _actorNamePlugin;
	BOOL _didStartViewerCountPolling;
	FBFacecastInAppNotification* _notification;
	FBMemVideo* _video;

}

@property (nonatomic,readonly) FBFacecastInAppNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) FBMemVideo * video;                                      //@synthesize video=_video - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)_canStartPIP;
-(void)startPIP;
-(void)_queryStoryWithTargetID:(id)arg1 ;
-(void)endPIP;
-(void)_liveStatusListenerDidUpdateStory:(id)arg1 ;
-(void)_logEvent:(id)arg1 ;
-(void)_scheduleStoryPreviewDisappearance;
-(void)_scheduleBeeperDissmisal;
-(void)_cancelScheduledStoryPreviewDisappearance;
-(id)_broadcastPlugin;
-(void)_storyQueryDidSucceedWithResponse:(id)arg1 ;
-(void)_storyQueryDidFailWithError:(id)arg1 ;
-(void)_configureStoryQueryWithConfiguration:(id)arg1 ;
-(void)_hideStoryPreviewPluginAndPlayVideo;
-(void)_setStoryPreviewPluginHiddenWithCompletion:(/*^block*/id)arg1 ;
-(void)_cancelBeeperDissmisal;
-(void)_logBeeperDismissReason:(unsigned long long)arg1 ;
-(void)_enterFullScreen;
-(void)videoPIPControllerDidStallPlayback:(id)arg1 ;
-(void)videoPIPControllerDidStartPlayback:(id)arg1 ;
-(void)videoPIPControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPIPControllerWillDismiss:(id)arg1 dismissReason:(unsigned long long)arg2 ;
-(void)videoPIPControllerDidDismiss:(id)arg1 dismissReason:(unsigned long long)arg2 ;
-(void)videoPIPControllerDidTap:(id)arg1 ;
-(void)videoPIPControllerDidBeginDragging:(id)arg1 ;
-(void)videoPIPControllerDidEndDragging:(id)arg1 ;
-(void)startPIPWithSession:(id)arg1 notification:(id)arg2 navigationCoordinator:(id)arg3 intentHandler:(id)arg4 delegate:(id)arg5 ;
-(void)dealloc;
-(id)init;
-(FBFacecastInAppNotification *)notification;
-(void)_invalidate;
-(void)_updateState:(unsigned long long)arg1 ;
-(FBMemVideo *)video;
@end
