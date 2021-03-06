/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPortraitPresentedVCProtocol.h>
#import <Facebook/FBVideoPlaybackEventListener.h>
#import <Facebook/FBVideoPlayerCallToActionPluginDelegate.h>
#import <Facebook/FBMediaUFIBarControllerPresentingViewController.h>
#import <Facebook/FBTVCastingButtonControllerDelegate.h>
#import <Facebook/FBVideoSecondaryActionButtonDelegate.h>
#import <Facebook/FBInspirationMediaOverlayHeaderComponentViewDelegate.h>
#import <Facebook/FBFullScreenVideoViewControllerCustomTransitionProtocol.h>
#import <Facebook/FBFullScreenVideoViewControlling.h>

@protocol FBIntentHandler, FBMediaUFIBarControllerDelegate, FBNavigationCoordinator, FBVideoPresentingDelegate, FBScrollPositionModifyingController;
@class FBMemVideo, FBInspirationMediaOverlayHeaderComponentView, FBMediaUFIBarController, FBMemFeedStory, FBUserSession, FBFontFoundry, NSArray, FBVideoViewManager, FBVideoViewManagerContext, FBTVCastingButtonController, FBDisplayableMediaTransitionManager, FBConsistentLookasideCacheObservationHandle, FBVideoSecondaryActionButton, NSString, FBVideoPlayerFromMediaProvider, UIView, FBVideoOverlayPluginView;

@interface FBFullScreenVideoViewController : UIViewController <FBPortraitPresentedVCProtocol, FBVideoPlaybackEventListener, FBVideoPlayerCallToActionPluginDelegate, FBMediaUFIBarControllerPresentingViewController, FBTVCastingButtonControllerDelegate, FBVideoSecondaryActionButtonDelegate, FBInspirationMediaOverlayHeaderComponentViewDelegate, FBFullScreenVideoViewControllerCustomTransitionProtocol, FBFullScreenVideoViewControlling> {

	FBMemVideo* _video;
	FBInspirationMediaOverlayHeaderComponentView* _inspirationHeaderView;
	FBMediaUFIBarController* _ufiBarController;
	FBMemFeedStory* _originalStory;
	BOOL _isDismissing;
	id<FBIntentHandler> _intentHandler;
	FBUserSession* _session;
	FBFontFoundry* _fontFoundry;
	id<FBMediaUFIBarControllerDelegate> _ufiDelegate;
	unsigned long long _videoPlayerOptions;
	FBFullScreenVideoViewControllerConfig _viewControllerConfig;
	NSArray* _trackingCodes;
	id<FBNavigationCoordinator> _navigationCoordinator;
	long long _smartFullscreenPreferredInterfaceOrientation;
	FBVideoViewManager* _viewManager;
	FBVideoViewManagerContext* _originalViewManagerContext;
	BOOL _autoDismissWhenVideoFinishes;
	BOOL _isInspirationVideo;
	FBTVCastingButtonController* _castingButtonController;
	FBDisplayableMediaTransitionManager* _castingTransitionManager;
	FBConsistentLookasideCacheObservationHandle* _clcHandle;
	/*^block*/id _onDismissCompletionBlock;
	FBVideoSecondaryActionButton* _secondaryActionButton;
	NSString* _videoGravity;
	BOOL _portraitPresentedVCDidAppear;
	BOOL _preventAutoPlayIfManuallyPaused;
	BOOL _disableEndOfVideoDismissal;
	BOOL _canAutoAdvance;
	FBVideoPlayerFromMediaProvider* _fromProvider;
	id<FBVideoPresentingDelegate> _fullscreenVideoDelegate;
	id<FBScrollPositionModifyingController> _containingScrollController;
	UIView* _subView;
	FBVideoOverlayPluginView* _overlayView;

}

@property (nonatomic,retain) UIView * subView;                                                                         //@synthesize subView=_subView - In the implementation block
@property (nonatomic,readonly) FBVideoOverlayPluginView * overlayView;                                                 //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) BOOL disableEndOfVideoDismissal;                                                          //@synthesize disableEndOfVideoDismissal=_disableEndOfVideoDismissal - In the implementation block
@property (nonatomic,readonly) BOOL canAutoAdvance;                                                                    //@synthesize canAutoAdvance=_canAutoAdvance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL portraitPresentedVCDidAppear;                                                      //@synthesize portraitPresentedVCDidAppear=_portraitPresentedVCDidAppear - In the implementation block
@property (assign,nonatomic,__weak) FBVideoPlayerFromMediaProvider * fromProvider;                                     //@synthesize fromProvider=_fromProvider - In the implementation block
@property (nonatomic,readonly) FBVideoViewManager * viewManager;                                                       //@synthesize viewManager=_viewManager - In the implementation block
@property (assign,nonatomic) BOOL autoDismissWhenVideoFinishes;                                                        //@synthesize autoDismissWhenVideoFinishes=_autoDismissWhenVideoFinishes - In the implementation block
@property (nonatomic,readonly) FBMediaUFIBarController * ufiBarController;                                             //@synthesize ufiBarController=_ufiBarController - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoPresentingDelegate> fullscreenVideoDelegate;                             //@synthesize fullscreenVideoDelegate=_fullscreenVideoDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<FBScrollPositionModifyingController> containingScrollController;              //@synthesize containingScrollController=_containingScrollController - In the implementation block
@property (assign,nonatomic) BOOL preventAutoPlayIfManuallyPaused;                                                     //@synthesize preventAutoPlayIfManuallyPaused=_preventAutoPlayIfManuallyPaused - In the implementation block
-(id)analyticsModule;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didFailWithError:(id)arg2 ;
-(FBVideoViewManager *)viewManager;
-(unsigned long long)preferredPresentationOptions;
-(id)fb_tabBarBackgroundColor;
-(id)fb_tabBarTopBorderColor;
-(id)fb_tabBarUnselectedIconColor;
-(id)fb_tabBarUnselectedTitleColor;
-(id)displayableMediaTransitioningDelegate;
-(void)transitionManagerNeedsDismissal:(id)arg1 ;
-(id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1 ;
-(unsigned long long)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2 ;
-(void)transitionManager:(id)arg1 willPresentWithMediaViewProviderInfo:(id)arg2 ;
-(void)didTapSecondaryActionButton:(id)arg1 ;
-(void)_orientationChanged:(id)arg1 ;
-(void)setAutoDismissWhenVideoFinishes:(BOOL)arg1 ;
-(void)setPreventAutoPlayIfManuallyPaused:(BOOL)arg1 ;
-(void)resetViewManager;
-(void)didFinishAnimatingViewAfterCancelingDismissal:(BOOL)arg1 ;
-(void)configureViewManager;
-(FBMediaUFIBarController *)ufiBarController;
-(CGRect)animationFrameForView;
-(void)prepareOverlayViewForTransition;
-(FBVideoPlayerFromMediaProvider *)fromProvider;
-(void)setFromProvider:(FBVideoPlayerFromMediaProvider *)arg1 ;
-(BOOL)canAutoAdvance;
-(void)didFinishPlayListWithDebugReason:(unsigned long long)arg1 ;
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
-(void)setUFIDelegate:(id)arg1 ;
-(void)_cleanBeforeDismiss;
-(id)initWithViewVideo:(id)arg1 viewManager:(id)arg2 originalStory:(id)arg3 trackingCodes:(id)arg4 videoPlayerOptions:(unsigned long long)arg5 viewControllerConfig:(FBFullScreenVideoViewControllerConfig)arg6 session:(id)arg7 navigationCoordinator:(id)arg8 intentHandler:(id)arg9 analyticsModule:(id)arg10 scenePath:(id)arg11 fontFoundry:(id)arg12 containingScrollController:(id)arg13 onDismissCompletionBlock:(/*^block*/id)arg14 ;
-(BOOL)canShowMoreOption;
-(void)dismissAfterDeletion;
-(void)disableDismissal;
-(void)enableDismissal;
-(void)disableUFIHiding;
-(void)enableUFIHiding;
-(void)disableAutoplay;
-(void)enableAutoplay;
-(void)_didUpdateStory:(id)arg1 ;
-(BOOL)_isCasting;
-(void)_castingViewControllerDidDismiss;
-(void)_dismissFromButton:(id)arg1 ;
-(void)_configureVideo:(id)arg1 viewManager:(id)arg2 originalStory:(id)arg3 trackingCodes:(id)arg4 ;
-(void)_startQRCodeView;
-(void)_removeAllFullScreenPlugins;
-(void)_dismissForSource:(unsigned long long)arg1 debugReason:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setupInspirationsStoryHeaderWithFeedStory:(id)arg1 video:(id)arg2 ;
-(void)_setupMediaUFIBarControllerWithFeedStory:(id)arg1 ;
-(BOOL)_externalPlaybackSupported;
-(void)_addOverlayPluginToViewManager:(id)arg1 withStory:(id)arg2 ;
-(void)_updateFullScreenCallToActionPluginInViewManager:(id)arg1 ;
-(void)_updatePauseScreenCallToActionPluginInViewManager:(id)arg1 delegate:(id)arg2 ;
-(void)_addFullScreenCallToActionPageLikePluginInViewManager:(id)arg1 withStory:(id)arg2 ;
-(void)_addFullScreenCallToActionProfileVideoUpsellPluginInViewManager:(id)arg1 withStory:(id)arg2 ;
-(void)_addCallToActionProfileVideoReusePluginInViewManager:(id)arg1 withVideoID:(id)arg2 ;
-(id)_videoAttachmentForStory:(id)arg1 ;
-(void)_addEndScreenCallToActionPlugin;
-(BOOL)portraitPresentedVCDidAppear;
-(void)dismissBeforeHandlingCallToActionTapCompletion:(/*^block*/id)arg1 ;
-(void)inspirationHeaderComponentViewDidTapMore:(id)arg1 sourceView:(id)arg2 ;
-(void)inspirationHeaderComponentViewDidTapDone:(id)arg1 ;
-(BOOL)fb_animateStatusBarAppearanceAlongsideTransition;
-(UIView *)subView;
-(void)setSubView:(UIView *)arg1 ;
-(BOOL)disableEndOfVideoDismissal;
-(void)setDisableEndOfVideoDismissal:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_applicationWillResignActive;
-(FBVideoOverlayPluginView *)overlayView;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissForSource:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

