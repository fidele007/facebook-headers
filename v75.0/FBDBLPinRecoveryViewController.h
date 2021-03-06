/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBDBLPinRecoveryViewControllerProtocol.h>

@protocol FBDBLPinRecoveryAuthenticating;
@class FBDBLStoredUser, UITapGestureRecognizer, FBDBLPinRecoveryView, FBKeyboardObserver, NSString;

@interface FBDBLPinRecoveryViewController : UIViewController <FBKeyboardObserverDelegate, FBDBLPinRecoveryViewControllerProtocol> {

	FBDBLStoredUser* _userInfo;
	UITapGestureRecognizer* _recognizer;
	id<FBDBLPinRecoveryAuthenticating> _authDelegate;
	FBDBLPinRecoveryView* _pinRecoveryView;
	FBKeyboardObserver* _keyboardObserver;
	UIEdgeInsets _minimumEdgeInsets;
	CGRect _keyboardFrame;
	CGRect _statusBarFrame;

}

@property (nonatomic,readonly) UIEdgeInsets minimumEdgeInsets;                                    //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (nonatomic,readonly) FBKeyboardObserver * keyboardObserver;                             //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                                //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic) CGRect statusBarFrame;                                               //@synthesize statusBarFrame=_statusBarFrame - In the implementation block
@property (nonatomic,readonly) FBDBLPinRecoveryView * pinRecoveryView;                            //@synthesize pinRecoveryView=_pinRecoveryView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBDBLPinRecoveryAuthenticating> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBDBLPinRecoveryAuthenticating>)arg1 ;
-(id<FBDBLPinRecoveryAuthenticating>)authDelegate;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(id)analyticsModule;
-(id)initWithUserInfo:(id)arg1 ;
-(void)_resignAnyFirstResponder;
-(UIEdgeInsets)minimumEdgeInsets;
-(FBDBLPinRecoveryView *)pinRecoveryView;
-(void)_removePinTapped:(id)arg1 ;
-(void)_updateRecoverViewEdgeInsets;
-(FBKeyboardObserver *)keyboardObserver;
-(BOOL)_canSubmitPin;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(CGRect)statusBarFrame;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_textChanged:(id)arg1 ;
-(CGRect)keyboardFrame;
-(void)setStatusBarFrame:(CGRect)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

