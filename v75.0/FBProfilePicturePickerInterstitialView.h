/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBProfilePicturePickerInterstitialViewDelegate;
@class UIButton, UIView, UIImageView, UILabel;

@interface FBProfilePicturePickerInterstitialView : UIView {

	UIButton* _takePhotosButton;
	UIButton* _choosePhotosButton;
	UIView* _upsellImageView;
	UIImageView* _buttonPanelView;
	UILabel* _titleLabel;
	id<FBProfilePicturePickerInterstitialViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfilePicturePickerInterstitialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 session:(id)arg3 ;
-(void)didTouchTakePhotosButton:(id)arg1 ;
-(void)didTouchChoosePhotosButton:(id)arg1 ;
-(void)setDelegate:(id<FBProfilePicturePickerInterstitialViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBProfilePicturePickerInterstitialViewDelegate>)delegate;
@end

