/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBAuthenticatingEnterPasscodeViewDelegate.h>

@class FBAuthenticationEnterPasscodeView, FBDeviceBasedAccount, NSString;

@interface FBDBLSetPasscodeViewController : UIViewController <FBAuthenticatingEnterPasscodeViewDelegate> {

	FBAuthenticationEnterPasscodeView* _enterPasscodeView;
	FBDeviceBasedAccount* _deviceBasedAccount;
	unsigned long long _flowType;
	NSString* _providedPasscode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)passcodeEntered:(id)arg1 attempt:(long long)arg2 ;
-(void)secondaryButtonTapped;
-(id)_getInstruction;
-(id)initWithDeviceBasedAccount:(id)arg1 flowType:(unsigned long long)arg2 providedPasscode:(id)arg3 ;
-(id)_getTitle;
-(void)_showNetworkErrorBar;
-(void)_networkRequestTimedOut:(id)arg1 ;
-(void)_showUnknownErrorBar;
-(void)_handleSetPasscodeSuccess:(id)arg1 ;
-(void)_handleSetPasscodeError:(id)arg1 cancelled:(BOOL)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

