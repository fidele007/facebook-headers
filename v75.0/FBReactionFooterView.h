/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, CAShapeLayer;

@interface FBReactionFooterView : UIControl {

	UIView* _backgroundView;
	CAShapeLayer* _backgroundMaskLayer;
	UIView* _borderView;
	unsigned long long _corners;
	double _cornerRadius;
	UIView* _contentView;
	UIView* _actionView;
	double _minContentHeight;
	UIEdgeInsets _contentViewInsets;

}

@property (nonatomic,retain) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * actionView;                         //@synthesize actionView=_actionView - In the implementation block
@property (assign,nonatomic) double minContentHeight;                     //@synthesize minContentHeight=_minContentHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewInsets;              //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
-(id)initWithRoundedCorners:(unsigned long long)arg1 cornerRadius:(double)arg2 ;
-(double)minContentHeight;
-(void)setMinContentHeight:(double)arg1 ;
-(void)layoutBackground;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)actionView;
-(void)setActionView:(UIView *)arg1 ;
-(UIEdgeInsets)contentViewInsets;
-(void)setContentViewInsets:(UIEdgeInsets)arg1 ;
@end

