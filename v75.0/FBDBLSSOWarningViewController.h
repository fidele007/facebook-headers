/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAuthHeaderContentFooterViewController.h>
#import <Facebook/FBAuthUIPresentingConfigurable.h>
#import <Facebook/FBDBLSSOWarningViewControllerProtocol.h>

@protocol FBDBLViewConfiguring, FBDBLSSOWarningAuthenticating;
@class FBImageDownloader, FBAuthenticationRoundedImageView, UIActionSheet, FBDBLStoredUser, FBDBLSSOWarningView, NSString;

@interface FBDBLSSOWarningViewController : FBAuthHeaderContentFooterViewController <FBAuthUIPresentingConfigurable, FBDBLSSOWarningViewControllerProtocol> {

	id<FBDBLViewConfiguring> _configuration;
	FBImageDownloader* _imageDownloader;
	FBAuthenticationRoundedImageView* _userImageView;
	UIActionSheet* _helpActionSheet;
	id<FBDBLSSOWarningAuthenticating> _authDelegate;
	FBDBLStoredUser* _userInfo;
	FBDBLSSOWarningView* _ssoWarningView;
	/*^block*/id _backButtonCallback;

}

@property (nonatomic,copy) id backButtonCallback;                                                //@synthesize backButtonCallback=_backButtonCallback - In the implementation block
@property (nonatomic,readonly) FBDBLStoredUser * userInfo;                                       //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) FBDBLSSOWarningView * ssoWarningView;                             //@synthesize ssoWarningView=_ssoWarningView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBDBLSSOWarningAuthenticating> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBDBLSSOWarningAuthenticating>)arg1 ;
-(id<FBDBLSSOWarningAuthenticating>)authDelegate;
-(id)analyticsModule;
-(void)setBackButtonCallback:(id)arg1 ;
-(id)initWithUserInfo:(id)arg1 configuration:(id)arg2 imageDownloader:(id)arg3 ;
-(void)_backTapped:(id)arg1 ;
-(void)_helpTapped:(id)arg1 ;
-(id)backButtonCallback;
-(FBDBLSSOWarningView *)ssoWarningView;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(FBDBLStoredUser *)userInfo;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_continueTapped:(id)arg1 ;
@end

