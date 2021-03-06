/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface MNCircleView : UIView {

	UIColor* _strokeColor;
	UIColor* _fillColor;
	double _lineWidth;

}
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 lineWidth:(double)arg4 ;
-(void)_updateShapeLayer;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)reset;
-(id)initWithFrame:(CGRect)arg1 color:(id)arg2 ;
@end

