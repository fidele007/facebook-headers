/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBNuxPromotionFooterViewProtocol.h>

@class UILabel, UIButton, FBUserSession, FBNetworkImageView, UIImageView;

@interface FBNuxPromotionFooterView : UIView <FBNuxPromotionFooterViewProtocol> {

	FBUserSession* _session;
	CGSize _dismissButtonSize;
	CGSize _imageSize;
	CGSize _titleLabelSize;
	CGSize _descriptionLabelSize;
	CGSize _buttonSize;
	UIButton* _dismissButton;
	UIButton* _primaryButton;
	UILabel* _descriptionLabel;
	UILabel* _titleLabel;
	FBNetworkImageView* _networkImageView;
	UIImageView* _imageView;

}

@property (nonatomic,retain) FBNetworkImageView * networkImageView;              //@synthesize networkImageView=_networkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * primaryButton;                         //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                         //@synthesize dismissButton=_dismissButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)setNetworkImageView:(FBNetworkImageView *)arg1 ;
-(FBNetworkImageView *)networkImageView;
-(id)_animatedImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(id)_networkImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 buttonStyle:(unsigned long long)arg3 ;
-(UIButton *)primaryButton;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)unsetImage;
-(CGRect)_calculateImageFrameForSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIButton *)dismissButton;
-(UILabel *)descriptionLabel;
@end
