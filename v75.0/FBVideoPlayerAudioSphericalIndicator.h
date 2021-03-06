/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBVideoPlayerAudioAnimatable.h>

@class UILabel, UIImageView, FBTimer, NSMutableArray, UIView, NSString;

@interface FBVideoPlayerAudioSphericalIndicator : UIView <FBVideoPlayerAudioAnimatable> {

	UILabel* _instructionLabel;
	UIImageView* _headPhoneIcon;
	BOOL _isAnimating;
	FBTimer* _instructionLabelTimer;
	FBTimer* _audioIconTimer;
	NSMutableArray* _audioAnimationIcons;
	NSMutableArray* _audioAnimationTimers;
	UIImageView* _backgroundAudioIcon;
	UIView* _audioAnimationIconContainerView;
	BOOL hidesWhenStopped;
	BOOL isVideoPlaying;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hidesWhenStopped; 
@property (assign,nonatomic) BOOL isVideoPlaying; 
-(BOOL)isVideoPlaying;
-(void)startAnimatingIfNecessary;
-(void)setIsVideoPlaying:(BOOL)arg1 ;
-(void)_setupAudioAnimationIcons;
-(void)_fadeOutAudioIcon:(id)arg1 ;
-(void)_fadeOutInstructionLabel;
-(void)_startSphericalAudioAnimation;
-(void)_animateAudioIconAtIndex:(long long)arg1 ;
-(void)_animateView:(id)arg1 alphaTo:(double)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setAnimating:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
-(void)_startAnimating;
-(void)audioRouteDidChange:(BOOL)arg1 ;
@end

