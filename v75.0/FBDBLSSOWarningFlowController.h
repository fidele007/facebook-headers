/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthControllingDelegate.h>
#import <Facebook/FBDBLSSOWarningAuthenticating.h>
#import <Facebook/FBAuthControlling.h>

@protocol FBDBLSSOWarningFlowUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class FBDBLStoredUser, FBDBLSSOFlowController, NSString;

@interface FBDBLSSOWarningFlowController : NSObject <FBAuthControllingDelegate, FBDBLSSOWarningAuthenticating, FBAuthControlling> {

	FBDBLStoredUser* _storedUser;
	id<FBDBLSSOWarningFlowUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBAuthControllingDelegate> _authDelegate;
	FBDBLSSOFlowController* _ssoFlowController;

}

@property (nonatomic,retain) FBDBLSSOFlowController * ssoFlowController;                     //@synthesize ssoFlowController=_ssoFlowController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)authenticationCompleted:(id)arg1 withResponse:(id)arg2 ;
-(void)authenticationDeferred:(id)arg1 withReason:(id)arg2 ;
-(void)continueFromViewController:(id)arg1 ;
-(id)initWithUserInfo:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4 ;
-(void)_authenticateWithSSO;
-(void)setSsoFlowController:(FBDBLSSOFlowController *)arg1 ;
-(FBDBLSSOFlowController *)ssoFlowController;
-(void)authenticate;
@end

