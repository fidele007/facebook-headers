/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBAccountConfirmationUpdateContactPointViewControllerDelegate;
@class FBContactPoint, FBAccountConfirmationExperimentContext, NSString, FBUserSession, FBPhoneInputHandler, FBAccountConfirmationUpdateContactPointView, UIAlertView;

@interface FBAccountConfirmationUpdateContactPointViewController : UIViewController <UITextFieldDelegate, UIAlertViewDelegate> {

	FBContactPoint* _contactPoint;
	FBAccountConfirmationExperimentContext* _context;
	unsigned long long _funnelLoggingInstanceID;
	BOOL _isPhoneBouncing;
	BOOL _isBlocked;
	NSString* _reference;
	int _updateMode;
	FBUserSession* _session;
	id<FBAccountConfirmationUpdateContactPointViewControllerDelegate> _delegate;
	FBPhoneInputHandler* _inputHandler;
	FBAccountConfirmationUpdateContactPointView* _updateContactPointView;
	FBContactPoint* _currentContactPoint;
	UIAlertView* _errorAlertView;

}

@property (assign,nonatomic,__weak) id<FBAccountConfirmationUpdateContactPointViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBPhoneInputHandler * inputHandler;                                                             //@synthesize inputHandler=_inputHandler - In the implementation block
@property (nonatomic,retain) FBAccountConfirmationUpdateContactPointView * updateContactPointView;                           //@synthesize updateContactPointView=_updateContactPointView - In the implementation block
@property (nonatomic,retain) FBContactPoint * currentContactPoint;                                                           //@synthesize currentContactPoint=_currentContactPoint - In the implementation block
@property (nonatomic,retain) UIAlertView * errorAlertView;                                                                   //@synthesize errorAlertView=_errorAlertView - In the implementation block
@property (assign,nonatomic) int updateMode;                                                                                 //@synthesize updateMode=_updateMode - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                        //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUpdateMode:(int)arg1 currentContactPoint:(id)arg2 isPhoneBouncing:(BOOL)arg3 funnelLoggingInstanceID:(unsigned long long)arg4 delegate:(id)arg5 isBlocked:(BOOL)arg6 reference:(id)arg7 ;
-(void)setCurrentContactPoint:(FBContactPoint *)arg1 ;
-(FBContactPoint *)currentContactPoint;
-(void)setUpdateMode:(int)arg1 ;
-(int)updateMode;
-(void)setUpdateContactPointView:(FBAccountConfirmationUpdateContactPointView *)arg1 ;
-(void)_handleSubmitNewContactPoint;
-(id)_titleForUpdateMode:(int)arg1 ;
-(void)_navigationBack;
-(id)_newContactPoint;
-(void)_displayErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(void)setErrorAlertView:(UIAlertView *)arg1 ;
-(FBPhoneInputHandler *)inputHandler;
-(FBAccountConfirmationUpdateContactPointView *)updateContactPointView;
-(void)setInputHandler:(FBPhoneInputHandler *)arg1 ;
-(void)setDelegate:(id<FBAccountConfirmationUpdateContactPointViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAccountConfirmationUpdateContactPointViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)becomeFirstResponder;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(UIAlertView *)errorAlertView;
@end

