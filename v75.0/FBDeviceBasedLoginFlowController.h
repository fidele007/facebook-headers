/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthControllingDelegate.h>
#import <Facebook/FBAuthControlling.h>

@protocol FBDeviceBasedLoginFlowUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class FBDBLUserChooserFlowController, FBAuthUsernamePasswordFlowController, NSString;

@interface FBDeviceBasedLoginFlowController : NSObject <FBAuthControllingDelegate, FBAuthControlling> {

	id<FBDeviceBasedLoginFlowUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBAuthControllingDelegate> _authDelegate;
	FBDBLUserChooserFlowController* _userChooserFlowController;
	FBAuthUsernamePasswordFlowController* _usernamePasswordFlowController;

}

@property (nonatomic,retain) FBDBLUserChooserFlowController * userChooserFlowController;                         //@synthesize userChooserFlowController=_userChooserFlowController - In the implementation block
@property (nonatomic,retain) FBAuthUsernamePasswordFlowController * usernamePasswordFlowController;              //@synthesize usernamePasswordFlowController=_usernamePasswordFlowController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;                                  //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id<FBAuthControllingDelegate>)authDelegate;
-(id)initWithUIProvider:(id)arg1 uiPresenter:(id)arg2 requesterConfiguration:(id)arg3 ;
-(void)authenticationCompleted:(id)arg1 withResponse:(id)arg2 ;
-(void)authenticationDeferred:(id)arg1 withReason:(id)arg2 ;
-(void)setUserChooserFlowController:(FBDBLUserChooserFlowController *)arg1 ;
-(void)_authenticateWithUsernamePasswordFlow;
-(void)setUsernamePasswordFlowController:(FBAuthUsernamePasswordFlowController *)arg1 ;
-(FBDBLUserChooserFlowController *)userChooserFlowController;
-(FBAuthUsernamePasswordFlowController *)usernamePasswordFlowController;
-(void)authenticate;
@end
