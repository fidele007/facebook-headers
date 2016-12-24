/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIView, UILabel, UITextField, UIButton, FBEntityPickerTextField;

@interface FBPopoverGroupCreationView : UIScrollView {

	UIView* _titleLabelBackgroundView;
	UILabel* _titleLabel;
	UILabel* _groupNameLabel;
	UILabel* _privacyLabel;
	UILabel* _groupMembersLabel;
	UITextField* _groupNameField;
	UIButton* _cancelButton;
	UIButton* _submitButton;
	FBEntityPickerTextField* _groupMembersField;
	UIView* _privacyPickerView;

}

@property (nonatomic,readonly) UITextField * groupNameField;                             //@synthesize groupNameField=_groupNameField - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * submitButton;                                  //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,readonly) FBEntityPickerTextField * groupMembersField;              //@synthesize groupMembersField=_groupMembersField - In the implementation block
@property (nonatomic,retain) UIView * privacyPickerView;                                 //@synthesize privacyPickerView=_privacyPickerView - In the implementation block
-(UIButton *)submitButton;
-(UIView *)privacyPickerView;
-(void)setPrivacyPickerView:(UIView *)arg1 ;
-(FBEntityPickerTextField *)groupMembersField;
-(UITextField *)groupNameField;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)cancelButton;
@end
