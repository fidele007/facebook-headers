/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthSignupControllingDelegate.h>
#import <Facebook/FBAuthControlling.h>

@protocol FBAuthSignupControlling, FBAuthUIPresenting, FBAuthSpinnerUIProviding, FBAuthControllingDelegate;
@class UIViewController, NSString;

@interface FBAuthSignupFlowController : NSObject <FBAuthSignupControllingDelegate, FBAuthControlling> {

	id<FBAuthSignupControlling> _signupController;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBAuthSpinnerUIProviding> _uiProvider;
	UIViewController* _presentingViewController;
	id<FBAuthControllingDelegate> _authDelegate;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)signupController:(id)arg1 completedWithResponse:(id)arg2 ;
-(id)initWithSignupController:(id)arg1 presentingViewController:(id)arg2 uiProvider:(id)arg3 uiPresenter:(id)arg4 identifier:(id)arg5 ;
-(void)authenticate;
-(NSString *)identifier;
@end

