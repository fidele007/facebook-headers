/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthControllingDelegate.h>
#import <Facebook/FBAppSessionLoginHelperUIProviding.h>

@protocol FBNetworkDispatch, FBAuthSignupControlling, FBAuthControlling;
@class FBAuthRegistrationHandler, FBAuthCheckpointHandler, NSString;

@interface FBWildeLoginHelperUIProvider : NSObject <FBAuthControllingDelegate, FBAppSessionLoginHelperUIProviding> {

	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBAuthSignupControlling> _signupController;
	id<FBAuthControlling> _authControlling;
	FBAuthRegistrationHandler* _regHandler;
	FBAuthCheckpointHandler* _checkpointHandler;
	/*^block*/id _successBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loginUserWithTransientToken:(id)arg1 token:(id)arg2 tokenType:(unsigned long long)arg3 ;
-(id)initWithRequesterConfiguration:(id)arg1 signupController:(id)arg2 ;
-(void)loginNewlyRegisteredUser:(id)arg1 nonce:(id)arg2 ;
-(void)authenticationCompleted:(id)arg1 withResponse:(id)arg2 ;
-(void)authenticationDeferred:(id)arg1 withReason:(id)arg2 ;
-(void)presentLoginUIFromRootWindow:(id)arg1 showSpinner:(BOOL)arg2 fromLaunch:(BOOL)arg3 successBlock:(/*^block*/id)arg4 ;
-(void)resetLoginUI;
-(BOOL)openURL:(id)arg1 ;
@end
