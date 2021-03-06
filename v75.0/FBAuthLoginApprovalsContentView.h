/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIActivityIndicatorView, UITextField, UIButton;

@interface FBAuthLoginApprovalsContentView : UIView {

	double _maximumWidth;
	UIView* _inputContainer;
	UIActivityIndicatorView* _activityIndicator;
	UITextField* _codeInput;
	UIButton* _loginButton;
	UIButton* _noCodeButton;
	UIButton* _resendButton;

}

@property (nonatomic,readonly) UITextField * codeInput;              //@synthesize codeInput=_codeInput - In the implementation block
@property (nonatomic,readonly) UIButton * loginButton;               //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,readonly) UIButton * noCodeButton;              //@synthesize noCodeButton=_noCodeButton - In the implementation block
@property (nonatomic,readonly) UIButton * resendButton;              //@synthesize resendButton=_resendButton - In the implementation block
-(id)_makeInputContainerWithConfiguration:(id)arg1 ;
-(id)_makeLoginButtonWithConfiguration:(id)arg1 ;
-(id)_makeCodeInputWithConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 showNoCodeButton:(BOOL)arg2 showResendButton:(BOOL)arg3 ;
-(UIButton *)noCodeButton;
-(UIButton *)resendButton;
-(UITextField *)codeInput;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;
-(UIButton *)loginButton;
@end

