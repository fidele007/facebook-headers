/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBReactionOverlayFooterViewDelegate;
@class FBUserSession, UILabel, FBNetworkImageView, CAGradientLayer, UIView, UIImageView, UIColor;

@interface FBReactionOverlayNeighborhoodFooterAnimationView : UIView {

	id<FBReactionOverlayFooterViewDelegate> _delegate;
	FBUserSession* _session;
	UILabel* _neighborhoodLabel;
	UILabel* _releaseLabel;
	FBNetworkImageView* _backgroundView;
	CAGradientLayer* _backgroundGradient;
	UIView* _backgroundCircleView;
	UIView* _activeCircleView;
	UIImageView* _locationIconView;
	UIColor* _circleColor;

}

@property (assign,nonatomic,__weak) id<FBReactionOverlayFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) UILabel * neighborhoodLabel;                                          //@synthesize neighborhoodLabel=_neighborhoodLabel - In the implementation block
@property (nonatomic,retain) UILabel * releaseLabel;                                               //@synthesize releaseLabel=_releaseLabel - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * backgroundView;                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * backgroundGradient;                                 //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,retain) UIView * backgroundCircleView;                                        //@synthesize backgroundCircleView=_backgroundCircleView - In the implementation block
@property (nonatomic,retain) UIView * activeCircleView;                                            //@synthesize activeCircleView=_activeCircleView - In the implementation block
@property (nonatomic,retain) UIImageView * locationIconView;                                       //@synthesize locationIconView=_locationIconView - In the implementation block
@property (nonatomic,retain) UIColor * circleColor;                                                //@synthesize circleColor=_circleColor - In the implementation block
-(void)animateWithVerticalOffset:(double)arg1 isDragging:(BOOL)arg2 ;
-(void)activateFooterActionWithVerticalOffset:(double)arg1 ;
-(id)_createCircleViewWithRadius:(double)arg1 alpha:(double)arg2 ;
-(void)_layoutLabel:(id)arg1 verticalOffset:(double)arg2 ;
-(void)_updateCircleView:(id)arg1 radius:(double)arg2 alpha:(double)arg3 ;
-(CGRect)_circleViewRectForRadius:(double)arg1 verticalOffset:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 neighborhoodName:(id)arg3 session:(id)arg4 ;
-(UILabel *)releaseLabel;
-(void)setReleaseLabel:(UILabel *)arg1 ;
-(UIView *)backgroundCircleView;
-(void)setBackgroundCircleView:(UIView *)arg1 ;
-(UIView *)activeCircleView;
-(void)setActiveCircleView:(UIView *)arg1 ;
-(UIImageView *)locationIconView;
-(void)setLocationIconView:(UIImageView *)arg1 ;
-(UIColor *)circleColor;
-(void)setCircleColor:(UIColor *)arg1 ;
-(id)_createLabelWithText:(id)arg1 ;
-(CGSize)_labelSize:(id)arg1 forWidth:(double)arg2 ;
-(UILabel *)neighborhoodLabel;
-(void)setNeighborhoodLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<FBReactionOverlayFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBReactionOverlayFooterViewDelegate>)delegate;
-(void)setBackgroundView:(FBNetworkImageView *)arg1 ;
-(FBNetworkImageView *)backgroundView;
-(void)setBackgroundGradient:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)backgroundGradient;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

