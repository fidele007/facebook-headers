/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBInstreamAdOnboardingViewControllerDelegate;
@class FBUserSession, NSString, FBWebViewController, NSMutableArray, FBInstreamAdOnboardingView;

@interface FBInstreamAdOnboardingViewController : UIViewController {

	FBUserSession* _session;
	NSString* _targetID;
	BOOL _previousStatusBarState;
	FBWebViewController* _paymentSetupViewController;
	NSMutableArray* _states;
	id<FBInstreamAdOnboardingViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBInstreamAdOnboardingView * view; 
@property (assign,nonatomic,__weak) id<FBInstreamAdOnboardingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 targetID:(id)arg2 flowSteps:(id)arg3 ;
-(void)setViolationState;
-(BOOL)_isTutorialOnly;
-(void)_enterNextStateIfAvailable;
-(void)_didTapTermsViewAgreeButton:(id)arg1 ;
-(void)_didTapPaymentViewSetupButton:(id)arg1 ;
-(void)_sendAgreeLegalTermRequest;
-(void)_didTapNavigationXout:(id)arg1 ;
-(void)setDelegate:(id<FBInstreamAdOnboardingViewControllerDelegate>)arg1 ;
-(id<FBInstreamAdOnboardingViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)reset;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_dismiss;
@end

