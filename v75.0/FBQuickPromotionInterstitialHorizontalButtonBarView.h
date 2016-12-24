/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView;

@interface FBQuickPromotionInterstitialHorizontalButtonBarView : UIView {

	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	UIView* _lineView;
	unsigned long long _buttonStyle;

}

@property (nonatomic,readonly) UIButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * secondaryButton; 
-(UIButton *)secondaryButton;
-(UIButton *)primaryButton;
-(id)initWithFrame:(CGRect)arg1 forButtonStyle:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

