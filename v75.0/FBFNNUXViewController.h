/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInterstitialViewController.h>
#import <Facebook/FBInterstitialViewDelegate.h>
#import <Facebook/FBFNNUXStepDelegate.h>
#import <Facebook/FBFNSettingsPrivacySelectorViewControllerDelegate.h>
#import <Facebook/FBNuxStepViewController.h>

@protocol FBFNNUXStep, FBNUXViewControllerDelegate;
@class FBUserSession, UIActivityIndicatorView, UIView, NSString, CAShapeLayer;

@interface FBFNNUXViewController : FBInterstitialViewController <FBInterstitialViewDelegate, FBFNNUXStepDelegate, FBFNSettingsPrivacySelectorViewControllerDelegate, FBNuxStepViewController> {

	id<FBFNNUXStep> _interstitial;
	FBUserSession* _session;
	BOOL _isLastScreen;
	BOOL _isSinglePageNUX;
	BOOL _didPushViewController;
	UIActivityIndicatorView* _activityIndicatorView;
	UIView* _dimmingView;
	NSString* _nuxSurface;
	CAShapeLayer* _dot1;
	CAShapeLayer* _dot2;
	id<FBNUXViewControllerDelegate> _delegate;
	unsigned long long _interfaceOrientationMask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientationMask;                  //@synthesize interfaceOrientationMask=_interfaceOrientationMask - In the implementation block
-(void)privacySelector:(id)arg1 didSelectPrivacyOptions:(id)arg2 ;
-(void)interstitialView:(id)arg1 didSelectPrimaryButton:(id)arg2 ;
-(void)interstitialView:(id)arg1 didSelectSecondaryButton:(id)arg2 ;
-(void)interstitialView:(id)arg1 didSelectDismissButton:(id)arg2 ;
-(id)initWithStep:(id)arg1 ;
-(void)transitionToSubStep:(id)arg1 ;
-(void)setStepProgress:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2 ;
-(id)createDot:(id)arg1 ;
-(void)didSwipeScreen;
-(void)_addLoadingIndicator:(id)arg1 ;
-(void)_dismissNUXView:(id)arg1 ;
-(void)_removeLoadingIndicator;
-(void)openPrivacySelectorViewAtStep:(id)arg1 privacyOptions:(id)arg2 selectedOption:(id)arg3 ;
-(void)openURLAtStep:(id)arg1 url:(id)arg2 ;
-(void)didTapNotNowButton:(id)arg1 ;
-(void)didTapTurnOnButton:(id)arg1 ;
-(void)setDelegate:(id<FBNUXViewControllerDelegate>)arg1 ;
-(id<FBNUXViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
-(unsigned long long)interfaceOrientationMask;
@end

