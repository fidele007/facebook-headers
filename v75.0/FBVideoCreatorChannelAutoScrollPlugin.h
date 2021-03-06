/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBVideoPluginView.h>

@class UILabel, FBCircularProgressView, POPBasicAnimation, UIButton, UIImageView, UITapGestureRecognizer, FBVideoPlaybackController, NSString;

@interface FBVideoCreatorChannelAutoScrollPlugin : UIView <FBVideoPluginView> {

	UILabel* _nextVideoLabel;
	FBCircularProgressView* _progressView;
	POPBasicAnimation* _progressAnimation;
	UIButton* _controlContainer;
	UIImageView* _playImageView;
	UITapGestureRecognizer* _gestureRecognizer;
	FBVideoPlaybackController* _videoController;
	CGRect _videoFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect videoFrame;                                               //@synthesize videoFrame=_videoFrame - In the implementation block
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController;              //@synthesize videoController=_videoController - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(void)_addProgressAnimationWithDuration:(double)arg1 ;
-(void)addDidTapNextVideoTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)setTimeRemaining:(double)arg1 totalTime:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
@end

