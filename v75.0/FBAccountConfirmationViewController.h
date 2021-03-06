/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBAccountConfirmationUpdateContactPointViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBAccountConfirmationViewDelegate.h>

@protocol FBAccountConfirmationViewControllerDelegate;
@class FBAccountConfirmationExperimentContext, NSString, FBAccountConfirmationView, FBUserSession, FBContactPoint, NSTimer, FBBezelView;

@interface FBAccountConfirmationViewController : UIViewController <FBAccountConfirmationUpdateContactPointViewControllerDelegate, UIAlertViewDelegate, FBAccountConfirmationViewDelegate> {

	FBAccountConfirmationExperimentContext* _context;
	unsigned long long _funnelLoggingInstanceID;
	NSString* _reference;
	NSString* _prefilledConfirmationCode;
	BOOL _enableCancel;
	id<FBAccountConfirmationViewControllerDelegate> _delegate;
	FBAccountConfirmationView* _confirmContactView;
	FBUserSession* _session;
	FBContactPoint* _contactPoint;
	NSTimer* _dismissOnSuccessTimer;
	FBBezelView* _bezelView;

}

@property (assign,nonatomic) BOOL enableCancel;                                                            //@synthesize enableCancel=_enableCancel - In the implementation block
@property (assign,nonatomic,__weak) id<FBAccountConfirmationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBAccountConfirmationView * confirmContactView;                               //@synthesize confirmContactView=_confirmContactView - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBContactPoint * contactPoint;                                                //@synthesize contactPoint=_contactPoint - In the implementation block
@property (nonatomic,retain) NSTimer * dismissOnSuccessTimer;                                              //@synthesize dismissOnSuccessTimer=_dismissOnSuccessTimer - In the implementation block
@property (nonatomic,retain) FBBezelView * bezelView;                                                      //@synthesize bezelView=_bezelView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dismissActionSheet;
-(void)_didTapCancel;
-(FBBezelView *)bezelView;
-(void)accountConfirmationViewDidTapAlertViewResendButton;
-(id)initWithSession:(id)arg1 contactPoint:(id)arg2 confirmationCode:(id)arg3 isCliffed:(BOOL)arg4 funnelLoggingInstanceID:(unsigned long long)arg5 delegate:(id)arg6 reference:(id)arg7 ;
-(void)_prepareView;
-(void)_handleSubmitConfirmationCode:(id)arg1 ;
-(void)_composeView;
-(void)_handleSuccessfulConfirmation;
-(void)_handleFailedConfirmationWithError:(id)arg1 submittedCode:(id)arg2 ;
-(void)_didCompleteConfirmation;
-(void)setDismissOnSuccessTimer:(NSTimer *)arg1 ;
-(void)_handleResendConfirmationCodeSuccess;
-(void)_handleResendConfirmationCodeFailureWithError:(id)arg1 ;
-(void)_voiceConfirmationDidSucceed;
-(void)_voiceConfirmationDidFail;
-(void)_logoutUser;
-(void)_dismissConfirmationController:(BOOL)arg1 ;
-(void)_handleResendConfirmationCode:(id)arg1 ;
-(void)setConfirmContactView:(FBAccountConfirmationView *)arg1 ;
-(FBAccountConfirmationView *)confirmContactView;
-(void)_didTapLogout;
-(void)_handleSwitchContactPointType:(id)arg1 ;
-(void)_handleUpdateContactPoint:(id)arg1 ;
-(void)_handleVoiceConfirmation:(id)arg1 ;
-(void)setBezelView:(FBBezelView *)arg1 ;
-(NSTimer *)dismissOnSuccessTimer;
-(id)initWithSession:(id)arg1 contactPoint:(id)arg2 isCliffed:(BOOL)arg3 funnelLoggingInstanceID:(unsigned long long)arg4 delegate:(id)arg5 reference:(id)arg6 ;
-(void)updateViewController:(id)arg1 didUpdateContactPoint:(id)arg2 ;
-(void)setDelegate:(id<FBAccountConfirmationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAccountConfirmationViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(FBContactPoint *)contactPoint;
-(FBUserSession *)session;
-(void)setContactPoint:(FBContactPoint *)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(BOOL)enableCancel;
-(void)setEnableCancel:(BOOL)arg1 ;
@end

