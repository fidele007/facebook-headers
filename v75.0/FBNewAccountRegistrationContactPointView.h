/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBNewAccountRegistrationStepView.h>

@class UIButton, UITextField, FBPhoneInputView, FBRichTextView;

@interface FBNewAccountRegistrationContactPointView : FBNewAccountRegistrationStepView {

	UIButton* _changeContactPointTypeButton;
	int _contactPointType;
	UITextField* _emailTextField;
	FBPhoneInputView* _phoneInputView;
	FBRichTextView* _legalTextView;

}

@property (assign,nonatomic) int contactPointType;                                   //@synthesize contactPointType=_contactPointType - In the implementation block
@property (nonatomic,readonly) UITextField * emailTextField;                         //@synthesize emailTextField=_emailTextField - In the implementation block
@property (nonatomic,readonly) FBPhoneInputView * phoneInputView;                    //@synthesize phoneInputView=_phoneInputView - In the implementation block
@property (nonatomic,readonly) UIButton * changeContactPointTypeButton; 
@property (nonatomic,readonly) FBRichTextView * legalTextView;                       //@synthesize legalTextView=_legalTextView - In the implementation block
-(FBPhoneInputView *)phoneInputView;
-(id)secondaryButton;
-(CGSize)layoutBodyContentConstrainedToSize:(CGSize)arg1 ;
-(id)textFieldForActivityIndicator;
-(BOOL)shouldDisplayInputAccessoryView;
-(int)contactPointType;
-(UIButton *)changeContactPointTypeButton;
-(void)setContactPointType:(int)arg1 animated:(BOOL)arg2 ;
-(FBRichTextView *)legalTextView;
-(void)setContactPointType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITextField *)emailTextField;
@end

