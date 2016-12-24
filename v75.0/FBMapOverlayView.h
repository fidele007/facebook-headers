/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface FBMapOverlayView : UIView {

	CAShapeLayer* _overLayer;
	BOOL _layoutChanged;
	double _centeredCircleDiameter;
	UIColor* _color;
	double _opacity;

}

@property (assign,nonatomic) double centeredCircleDiameter;              //@synthesize centeredCircleDiameter=_centeredCircleDiameter - In the implementation block
@property (nonatomic,retain) UIColor * color;                            //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double opacity;                             //@synthesize opacity=_opacity - In the implementation block
-(void)setCenteredCircleDiameter:(double)arg1 ;
-(void)drawOverlay;
-(double)centeredCircleDiameter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end
