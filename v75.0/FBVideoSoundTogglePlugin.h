/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBNuxStepChainControllerDelegate.h>
#import <Facebook/FBVideoPluginView.h>

@protocol FBNavigationCoordinator;
@class UIView, UIButton, FBVideoSoundToggleExperimentContext, FBUserSession, NSDate, FBNuxController, UILabel, FBVideoPlaybackController, NSString;

@interface FBVideoSoundTogglePlugin : UIView <FBNuxStepChainControllerDelegate, FBVideoPluginView> {

	CGRect _videoFrame;
	UIView* _containerView;
	UIView* _pluginBackgroundView;
	UIButton* _glyphView;
	FBVideoSoundToggleExperimentContext* _context;
	FBUserSession* _session;
	NSDate* _tooltipStartTime;
	double _toggleViewPointY;
	BOOL _isActive;
	FBNuxController* _tooltipController;
	UILabel* _tapForAudioLabel;
	NSDate* _labelStartTime;
	NSDate* _labelEndTime;
	BOOL _hasAudioTrack;
	id<FBNavigationCoordinator> _navigationCoordinator;
	BOOL _didStartPlaying;
	BOOL _isSoundON;
	FBVideoPlaybackController* _videoController;

}

@property (assign,nonatomic) BOOL isSoundON;                                                  //@synthesize isSoundON=_isSoundON - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect videoFrame;                                               //@synthesize videoFrame=_videoFrame - In the implementation block
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController;              //@synthesize videoController=_videoController - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
-(void)videoPlaybackControllerDidRequestPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 ;
-(void)setActiveWithAudioTrack:(BOOL)arg1 ;
-(void)_handleToggle:(id)arg1 ;
-(void)sizeToFits;
-(void)dismissTapLabel;
-(void)setSoundOnSetting:(long long)arg1 ;
-(void)setIsSoundON:(BOOL)arg1 ;
-(BOOL)_isPluginActiveAndVisible;
-(void)markHasSeenNoAudioLabel;
-(void)_handleVolumeChange:(id)arg1 ;
-(void)_reloadSoundOnPlugin:(id)arg1 ;
-(void)_refreshSoundSetting:(id)arg1 ;
-(void)_maybeDisplayNUXAndLabel;
-(void)_displayNUX;
-(BOOL)_hasExceededSeenTapLabelLimit;
-(BOOL)_hasSeenNoAudioLabel;
-(void)showTapLabel;
-(BOOL)isSoundON;
-(void)markHasSeenTapLabel:(BOOL)arg1 ;
-(BOOL)_hasSeenTapLabel;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)invalidate;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
@end

