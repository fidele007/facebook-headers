/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBAccountRecoveryTextEntryViewDelegate.h>

@protocol FBAccountRecoveryCodeEntryFlowControlling;
@class FBAccountRecoveryFlowData, FBAccountRecoveryCodeEntryController, FBAccountRecoveryTextEntryView, NSString;

@interface FBAccountRecoveryCodeEntryViewController : UIViewController <FBAccountRecoveryTextEntryViewDelegate> {

	FBAccountRecoveryFlowData* _flowData;
	FBAccountRecoveryCodeEntryController* _codeEntryController;
	id<FBAccountRecoveryCodeEntryFlowControlling> _codeEntryFlowControlling;
	FBAccountRecoveryTextEntryView* _textEntryView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textEntryView:(id)arg1 didTapContinueWithText:(id)arg2 ;
-(void)textEntryViewDidTapSecondaryButton:(id)arg1 ;
-(long long)_keyboardTypeForCodeType:(long long)arg1 ;
-(void)_handleContinueWithCodeCompletionWithCode:(id)arg1 error:(id)arg2 ;
-(void)_handleResendCodeSuccessWithCodeType:(long long)arg1 ;
-(void)_handleResendCodeFailureWithError:(id)arg1 ;
-(id)initWithFlowData:(id)arg1 codeEntryController:(id)arg2 codeEntryFlowControlling:(id)arg3 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
