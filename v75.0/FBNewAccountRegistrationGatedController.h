/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthSignupControllingDelegate.h>
#import <Facebook/FBAuthSignupControlling.h>

@protocol FBAuthSignupControllingDelegate, FBAuthSignupControlling;
@class UIViewController, FBUserSession, NSString;

@interface FBNewAccountRegistrationGatedController : NSObject <FBAuthSignupControllingDelegate, FBAuthSignupControlling> {

	UIViewController* _nativeRegistrationController;
	id<FBAuthSignupControllingDelegate> _authDelegate;
	id<FBAuthSignupControlling> _controllerImplementation;
	FBUserSession* _session;

}

@property (nonatomic,retain) id<FBAuthSignupControlling> controllerImplementation;                 //@synthesize controllerImplementation=_controllerImplementation - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthSignupControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(id)_registrationController;
-(void)setControllerImplementation:(id<FBAuthSignupControlling>)arg1 ;
-(void)setAuthDelegate:(id<FBAuthSignupControllingDelegate>)arg1 ;
-(void)presentSignupFromViewController:(id)arg1 withIdentifier:(id)arg2 ;
-(id<FBAuthSignupControllingDelegate>)authDelegate;
-(void)signupController:(id)arg1 completedWithResponse:(id)arg2 ;
-(id<FBAuthSignupControlling>)controllerImplementation;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

