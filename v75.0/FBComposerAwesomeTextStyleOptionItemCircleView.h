/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface FBComposerAwesomeTextStyleOptionItemCircleView : UIView {

	BOOL _showBorder;
	UIColor* _circleColor;
	double _circleDiameter;
	UIColor* _borderColor;
	double _borderWidth;

}

@property (nonatomic,retain) UIColor * circleColor;              //@synthesize circleColor=_circleColor - In the implementation block
@property (assign,nonatomic) double circleDiameter;              //@synthesize circleDiameter=_circleDiameter - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) BOOL showBorder;                    //@synthesize showBorder=_showBorder - In the implementation block
-(BOOL)showBorder;
-(UIColor *)circleColor;
-(void)setCircleColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(double)borderWidth;
-(double)circleDiameter;
-(void)setCircleDiameter:(double)arg1 ;
-(void)setShowBorder:(BOOL)arg1 ;
@end
