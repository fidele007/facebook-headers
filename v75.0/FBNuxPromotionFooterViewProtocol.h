/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UILabel, UIButton;


@protocol FBNuxPromotionFooterViewProtocol
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * descriptionLabel; 
@property (nonatomic,readonly) UIButton * primaryButton; 
@property (nonatomic,readonly) UIButton * dismissButton; 
@required
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 buttonStyle:(unsigned long long)arg3;
-(UIButton *)primaryButton;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3;
-(void)unsetImage;
-(id)initWithFrame:(CGRect)arg1;
-(void)setImage:(id)arg1;
-(UILabel *)titleLabel;
-(UIButton *)dismissButton;
-(UILabel *)descriptionLabel;

@end
