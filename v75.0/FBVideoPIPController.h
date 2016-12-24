/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPIPDelegate.h>
#import <Facebook/FBVideoPlaybackEventListener.h>
#import <Facebook/FBPIPController.h>

@protocol FBVideoPIPControllerDelegate;
@class FBUserSession, UIView, UIWindow, FBVideoViewManager, FBPIPController, FBNuxController, CALayer, NSString;

@interface FBVideoPIPController : NSObject <FBPIPDelegate, FBVideoPlaybackEventListener, FBPIPController> {

	FBUserSession* _session;
	UIView* _dimView;
	UIWindow* _window;
	FBVideoViewManager* _viewManager;
	FBPIPController* _PIPController;
	unsigned long long _state;
	FBNuxController* _nuxController;
	CALayer* _shadowLayer1;
	CALayer* _shadowLayer2;
	FBVideoPIPConfig _videoPIPConfig;
	double _stallWaitSeconds;
	id<FBVideoPIPControllerDelegate> _delegate;

}

@property (assign,nonatomic) double stallWaitSeconds;                                       //@synthesize stallWaitSeconds=_stallWaitSeconds - In the implementation block
@property (nonatomic,readonly) CGRect PIPViewFrame; 
@property (assign,nonatomic,__weak) id<FBVideoPIPControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_showNux;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)startPIP;
-(void)endPIP;
-(void)setupWithVideoViewManager:(id)arg1 session:(id)arg2 soundController:(id)arg3 videoPIPConfig:(FBVideoPIPConfig)arg4 ;
-(void)prepareToDismissWithDismissReason:(unsigned long long)arg1 ;
-(void)_captureSessionDidStart;
-(void)_fullscreenDidTake:(id)arg1 ;
-(void)pipControllerWillDismiss:(id)arg1 dismissReason:(unsigned long long)arg2 ;
-(void)pipControllerDidDismiss:(id)arg1 dismissReason:(unsigned long long)arg2 ;
-(void)pipControllerDidTap:(id)arg1 ;
-(void)pipControllerDidBeginDragging:(id)arg1 ;
-(void)pipControllerDidEndDragging:(id)arg1 ;
-(double)stallWaitSeconds;
-(void)updateVideoViewManager:(id)arg1 ;
-(void)setStallWaitSeconds:(double)arg1 ;
-(void)updateSize:(CGSize)arg1 ;
-(void)_enterPlayState;
-(void)_enterFinishState;
-(void)_updateViewManagerWithLayerDecorations:(BOOL)arg1 ;
-(void)_animateVideoViewToWrapperView;
-(void)_enterRequestPlayState;
-(void)_videoRequestedPlaying:(id)arg1 ;
-(void)_musicStartedPlaying:(id)arg1 ;
-(void)_updateShadowFrames;
-(void)_enterDismissStateWithDismissReason:(unsigned long long)arg1 ;
-(id)_getPreviewImageView;
-(void)_enterFadeBeforeDismissStateWithDismissReason:(unsigned long long)arg1 ;
-(void)_cancelDismissing;
-(void)_abortNux;
-(void)_enterDismissingStateWithDismissReason:(unsigned long long)arg1 ;
-(void)_enterStallState;
-(CGRect)PIPViewFrame;
-(void)_enterWillStallState;
-(void)setDelegate:(id<FBVideoPIPControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBVideoPIPControllerDelegate>)delegate;
-(void)_applicationWillResignActive;
@end

