/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBExpiringProfilePictureBannerViewDelegate;
@class UIButton;

@interface FBExpiringProfilePictureBannerView : UIView {

	unsigned long long _style;
	id<FBExpiringProfilePictureBannerViewDelegate> _delegate;
	UIButton* _expirationTitleButton;

}

@property (assign,nonatomic,__weak) id<FBExpiringProfilePictureBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * expirationTitleButton;                                            //@synthesize expirationTitleButton=_expirationTitleButton - In the implementation block
-(void)resetExpiringProfilePictureBannerViewLayout;
-(UIButton *)expirationTitleButton;
-(void)_changeBackgroundColorTouchDown:(id)arg1 ;
-(void)_changeBackgroundColorTouchCancel:(id)arg1 ;
-(void)_didTapBannerView:(id)arg1 ;
-(void)_setButtonLayout;
-(void)setExpirationTitleButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<FBExpiringProfilePictureBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBExpiringProfilePictureBannerViewDelegate>)delegate;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
@end

