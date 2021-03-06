/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDBLPinRecoveryAuthenticating.h>
#import <Facebook/FBAuthControlling.h>

@protocol FBDBLPinRecoveryFlowUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class FBDBLStoredUser, FBAuthenticationHandlerResponse, NSString;

@interface FBDBLPinRecoveryFlowController : NSObject <FBDBLPinRecoveryAuthenticating, FBAuthControlling> {

	FBDBLStoredUser* _storedUser;
	FBAuthenticationHandlerResponse* _authResponse;
	id<FBDBLPinRecoveryFlowUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBAuthControllingDelegate> _authDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)_saveAccountFromResponse:(id)arg1 userID:(id)arg2 ;
-(void)removePinFromViewController:(id)arg1 ;
-(void)setPin:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithUserInfo:(id)arg1 authenticationResponse:(id)arg2 uiProvider:(id)arg3 uiPresenter:(id)arg4 requesterConfiguration:(id)arg5 ;
-(void)_setPin:(id)arg1 ;
-(void)_setPinFailedShouldHavePin:(BOOL)arg1 ;
-(void)authenticate;
@end

