/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, NSDate, CAShapeLayer;

@interface FBVideoPlayer360HeadingIndicatorView : UIView {

	UIImageView* _backgroundView;
	UIImageView* _compassView;
	UIView* _fovView;
	NSDate* _poiBlinkEndTime;
	CAShapeLayer* _poiLayer;
	CAShapeLayer* _fovLayer;
	CGRect _hitArea;
	double _aspectRatio;
	double _fovY;
	int _poiId;
	BOOL _isDimmed;
	BOOL _isGuideEnabled;
	BOOL _isPOIBlinking;

}
-(void)_setAlphasForViewDimmed:(BOOL)arg1 ;
-(void)pulseWithFadeOutDelay:(double)arg1 ;
-(void)addPOIMarker;
-(void)removePOIMarker;
-(void)updateFov:(double)arg1 yaw:(double)arg2 aspectRatio:(double)arg3 guideEnabled:(BOOL)arg4 ;
-(void)updateCompassWithYaw:(double)arg1 poiYaw:(double)arg2 poiId:(double)arg3 ;
-(CGRect)computeLayoutThatFits:(CGRect)arg1 isLandscapeMode:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

