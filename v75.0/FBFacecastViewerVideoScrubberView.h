/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UISlider.h>

@class UIView;

@interface FBFacecastViewerVideoScrubberView : UISlider {

	UIView* _trackView;
	UIView* _trackMinView;
	UIView* _trackLoadingView;
	UIView* _trackMaxView;
	double _playableDuration;

}

@property (assign,nonatomic) double playableDuration;              //@synthesize playableDuration=_playableDuration - In the implementation block
@property (nonatomic,readonly) CGRect trackFrame; 
-(CGRect)trackFrame;
-(void)_updateTrackLoadingViewFrame;
-(void)setPlayableDuration:(double)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)playableDuration;
-(void)setPlayableDuration:(double)arg1 ;
@end

