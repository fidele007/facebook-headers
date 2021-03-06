/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASControlNode.h>

@class FBInchWormingLayer, UIColor;

@interface FBInchWormingLoadingIndicator : ASControlNode {

	FBInchWormingLayer* _worm;
	double _trackBorderWidth;
	UIColor* _trackBorderColor;
	double _trackShadowBlurRadius;
	UIColor* _trackShadowColor;

}

@property (assign,nonatomic) double trackBorderWidth;                   //@synthesize trackBorderWidth=_trackBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * trackBorderColor;                //@synthesize trackBorderColor=_trackBorderColor - In the implementation block
@property (assign,nonatomic) double trackShadowBlurRadius;              //@synthesize trackShadowBlurRadius=_trackShadowBlurRadius - In the implementation block
@property (nonatomic,retain) UIColor * trackShadowColor;                //@synthesize trackShadowColor=_trackShadowColor - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(UIColor *)trackBorderColor;
-(double)trackBorderWidth;
-(UIColor *)trackShadowColor;
-(double)trackShadowBlurRadius;
-(void)setTrackShadowBlurRadius:(double)arg1 ;
-(void)setTrackShadowColor:(UIColor *)arg1 ;
-(void)setTrackBorderWidth:(double)arg1 ;
-(void)setTrackBorderColor:(UIColor *)arg1 ;
-(void)rev;
-(void)layout;
-(void)stopAnimating;
-(void)startAnimating;
-(void)didLoad;
@end

