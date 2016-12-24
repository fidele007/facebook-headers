/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBDBLPinViewDelegate.h>
#import <Facebook/FBAuthUIPresentingConfigurable.h>
#import <Facebook/FBDBLPinViewControllerProtocol.h>

@protocol FBDBLViewConfiguring, FBDBLPinAuthenticating;
@class FBImageDownloader, FBAuthenticationRoundedImageView, FBDBLStoredUser, FBDBLPinView, NSString;

@interface FBDBLPinViewController : UIViewController <FBDBLPinViewDelegate, FBAuthUIPresentingConfigurable, FBDBLPinViewControllerProtocol> {

	id<FBDBLViewConfiguring> _configuration;
	FBImageDownloader* _imageDownloader;
	FBAuthenticationRoundedImageView* _userImageView;
	BOOL _retry;
	id<FBDBLPinAuthenticating> _authDelegate;
	FBDBLStoredUser* _userInfo;
	FBDBLPinView* _pinView;
	/*^block*/id _backButtonCallback;

}

@property (nonatomic,copy) id backButtonCallback;                                         //@synthesize backButtonCallback=_backButtonCallback - In the implementation block
@property (nonatomic,readonly) FBDBLStoredUser * userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) FBDBLPinView * pinView;                                    //@synthesize pinView=_pinView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBDBLPinAuthenticating> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBDBLPinAuthenticating>)arg1 ;
-(id<FBDBLPinAuthenticating>)authDelegate;
-(id)analyticsModule;
-(void)setBackButtonCallback:(id)arg1 ;
-(id)initWithUserInfo:(id)arg1 retry:(BOOL)arg2 configuration:(id)arg3 imageDownloader:(id)arg4 ;
-(id)backButtonCallback;
-(void)dblPinViewCancelTapped:(id)arg1 ;
-(void)dblPinViewEditingChanged:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(FBDBLStoredUser *)userInfo;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(FBDBLPinView *)pinView;
@end

