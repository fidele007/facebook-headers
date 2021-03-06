/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBNewAccountRegistrationAccountCreationViewControllerDelegate;
@class FBNewAccountRegistrationData, FBNewAccountRegistrationAccountCreationView, NSError;

@interface FBNewAccountRegistrationAccountCreationViewController : UIViewController {

	FBNewAccountRegistrationData* _registrationData;
	FBNewAccountRegistrationAccountCreationView* _creationView;
	BOOL _hasViewControllerTransitionFinished;
	id<FBNewAccountRegistrationAccountCreationViewControllerDelegate> _delegate;
	unsigned long long _requestStatus;
	NSError* _registrationError;
	id _registrationResponse;

}

@property (assign,nonatomic) unsigned long long requestStatus;                                                               //@synthesize requestStatus=_requestStatus - In the implementation block
@property (nonatomic,retain) NSError * registrationError;                                                                    //@synthesize registrationError=_registrationError - In the implementation block
@property (nonatomic,retain) id registrationResponse;                                                                        //@synthesize registrationResponse=_registrationResponse - In the implementation block
@property (assign,nonatomic) BOOL hasViewControllerTransitionFinished;                                                       //@synthesize hasViewControllerTransitionFinished=_hasViewControllerTransitionFinished - In the implementation block
@property (assign,nonatomic,__weak) id<FBNewAccountRegistrationAccountCreationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithRegistrationData:(id)arg1 ;
-(BOOL)hasViewControllerTransitionFinished;
-(void)_stopSpinningAndHandleError:(id)arg1 ;
-(void)setRegistrationResponse:(id)arg1 ;
-(void)_stopSpinningAndHandleResponse:(id)arg1 ;
-(void)accountCreationViewStartActivityIndicator;
-(void)submitRegistrationRequest;
-(void)updateUserGender:(id)arg1 withSession:(id)arg2 ;
-(void)didFinishTransitionToAccountCreationViewController;
-(id)registrationResponse;
-(void)setHasViewControllerTransitionFinished:(BOOL)arg1 ;
-(void)setDelegate:(id<FBNewAccountRegistrationAccountCreationViewControllerDelegate>)arg1 ;
-(id<FBNewAccountRegistrationAccountCreationViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setRegistrationError:(NSError *)arg1 ;
-(NSError *)registrationError;
-(unsigned long long)requestStatus;
-(void)setRequestStatus:(unsigned long long)arg1 ;
@end

