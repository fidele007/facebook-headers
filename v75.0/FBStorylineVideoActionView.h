/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBStorylineVideoActionViewDelegate;
@class NSDateFormatter, UIButton, UILabel, UISlider;

@interface FBStorylineVideoActionView : UIView {

	NSDateFormatter* _dateFormatter;
	id<FBStorylineVideoActionViewDelegate> _delegate;
	UIButton* _playPauseButton;
	UILabel* _remainingTimeLabel;
	UILabel* _elapsedTimeLabel;
	UISlider* _videoScrubber;

}

@property (nonatomic,readonly) UIButton * playPauseButton;                                        //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,readonly) UILabel * remainingTimeLabel;                                      //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * elapsedTimeLabel;                                        //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,readonly) UISlider * videoScrubber;                                          //@synthesize videoScrubber=_videoScrubber - In the implementation block
@property (assign,nonatomic,__weak) id<FBStorylineVideoActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL buttonIsPlayingState; 
-(void)updateElapseTime:(double)arg1 remainingTime:(double)arg2 ;
-(void)setButtonIsPlayingState:(BOOL)arg1 ;
-(void)_scrubberStartDrag;
-(void)_scrubberEndDrag;
-(void)_scrubberDragging;
-(void)_playButtonTapped;
-(BOOL)buttonIsPlayingState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBStorylineVideoActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBStorylineVideoActionViewDelegate>)delegate;
-(void)reset;
-(id)_dateFormatter;
-(void)updateProgress:(float)arg1 ;
-(UISlider *)videoScrubber;
-(UILabel *)elapsedTimeLabel;
-(UILabel *)remainingTimeLabel;
-(UIButton *)playPauseButton;
@end

