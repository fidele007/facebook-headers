/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIView, UIButton;

@interface FBSearchSeeMoreFooterView : UIView {

	int _buttonStyle;
	UILabel* _infoLabel;
	BOOL _showDivider;
	UIView* _lineView;
	UIButton* _seeMoreButton;

}

@property (nonatomic,retain) UIButton * seeMoreButton;              //@synthesize seeMoreButton=_seeMoreButton - In the implementation block
-(id)initWithButtonStyle:(int)arg1 showDivider:(BOOL)arg2 ;
-(void)layoutSubviews;
-(UIButton *)seeMoreButton;
-(void)setSeeMoreButton:(UIButton *)arg1 ;
@end

