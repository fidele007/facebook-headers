/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>

@class NSMutableDictionary, FBLeadGenContinuedFlowFunnelLogger;

@interface FBLeadGenUnsharedDialogContentComponentController : CKComponentController {

	NSMutableDictionary* _fieldKeyToTextFieldComponent;
	FBLeadGenContinuedFlowFunnelLogger* _continuedFlowFunnelLogger;

}
-(id)theComponent;
-(void)willMount;
-(void)userDidTapBackButton;
-(void)didShareAfterSubmit;
-(void)didMountTextFieldComponent:(id)arg1 withFieldKey:(id)arg2 ;
-(void)userDidTapNavigateButton:(id)arg1 ;
-(void)userDidTapSubmitButton;
-(BOOL)userSharedInfoIsInvalid;
-(void)handleInvalidUserInfo;
-(void)updateStateAfterTapNavigateButton:(BOOL)arg1 ;
-(void)makeGraphQLMutationCallToShareUserInfo;
-(void)processSplitFlow:(id)arg1 splitFlowURLString:(id)arg2 ;
@end

