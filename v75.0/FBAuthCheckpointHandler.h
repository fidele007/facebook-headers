/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthTransientTokenHandlingDelegate.h>
#import <Facebook/FBAuthenticationMethodHandlerDelegate.h>
#import <Facebook/FBAuthTransientTokenHandling.h>

@protocol FBAuthControlling, FBAuthCheckpointFlowUIProvidingFBAuthSpinnerUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthTransientTokenHandlingDelegate;
@class FBAuthCheckpointInfo, FBAuthCheckpointFlowController, FBAuthenticationManager, FBAuthenticationNonceHandler, NSString;

@interface FBAuthCheckpointHandler : NSObject <FBAuthTransientTokenHandlingDelegate, FBAuthenticationMethodHandlerDelegate, FBAuthTransientTokenHandling> {

	FBAuthCheckpointInfo* _checkpointInfo;
	id<FBAuthControlling> _rootFlowController;
	id<FBAuthCheckpointFlowUIProviding><FBAuthSpinnerUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	FBAuthCheckpointFlowController* _authCheckpointFlowController;
	FBAuthenticationManager* _manager;
	FBAuthenticationNonceHandler* _nonceHandler;
	id<FBAuthTransientTokenHandlingDelegate> _authDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate; 
+(BOOL)checkpointLoginTimedOut;
+(BOOL)isCheckpointURL:(id)arg1 ;
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id<FBAuthControllingDelegate>)authDelegate;
-(id)initWithRootFlowController:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4 ;
-(void)loginUserWithTransientToken:(id)arg1 token:(id)arg2 ;
-(void)authenticationCompleted:(id)arg1 withResponse:(id)arg2 ;
-(void)authenticationDeferred:(id)arg1 withReason:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2 ;
-(void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2 ;
-(void)continueAuthenticationUser:(id)arg1 withToken:(id)arg2 ;
-(void)_loginWithUsername:(id)arg1 nonce:(id)arg2 ;
-(void)_logCheckpointEvent:(id)arg1 ;
-(void)authenticate;
@end
