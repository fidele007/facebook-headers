/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface FBIOSNewLocationSettingsView : UIView {

	UIButton* _openSettingsButton;
	UILabel* _openSettingsLabel;
	UILabel* _privacyLabel;
	UILabel* _locationServices;
	UILabel* _locationAccess;

}

@property (nonatomic,retain) UIButton * openSettingsButton;              //@synthesize openSettingsButton=_openSettingsButton - In the implementation block
@property (nonatomic,retain) UILabel * openSettingsLabel;                //@synthesize openSettingsLabel=_openSettingsLabel - In the implementation block
@property (nonatomic,retain) UILabel * privacyLabel;                     //@synthesize privacyLabel=_privacyLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationServices;                 //@synthesize locationServices=_locationServices - In the implementation block
@property (nonatomic,retain) UILabel * locationAccess;                   //@synthesize locationAccess=_locationAccess - In the implementation block
-(UILabel *)privacyLabel;
-(UIButton *)openSettingsButton;
-(void)setOpenSettingsButton:(UIButton *)arg1 ;
-(UILabel *)openSettingsLabel;
-(void)setOpenSettingsLabel:(UILabel *)arg1 ;
-(void)setPrivacyLabel:(UILabel *)arg1 ;
-(UILabel *)locationServices;
-(void)setLocationServices:(UILabel *)arg1 ;
-(UILabel *)locationAccess;
-(void)setLocationAccess:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
