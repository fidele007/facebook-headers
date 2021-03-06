/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMUPlayControlViewDelegate;
@class FBMUPlaybackManager, UILabel, FBVideoScrubber, FBMusicSong;

@interface FBMUPlayControlView : UIView {

	FBMUPlaybackManager* _playbackManager;
	UILabel* _elapsedTimeLabel;
	FBVideoScrubber* _musicScrubber;
	UILabel* _remainingTimeLabel;
	BOOL _isBeingScrubbed;
	BOOL _shouldResumeMusicWhenScrubbingTouchComplete;
	unsigned long long _playbackViewState;
	double _duration;
	double _lastDisplayedTimeInSeconds;
	FBMusicSong* _viewportSong;
	id<FBMUPlayControlViewDelegate> _delegate;

}

@property (nonatomic,readonly) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double lastDisplayedTimeInSeconds;                          //@synthesize lastDisplayedTimeInSeconds=_lastDisplayedTimeInSeconds - In the implementation block
@property (nonatomic,readonly) double scrubberValue; 
@property (nonatomic,retain) FBMusicSong * viewportSong;                                   //@synthesize viewportSong=_viewportSong - In the implementation block
@property (assign,nonatomic,__weak) id<FBMUPlayControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)musicResumed;
-(id)initWithFrame:(CGRect)arg1 playbackManager:(id)arg2 ;
-(void)configureWithSelectedSong:(id)arg1 viewState:(unsigned long long)arg2 currentPlaybackTime:(double)arg3 duration:(double)arg4 ;
-(void)setViewportSong:(FBMusicSong *)arg1 ;
-(double)scrubberValue;
-(void)musicBeganBufferingWithAnimation;
-(void)musicStarted;
-(void)musicPlayedTo:(float)arg1 duration:(float)arg2 ;
-(void)musicPaused;
-(void)changePlaybackViewStateToStopped;
-(void)musicFinished;
-(void)musicFailed;
-(void)_scrubberChanged:(id)arg1 ;
-(void)_scrubberTouchComplete:(id)arg1 ;
-(void)_updateScrubberWithDuration:(float)arg1 ;
-(void)_updateTimeLabelsForPosition:(double)arg1 duration:(float)arg2 ;
-(BOOL)_isCurrentViewportSongPlaying;
-(void)_resetScrubber;
-(double)lastDisplayedTimeInSeconds;
-(FBMusicSong *)viewportSong;
-(void)setDelegate:(id<FBMUPlayControlViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<FBMUPlayControlViewDelegate>)delegate;
-(double)duration;
-(void)reset;
-(void)_seekToTime:(float)arg1 ;
@end

