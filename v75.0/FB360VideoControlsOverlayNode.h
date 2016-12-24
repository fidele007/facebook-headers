/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>

@protocol FB360DeviceIndicatorView;
@class FB360HeadingIndicatorView, UIView, FB360MediaCloseButton, FBNativeArticleVideoPlayPauseButton, FBNativeArticleVideoScrubber, FBNA360GyroIndicatorNode;

@interface FB360VideoControlsOverlayNode : ASDisplayNode {

	double _edgeMargins;
	FB360HeadingIndicatorView* _headingIndicatorView;
	UIView*<FB360DeviceIndicatorView> _movementNuxView;
	FB360MediaCloseButton* _closeButton;
	FBNativeArticleVideoPlayPauseButton* _playPauseButton;
	FBNativeArticleVideoScrubber* _videoScrubber;
	FBNA360GyroIndicatorNode* _gyroIndicatorNode;

}

@property (nonatomic,readonly) FB360MediaCloseButton * closeButton;                                //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) FBNativeArticleVideoPlayPauseButton * playPauseButton;              //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,readonly) FBNativeArticleVideoScrubber * videoScrubber;                       //@synthesize videoScrubber=_videoScrubber - In the implementation block
@property (nonatomic,readonly) FB360HeadingIndicatorView * headingIndicatorView;                   //@synthesize headingIndicatorView=_headingIndicatorView - In the implementation block
@property (nonatomic,readonly) FBNA360GyroIndicatorNode * gyroIndicatorNode;                       //@synthesize gyroIndicatorNode=_gyroIndicatorNode - In the implementation block
@property (nonatomic,readonly) UIView*<FB360DeviceIndicatorView> movementNuxView;                  //@synthesize movementNuxView=_movementNuxView - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(FB360HeadingIndicatorView *)headingIndicatorView;
-(UIView*<FB360DeviceIndicatorView>)movementNuxView;
-(FBNA360GyroIndicatorNode *)gyroIndicatorNode;
-(id)initWithTextMetrics:(FBTextMetrics*)arg1 edgeMargins:(double)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layout;
-(void)didLoad;
-(FB360MediaCloseButton *)closeButton;
-(FBNativeArticleVideoScrubber *)videoScrubber;
-(FBNativeArticleVideoPlayPauseButton *)playPauseButton;
@end

