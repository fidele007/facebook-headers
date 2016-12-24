/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, UIImageView, UISwitch, UIButton;

@interface FBPageCTAInstantReplySettingsView : UIView {

	UILabel* _instantReplyEnableLabel;
	UIView* _instantReplySeperator;
	UIView* _instantReplyTopSeperator;
	UIView* _instantReplyBottomSeperator;
	UIImageView* _instantReplyDisclosureImage;
	UILabel* _instantReplyLabel;
	UISwitch* _instantReplySwitch;
	UIView* _instantReplyBackground;
	UIButton* _editTextButton;

}

@property (nonatomic,retain,readonly) UILabel * instantReplyLabel;                  //@synthesize instantReplyLabel=_instantReplyLabel - In the implementation block
@property (nonatomic,retain,readonly) UISwitch * instantReplySwitch;                //@synthesize instantReplySwitch=_instantReplySwitch - In the implementation block
@property (nonatomic,retain,readonly) UIView * instantReplyBackground;              //@synthesize instantReplyBackground=_instantReplyBackground - In the implementation block
@property (nonatomic,readonly) UIButton * editTextButton;                           //@synthesize editTextButton=_editTextButton - In the implementation block
-(void)updateDataWithInstantReply:(id)arg1 isInstantReplyEnabled:(BOOL)arg2 ;
-(UILabel *)instantReplyLabel;
-(UISwitch *)instantReplySwitch;
-(UIView *)instantReplyBackground;
-(UIButton *)editTextButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

