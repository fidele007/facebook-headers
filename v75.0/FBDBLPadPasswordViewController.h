/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Facebook/FBDBLPasswordViewControllerProtocol.h>

@protocol FBDBLViewConfiguring, FBDBLPasswordAuthenticating;
@class NSError, UITapGestureRecognizer, FBDBLStoredUser, FBDBLPadPasswordView, NSString;

@interface FBDBLPadPasswordViewController : UIViewController <UITextFieldDelegate, FBDBLPasswordViewControllerProtocol> {

	NSError* _error;
	id<FBDBLViewConfiguring> _configuration;
	BOOL _alertShown;
	UITapGestureRecognizer* _recognizer;
	id<FBDBLPasswordAuthenticating> _authDelegate;
	FBDBLStoredUser* _userInfo;
	FBDBLPadPasswordView* _passwordView;

}

@property (nonatomic,readonly) FBDBLStoredUser * userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) FBDBLPadPasswordView * passwordView;                            //@synthesize passwordView=_passwordView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBDBLPasswordAuthenticating> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBDBLPasswordAuthenticating>)arg1 ;
-(id<FBDBLPasswordAuthenticating>)authDelegate;
-(id)initWithUserInfo:(id)arg1 error:(id)arg2 configuration:(id)arg3 ;
-(FBDBLPadPasswordView *)passwordView;
-(void)_loginTapped:(id)arg1 ;
-(void)_helpTapped:(id)arg1 ;
-(void)_resignAnyFirstResponder;
-(BOOL)_canSubmitLogin;
-(void)_submitLogin;
-(void)dealloc;
-(void)loadView;
-(FBDBLStoredUser *)userInfo;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_textChanged:(id)arg1 ;
@end

