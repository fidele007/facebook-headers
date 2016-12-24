/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBDBLPinRecoveryViewControllerProtocol.h>

@protocol FBDBLPinRecoveryAuthenticating;
@class FBDBLStoredUser, UITapGestureRecognizer, FBDBLPinRecoveryView, NSString;

@interface FBDBLPadPinRecoveryViewController : UIViewController <FBDBLPinRecoveryViewControllerProtocol> {

	FBDBLStoredUser* _userInfo;
	UITapGestureRecognizer* _recognizer;
	id<FBDBLPinRecoveryAuthenticating> _authDelegate;
	FBDBLPinRecoveryView* _pinRecoveryView;

}

@property (nonatomic,readonly) FBDBLPinRecoveryView * pinRecoveryView;                            //@synthesize pinRecoveryView=_pinRecoveryView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBDBLPinRecoveryAuthenticating> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBDBLPinRecoveryAuthenticating>)arg1 ;
-(id<FBDBLPinRecoveryAuthenticating>)authDelegate;
-(id)analyticsModule;
-(id)initWithUserInfo:(id)arg1 ;
-(void)_resignAnyFirstResponder;
-(FBDBLPinRecoveryView *)pinRecoveryView;
-(void)_removePinTapped:(id)arg1 ;
-(BOOL)_canSubmitPin;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLoad;
-(void)_textChanged:(id)arg1 ;
@end

