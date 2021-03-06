/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIView, UIButton;

@interface FBBugReportNuxView : UIView {

	UIImageView* _imageView;
	UILabel* _labelView;
	UIView* _longDividerBottom;
	UIButton* _cancelButton;
	UIView* _verticalDividerBetweenButtons;
	double _margin;
	double _imageWidth;
	double _imageHeight;
	double _dividerHeight;
	double _buttonHeight;
	double _dialogMaxWidth;
	UIButton* _okButton;

}

@property (nonatomic,retain) UIButton * okButton;                  //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
-(void)initializeLayoutParameters;
-(double)heightForLabelText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end

