/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastFeedbackInputViewControllerDelegate.h>
#import <Facebook/FBFacecastLobbyViewControllerDelegate.h>
#import <Facebook/FBFacecastSocialMenuControllerDelegate.h>
#import <Facebook/FBFacecastViewerDonateDetailsViewControllerDelegate.h>
#import <Facebook/FBFacecastViewerEndViewControllerDelegate.h>
#import <Facebook/FBFacecastViewerViewDataSource.h>
#import <Facebook/FBFacecastViewerViewDelegate.h>
#import <Facebook/FBFacecastWithGuestViewControllerDelegate.h>
#import <Facebook/FBLiveViewerTipJarViewControllerDelegate.h>
#import <Facebook/FBNuxStepChainControllerDelegate.h>
#import <Facebook/FBScenePathHolding.h>
#import <Facebook/FBTVCastingButtonControllerDelegate.h>
#import <Facebook/FBTVCastingPlaybackEventListener.h>
#import <Facebook/FBVideoPlaybackEventListener.h>
#import <Facebook/FBVideoPlayerBroadcastIssuePluginDelegate.h>
#import <Facebook/FBVideoPlayerBroadcastViewPluginDelegate.h>
#import <Facebook/FBFacecastInteractionViewControllerDelegate.h>
#import <Facebook/FBLiveViewerTipJarSettingLoaderDelegate.h>
#import <Facebook/FBVideoViewControllerModalPresentingAnimatorDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Facebook/FBFacecastViewer360ViewControllerDelegate.h>
#import <Facebook/FBInstreamAdControllerDelegate.h>
#import <Facebook/FBInAppNotificationEligibilityProtocol.h>
#import <Facebook/FBFullScreenVideoViewControlling.h>
#import <Facebook/FBInstreamAdControllerStoryDelegate.h>
#import <Facebook/FBFacecastFrameIdProvider.h>

@protocol FBFacecastViewerMenuSharingHandler, UIViewControllerTransitioningDelegate, FBVideoPlayerBroadcastIssuePluginDelegate, FBMediaUFIBarControllerDelegate, FBVideoPresentingDelegate, FBScrollPositionModifyingController, FBFacecastViewerViewControllerWatchAndScrollDelegate;
@class FBVideoViewManager, FBVideoViewManagerContext, FBMemFeedStory, FBMemVideo, FBFeedToolbox, NSArray, FBUserSession, NSString, FBDisplayableMediaTransitionManager, NSDate, FBInstreamAdController, FBFacecastWatchingModel, FBCrowdNoiseViewController, FBFacecastViewerVideoControlViewController, FBFacecastInteractionViewController, FBFacecastFeedbackInputViewController, FBFacecastViewerEndViewController, FBFacecastSocialMenuController, FBLiveViewerTipJarViewController, FBFacecastViewerDonateDetailsViewController, FBTVCastingButtonController, FBVideoSpeakerMuteButtonController, FBInstreamAdPlayPauseButtonViewController, FBFacecastWithGuestViewController, FBFacecastLobbyViewController, FBFacecastViewerPIPController, FBFacecastAudioAnimationViewController, FBFacecastViewer360ViewController, FBNuxController, FBVideoPlayerBroadcastViewPlugin, FBVideoPlayerBroadcastIssuePlugin, FBVideoOverlayPluginView, FBInstreamAdCommercialBreakFeedbackOverlayView, FBConsistentLookasideCacheObservationHandle, FBFacecastViewerLogger, FBFacecastE2ELogger, FBFacecastViewerDonationFunnelLogger, FBLiveViewerTipJarSettingLoader, FBVideoPlaybackController, FBFacecastViewerView, FBMediaUFIBarController;

@interface FBFacecastViewerViewController : UIViewController <FBFacecastFeedbackInputViewControllerDelegate, FBFacecastLobbyViewControllerDelegate, FBFacecastSocialMenuControllerDelegate, FBFacecastViewerDonateDetailsViewControllerDelegate, FBFacecastViewerEndViewControllerDelegate, FBFacecastViewerViewDataSource, FBFacecastViewerViewDelegate, FBFacecastWithGuestViewControllerDelegate, FBLiveViewerTipJarViewControllerDelegate, FBNuxStepChainControllerDelegate, FBScenePathHolding, FBTVCastingButtonControllerDelegate, FBTVCastingPlaybackEventListener, FBVideoPlaybackEventListener, FBVideoPlayerBroadcastIssuePluginDelegate, FBVideoPlayerBroadcastViewPluginDelegate, FBFacecastInteractionViewControllerDelegate, FBLiveViewerTipJarSettingLoaderDelegate, FBVideoViewControllerModalPresentingAnimatorDelegate, UIViewControllerTransitioningDelegate, FBFacecastViewer360ViewControllerDelegate, FBInstreamAdControllerDelegate, FBInAppNotificationEligibilityProtocol, FBFullScreenVideoViewControlling, FBInstreamAdControllerStoryDelegate, FBFacecastFrameIdProvider> {

	unsigned long long _state;
	FBVideoViewManager* _viewManager;
	FBVideoViewManagerContext* _originalViewManagerContext;
	FBMemFeedStory* _story;
	FBMemVideo* _video;
	unsigned long long _videoPlayerOptions;
	FBFeedToolbox* _toolbox;
	NSArray* _trackingCodes;
	FBUserSession* _session;
	NSString* _customEndTitle;
	NSString* _customEndMessage;
	NSString* _analyticsModule;
	FBDisplayableMediaTransitionManager* _castingTransitionManager;
	NSDate* _dateOfViewWillAppear;
	id<FBFacecastViewerMenuSharingHandler> _sharer;
	/*^block*/id _onDismissCompletionBlock;
	BOOL _canShowAudioOnlyFormat;
	BOOL _shouldShowAudioAnimation;
	BOOL _shouldShowRandomAnimation;
	BOOL _canShow360Format;
	FBInstreamAdController* _instreamAdController;
	unsigned long long _videoPlayerInitiationReason;
	unsigned long long _options;
	FBFacecastWatchingModel* _watchingModel;
	FBCrowdNoiseViewController* _crowdNoiseViewController;
	FBFacecastViewerVideoControlViewController* _videoControlViewController;
	FBFacecastInteractionViewController* _interactionViewController;
	FBFacecastFeedbackInputViewController* _feedbackViewController;
	FBFacecastViewerEndViewController* _endViewController;
	FBFacecastSocialMenuController* _socialMenuController;
	FBLiveViewerTipJarViewController* _tipJarViewController;
	FBFacecastViewerDonateDetailsViewController* _donateDetailsViewController;
	FBTVCastingButtonController* _castingButtonController;
	FBVideoSpeakerMuteButtonController* _speakerMuteButtonController;
	FBInstreamAdPlayPauseButtonViewController* _commercialBreakPlayPauseButtonViewController;
	FBFacecastWithGuestViewController* _facecastWithGuestViewController;
	FBFacecastLobbyViewController* _lobbyViewController;
	FBFacecastViewerPIPController* _pipController;
	id<UIViewControllerTransitioningDelegate> _cachedTransitioningDelegate;
	FBFacecastAudioAnimationViewController* _audioAnimationViewController;
	FBFacecastViewer360ViewController* _360ViewController;
	FBNuxController* _wnsButtonNuxController;
	FBVideoPlayerBroadcastViewPlugin* _broadcastPlugin;
	FBVideoPlayerBroadcastIssuePlugin* _issuePlugin;
	FBVideoOverlayPluginView* _originalFeedOverlayPlugin;
	FBInstreamAdCommercialBreakFeedbackOverlayView* _commercialBreakFeedbackOverlayView;
	id<FBVideoPlayerBroadcastIssuePluginDelegate> _originalIssuePluginDelegate;
	id<FBMediaUFIBarControllerDelegate> _ufiDelegate;
	FBConsistentLookasideCacheObservationHandle* _clcHandle;
	FBConsistentLookasideCacheObservationHandle* _commercialBreakClcHandle;
	BOOL _hasRecordedViewerWatch;
	BOOL _isDismissing;
	BOOL _viewDidAppearAndIsNotDisappearing;
	BOOL _hideViewCountInitially;
	BOOL _showViewCountInScheduledLobby;
	BOOL _eligibleToShowWnsButtonNux;
	long long _originalLiveIndicatorAlignment;
	unsigned long long _originalIssueViewLayoutIdiom;
	FBFullScreenVideoViewControllerConfig _viewControllerConfig;
	FBFacecastViewerLogger* _logger;
	FBFacecastE2ELogger* _e2eLogger;
	FBFacecastViewerDonationFunnelLogger* _viewerDonationFunnelLogger;
	FBLiveViewerTipJarSettingLoader* _tipJarSettingLoader;
	BOOL _preventAutoPlayIfManuallyPaused;
	BOOL _shouldManageInstreamAds;
	BOOL _liveStreamEnded;
	BOOL _inWatchAndScroll;
	id<FBVideoPresentingDelegate> _delegate;
	id<FBScrollPositionModifyingController> _containingScrollController;
	long long _commercialBreakControllerState;
	FBMemFeedStory* _commercialBreakStory;
	FBVideoPlaybackController* _commercialBreakVideoAdPlaybackController;
	id<FBFacecastViewerViewControllerWatchAndScrollDelegate> _watchAndScrollDelegate;

}

@property (assign,nonatomic) BOOL inWatchAndScroll;                                                                               //@synthesize inWatchAndScroll=_inWatchAndScroll - In the implementation block
@property (nonatomic,retain) FBFacecastViewerView * view; 
@property (nonatomic,__weak,readonly) FBDisplayableMediaTransitionManager * transitionManager; 
@property (assign,nonatomic) long long commercialBreakControllerState;                                                            //@synthesize commercialBreakControllerState=_commercialBreakControllerState - In the implementation block
@property (nonatomic,retain) FBMemFeedStory * commercialBreakStory;                                                               //@synthesize commercialBreakStory=_commercialBreakStory - In the implementation block
@property (assign,nonatomic) BOOL shouldManageInstreamAds;                                                                        //@synthesize shouldManageInstreamAds=_shouldManageInstreamAds - In the implementation block
@property (nonatomic,retain) FBVideoPlaybackController * commercialBreakVideoAdPlaybackController;                                //@synthesize commercialBreakVideoAdPlaybackController=_commercialBreakVideoAdPlaybackController - In the implementation block
@property (assign,getter=isLiveStreamEnded,nonatomic) BOOL liveStreamEnded;                                                       //@synthesize liveStreamEnded=_liveStreamEnded - In the implementation block
@property (assign,nonatomic,__weak) id<FBFacecastViewerViewControllerWatchAndScrollDelegate> watchAndScrollDelegate;              //@synthesize watchAndScrollDelegate=_watchAndScrollDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBVideoViewManager * viewManager;                                                                  //@synthesize viewManager=_viewManager - In the implementation block
@property (assign,nonatomic) BOOL autoDismissWhenVideoFinishes; 
@property (nonatomic,readonly) BOOL canAutoAdvance; 
@property (nonatomic,readonly) FBMediaUFIBarController * ufiBarController; 
@property (assign,nonatomic,__weak) id<FBVideoPresentingDelegate> fullscreenVideoDelegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<FBScrollPositionModifyingController> containingScrollController;                         //@synthesize containingScrollController=_containingScrollController - In the implementation block
@property (assign,nonatomic) BOOL preventAutoPlayIfManuallyPaused;                                                                //@synthesize preventAutoPlayIfManuallyPaused=_preventAutoPlayIfManuallyPaused - In the implementation block
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(id)analyticsModule;
-(id)_broadcasterID;
-(void)videoPlaybackControllerDidRequestPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(FBVideoViewManager *)viewManager;
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(void)stepChainController:(id)arg1 willShowFirstStep:(id)arg2 ;
-(CGRect)_videoFrame;
-(void)transitionManagerNeedsDismissal:(id)arg1 ;
-(id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1 ;
-(unsigned long long)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2 ;
-(void)transitionManager:(id)arg1 willPresentWithMediaViewProviderInfo:(id)arg2 ;
-(BOOL)displayableMediaTransitionManager:(id)arg1 shouldBeginDismissalWithGesture:(id)arg2 inDirection:(long long)arg3 ;
-(FBDisplayableMediaTransitionManager *)transitionManager;
-(void)setAutoDismissWhenVideoFinishes:(BOOL)arg1 ;
-(void)setPreventAutoPlayIfManuallyPaused:(BOOL)arg1 ;
-(void)resetViewManager;
-(void)didFinishAnimatingViewAfterCancelingDismissal:(BOOL)arg1 ;
-(void)configureViewManager;
-(FBMediaUFIBarController *)ufiBarController;
-(CGRect)animationFrameForView;
-(BOOL)canAutoAdvance;
-(BOOL)autoDismissWhenVideoFinishes;
-(id<FBVideoPresentingDelegate>)fullscreenVideoDelegate;
-(void)setFullscreenVideoDelegate:(id<FBVideoPresentingDelegate>)arg1 ;
-(id<FBScrollPositionModifyingController>)containingScrollController;
-(BOOL)preventAutoPlayIfManuallyPaused;
-(void)tvCastingButtonControllerDevicesAvailable:(id)arg1 ;
-(void)tvCastingButtonControllerDevicesNoLongerAvailable:(id)arg1 ;
-(void)tvCastingButtonControllerWasTapped:(id)arg1 ;
-(void)tvCastingButtonControllerDidDisplayNUX:(id)arg1 ;
-(void)tvCastingButtonControllerDidDismissNUX:(id)arg1 ;
-(void)videoViewControllerModalPresentingAnimatorDidRemoveVideoFromStatefulView:(id)arg1 ;
-(void)instreamAdController:(id)arg1 didUpdateState:(long long)arg2 ;
-(void)instreamAdController:(id)arg1 didUpdateVideoAd:(id)arg2 ;
-(void)instreamAdControllerDidReceiveSkywalkerIntentMessage:(id)arg1 ;
-(void)setUFIDelegate:(id)arg1 ;
-(void)presentFromWatchAndScroll;
-(void)setWatchAndScrollDelegate:(id<FBFacecastViewerViewControllerWatchAndScrollDelegate>)arg1 ;
-(void)setCommercialBreakStory:(FBMemFeedStory *)arg1 ;
-(void)setCommercialBreakControllerState:(long long)arg1 ;
-(void)setCommercialBreakVideoAdPlaybackController:(FBVideoPlaybackController *)arg1 ;
-(id)initWithViewManager:(id)arg1 story:(id)arg2 video:(id)arg3 videoPlayerOptions:(unsigned long long)arg4 viewControllerConfig:(FBFullScreenVideoViewControllerConfig)arg5 trackingCodes:(id)arg6 session:(id)arg7 navigationCoordinator:(id)arg8 intentHandler:(id)arg9 sharer:(id)arg10 layoutIdiom:(unsigned long long)arg11 analyticsModule:(id)arg12 scenePath:(id)arg13 options:(unsigned long long)arg14 fontFoundry:(id)arg15 containingScrollController:(id)arg16 onDismissCompletionBlock:(/*^block*/id)arg17 ;
-(void)setLiveStreamEnded:(BOOL)arg1 ;
-(void)setShouldManageInstreamAds:(BOOL)arg1 ;
-(void)instreamAdController:(id)arg1 didStartInstreamAd:(id)arg2 ;
-(void)instreamAdControllerdidEndInstreamAd:(id)arg1 ;
-(void)instreamAdControllerdidMoveOffScreen:(id)arg1 ;
-(void)instreamAdControllerdidMoveOnScreen:(id)arg1 ;
-(id)_broadcasterName;
-(void)facecastViewerEndViewControllerDoneButtonTapped:(id)arg1 ;
-(void)facecastViewerEndViewController:(id)arg1 tappedChannel:(id)arg2 ;
-(void)facecastViewer360ViewControllerWantsToExitQuietMode:(id)arg1 ;
-(void)facecastViewer360ViewControllerWantsToTogglePreview:(id)arg1 ;
-(BOOL)facecastViewerViewCanShowCastingButton:(id)arg1 ;
-(CGRect)_interactionAreaFrame;
-(BOOL)facecastViewerViewShouldHideInteraction:(id)arg1 ;
-(BOOL)facecastViewerViewCanShowCrowdNoise:(id)arg1 ;
-(void)facecastViewerViewHidWatchingNux:(id)arg1 ;
-(id)broadcastPlugin;
-(id)dismissButtonIconForFacecastViewerView:(id)arg1 ;
-(void)facecastViewerViewSelectedDismiss:(id)arg1 ;
-(void)facecastViewerViewSelectedPlay:(id)arg1 ;
-(void)facecastViewerViewSelectedFocus:(id)arg1 ;
-(void)_applicationWillResignActiveDuringLiveBroadcast;
-(void)_didUpdateStory:(id)arg1 ;
-(BOOL)_isWatchingVOD;
-(BOOL)_isCasting;
-(void)_dismissAllOverlays;
-(void)_relinquishBroadcastPlugin;
-(void)_dismissTipJarPanel;
-(void)_acquireBroadcastPlugin;
-(BOOL)_isInCommercialBreak;
-(void)_setupCastingController;
-(void)_setupSpeakerMuteController;
-(id)_videoGravity;
-(BOOL)_watchAndScrollEnabled;
-(BOOL)_isPlayingCommercial;
-(BOOL)_canRotate;
-(void)_enterWatchAndScroll;
-(void)_showWnsButtonNuxIfNecessary;
-(BOOL)_shouldShowCastingButton;
-(BOOL)_interactionShouldBeHidden;
-(BOOL)_canShowCrowdNoise;
-(void)_configureVideoPlayerBroadcastIssuePluginSettings;
-(void)_restoreOriginalVideoPlayerBroadcastIssuePluginSettings;
-(void)_clearCastingState;
-(void)_appearAnimationFinished;
-(double)_currentLiveAudioTime;
-(double)_currentVodTime;
-(void)liveViewerTipJarButtonTapped:(id)arg1 ;
-(void)_didUpdatePlaybackTime:(double)arg1 ;
-(void)_showEndBroadcastFlow;
-(void)_restoreViewCountVisibility;
-(void)_didStartCommercialBreak;
-(void)_dismissWnsButtonNux;
-(void)_onGuestReturnToBroadcast;
-(void)_prepareToDismiss;
-(void)_conditionallySetCrowdNoiseViewHidden:(BOOL)arg1 ;
-(void)_setCommercialBreakVideoAd;
-(void)_didUpdateCommercialBreakStory:(id)arg1 ;
-(void)broadcastIssuePluginDidShow:(id)arg1 ;
-(void)broadcastIssuePluginDidHide:(id)arg1 ;
-(void)_castingViewControllerDidDismiss;
-(void)_dismissTipJarViewController;
-(void)facecastFeedbackInputViewController:(id)arg1 committedReactionKey:(long long)arg2 withActorID:(id)arg3 ;
-(void)_didTapDonateButton:(id)arg1 ;
-(void)_resetCommercialBreakVideoAd;
-(void)_didEndCommercialBreak;
-(void)_prepareForInterstitial;
-(void)facecastFeedbackInputViewControllerUpdatedContentSize:(id)arg1 ;
-(void)facecastFeedbackInputViewController:(id)arg1 createdComment:(id)arg2 ;
-(void)facecastFeedbackInputViewController:(id)arg1 updatedComment:(id)arg2 ;
-(void)facecastFeedbackInputViewController:(id)arg1 didTapSocialMenuButton:(id)arg2 ;
-(void)facecastFeedbackInputViewController:(id)arg1 didTapTipJarButton:(id)arg2 ;
-(void)facecastFeedbackInputViewControllerDidEnterCommentComposer:(id)arg1 ;
-(void)facecastFeedbackInputViewControllerDidCommitCommentComposer:(id)arg1 ;
-(double)facecastFeedbackInputViewControllerPlaybackTime:(id)arg1 ;
-(double)facecastFeedbackInputViewControllerLiveAudioTimestamp:(id)arg1 ;
-(void)facecastLobbyViewController:(id)arg1 closedWithUpdatedStory:(id)arg2 video:(id)arg3 ;
-(void)facecastLobbyViewController:(id)arg1 scheduleCanceledWithTitle:(id)arg2 message:(id)arg3 story:(id)arg4 video:(id)arg5 ;
-(void)facecastLobbyViewController:(id)arg1 scheduleTimedOutWithTitle:(id)arg2 message:(id)arg3 story:(id)arg4 video:(id)arg5 ;
-(void)facecastLobbyViewController:(id)arg1 scheduleTimedRescheduledWithTitle:(id)arg2 message:(id)arg3 story:(id)arg4 video:(id)arg5 ;
-(void)facecastSocialMenuControllerDismissed:(id)arg1 ;
-(void)facecastViewerDonateDetailsViewControllerDidTapCloseButton:(id)arg1 ;
-(void)facecastViewerDonateDetailsViewControllerDidTapDonateButton:(id)arg1 donateViewModel:(id)arg2 ;
-(void)facecastViewerDonateDetailsViewControllerDidTapPageButton:(id)arg1 ;
-(void)facecastWithGuestViewControllerDidReceiveInvitation:(id)arg1 ;
-(void)facecastWithGuestViewControllerDidDismissInvitation:(id)arg1 ;
-(void)facecastWithGuestViewControllerDidAcceptInvitation:(id)arg1 ;
-(void)facecastWithGuestViewControllerDidEndGuestBroadcast:(id)arg1 ;
-(void)facecastWithGuestViewControllerDidReturnToBroadcast:(id)arg1 ;
-(void)facecastWithGuestViewControllerDidTapShare:(id)arg1 ;
-(void)facecastWithGuestViewControllerWillShowPermissionPrompt:(id)arg1 ;
-(void)facecastWithGuestViewControllerDidDismissPermissionPrompt:(id)arg1 ;
-(void)liveViewerTipJarDismissButtonTapped:(id)arg1 ;
-(double)liveViewerTipJarLiveAudioTimestamp:(id)arg1 ;
-(void)liveViewerTipJarControllerDidFinishPaymentProcessing:(id)arg1 ;
-(void)liveViewerTipJarControllerDidFailPaymentProcessing:(id)arg1 ;
-(void)liveViewerTipJarControllerDidTapLoveButton:(id)arg1 ;
-(void)tvVideoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)tvVideoPlaybackController:(id)arg1 didFailWithError:(unsigned long long)arg2 ;
-(void)tvVideoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)fbVideoPlayerBroadcastViewPluginDidTapViewerCount:(id)arg1 ;
-(void)facecastInteractionViewController:(id)arg1 didTapFundraiserBannerWithFundraiser:(id)arg2 ;
-(void)facecastInteractionViewController:(id)arg1 didTapDonateButtonWithFundraiser:(id)arg2 ;
-(void)facecastInteractionViewController:(id)arg1 didSetUpDonateViewWithFundraiser:(id)arg2 ;
-(void)facecastInteractionViewControllerDidInviteGuest:(id)arg1 ;
-(void)liveViewerTipJarSettingLoader:(id)arg1 successfullyLoadedModel:(id)arg2 ;
-(SCD_Struct_FB100)getFrameId;
-(void)setInWatchAndScroll:(BOOL)arg1 ;
-(id)_commercialBreakPostPreviewView;
-(BOOL)_isLandscapeFullscreen;
-(long long)commercialBreakControllerState;
-(FBMemFeedStory *)commercialBreakStory;
-(BOOL)shouldManageInstreamAds;
-(FBVideoPlaybackController *)commercialBreakVideoAdPlaybackController;
-(BOOL)isLiveStreamEnded;
-(id<FBFacecastViewerViewControllerWatchAndScrollDelegate>)watchAndScrollDelegate;
-(BOOL)inWatchAndScroll;
-(void)dealloc;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)_dismiss;
-(void)_redirectToURL:(id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end

