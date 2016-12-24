/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBVideoPlayerContainer.h>
#import <Facebook/FBVideoPresentingDelegate.h>

@class FBVideoViewManager, FBVideoPlayerComponentStatefulView, FBUserSession, UIViewController, FBFullScreenVideoViewController, FBVideoPlayerFromMediaProvider, FBDisplayableMediaTransitionManager, UIGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface FBMentionsHighlightsVideoDisplayController : NSObject <UIGestureRecognizerDelegate, FBVideoPlayerContainer, FBVideoPresentingDelegate> {

	FBVideoViewManager* _videoViewManager;
	FBVideoPlayerComponentStatefulView* _wrapperView;
	FBUserSession* _session;
	UIViewController* _presentingViewController;
	FBFullScreenVideoViewController* _fullScreenViewController;
	FBVideoPlayerFromMediaProvider* _fromProvider;
	FBDisplayableMediaTransitionManager* _transitionManager;
	UIGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panRecognizer;
	CGPoint _startLocation;
	long long _playbackSetting;
	NSString* _groupTokenID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long layoutIdiom; 
@property (nonatomic,copy,readonly) NSString * groupTokenID;                //@synthesize groupTokenID=_groupTokenID - In the implementation block
@property (assign,nonatomic) long long playbackSetting;                     //@synthesize playbackSetting=_playbackSetting - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostingVideoID; 
-(void)startContainerTracking;
-(void)stopContainerTracking;
-(id)videoPlaybackController;
-(void)didDisplay;
-(void)stopPlayingVideo;
-(void)didUpdatePresentedVideoVisibleRatio:(double)arg1 ;
-(void)createAndSetViewController:(/*^block*/id)arg1 ;
-(void)representViewControllerWithBlock:(/*^block*/id)arg1 ;
-(void)createAndPresentViewController:(/*^block*/id)arg1 source:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 options:(id)arg4 ;
-(unsigned long long)layoutIdiom;
-(NSString *)groupTokenID;
-(long long)playbackSetting;
-(void)setPlaybackSetting:(long long)arg1 ;
-(NSString *)hostingVideoID;
-(id)initWithVideoWrapperView:(id)arg1 session:(id)arg2 ;
-(void)willDismissForSource:(unsigned long long)arg1 ;
-(void)didDismissForSource:(unsigned long long)arg1 restoreBlock:(/*^block*/id)arg2 ;
-(id)transitionManagingViewController;
-(void)presentedVideoViewControllerWillMoveToNilParentViewController:(id)arg1 ;
-(void)_didTapVideoView:(id)arg1 ;
-(void)panGesture:(id)arg1 ;
-(void)presentFullScreenViewController;
-(id)videoContainerTrackingCodes;
-(BOOL)isInFullScreen;
-(void)dealloc;
-(BOOL)isPresented;
@end

