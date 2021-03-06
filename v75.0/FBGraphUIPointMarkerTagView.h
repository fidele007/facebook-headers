/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, FBShapeTriangleView, NSString;

@interface FBGraphUIPointMarkerTagView : UIView {

	UIView* _blurbView;
	UILabel* _valueLabel;
	UILabel* _descriptionLabel;
	FBShapeTriangleView* _arrowView;
	double _arrowCenterY;
	NSString* _valueText;
	NSString* _descriptionText;
	unsigned long long _direction;

}

@property (nonatomic,copy) NSString * valueText;                        //@synthesize valueText=_valueText - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                  //@synthesize descriptionText=_descriptionText - In the implementation block
@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double arrowCenterY;                       //@synthesize arrowCenterY=_arrowCenterY - In the implementation block
-(void)setArrowCenterY:(double)arg1 ;
-(double)arrowCenterY;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)valueText;
-(void)setValueText:(NSString *)arg1 ;
@end

