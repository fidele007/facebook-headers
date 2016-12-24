/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBVideoPluginView.h>

@class FBUserSession, UILabel, UIImageView, FBTimer, FBVideoPlaybackController, NSString;

@interface FBVideoPlayer360AudioFullScreenNuxPlugin : UIView <FBVideoPluginView> {

	FBUserSession* _session;
	UILabel* _instructionLabel;
	UIImageView* _headphoneIcon;
	FBTimer* _timer;
	BOOL _isHeadphoneIconAnimating;
	BOOL _is360AudioEnabled;
	FBVideoPlaybackController* videoController;
	CGRect _videoFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect videoFrame;                                               //@synthesize videoFrame=_videoFrame - In the implementation block
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController; 
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
-(void)videoPlaybackController:(id)arg1 didPrepare360RenderWith360Audio:(BOOL)arg2 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(id)initWithFrame:(CGRect)arg1 withSession:(id)arg2 ;
-(void)_animateSizeTo:(CGSize)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_animateAlphaTo:(double)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
@end
