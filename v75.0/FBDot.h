/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface FBDot : UIView {

	UIColor* _color;
	double _dotSize;
	UIColor* _borderColor;
	double _borderWidth;

}

@property (nonatomic,retain) UIColor * color;                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double dotSize;                     //@synthesize dotSize=_dotSize - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
-(void)setDotSize:(double)arg1 ;
-(double)dotSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(double)borderWidth;
@end
