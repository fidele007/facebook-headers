/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIBlurEffect, UIView, CALayer, UIVisualEffectView, UIColor;

@interface PABlurView : UIView {

	UIBlurEffect* _blurEffect;
	UIView* _blurView;
	CALayer* _blurTintLayer;
	UIVisualEffectView* _vibrancyView;
	BOOL _isLegacy;
	BOOL _addVibrancy;
	unsigned long long _blurViewStyle;
	UIColor* _tintColor;

}

@property (assign,nonatomic) unsigned long long blurViewStyle;              //@synthesize blurViewStyle=_blurViewStyle - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                           //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) BOOL addVibrancy;                              //@synthesize addVibrancy=_addVibrancy - In the implementation block
-(void)setBlurViewStyle:(unsigned long long)arg1 ;
-(void)setAddVibrancy:(BOOL)arg1 ;
-(void)_updateBlurViewStyle;
-(unsigned long long)blurViewStyle;
-(BOOL)addVibrancy;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
@end

