/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBNewAccountRegistrationStepView.h>

@class UITextField;

@interface FBNewAccountRegistrationNameStepView : FBNewAccountRegistrationStepView {

	UITextField* _firstNameTextField;
	UITextField* _lastNameTextField;
	BOOL _lastNameFirst;

}

@property (nonatomic,readonly) UITextField * firstNameTextField;              //@synthesize firstNameTextField=_firstNameTextField - In the implementation block
@property (nonatomic,readonly) UITextField * lastNameTextField;               //@synthesize lastNameTextField=_lastNameTextField - In the implementation block
-(CGSize)layoutBodyContentConstrainedToSize:(CGSize)arg1 ;
-(id)textFieldForActivityIndicator;
-(id)_createNameFieldWithPlaceholder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withLastNameFirst:(BOOL)arg2 ;
-(UITextField *)firstNameTextField;
-(UITextField *)lastNameTextField;
@end
