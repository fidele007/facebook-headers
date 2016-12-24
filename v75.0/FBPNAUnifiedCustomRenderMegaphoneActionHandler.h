/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBQPCustomRenderActionHandler.h>
#import <Facebook/FBPNAUnifiedCustomRenderMegaphoneViewDelegate.h>
#import <Facebook/FBPhoneNumberAcquisitionConfirmationViewControllerDelegate.h>
#import <Facebook/FBPhoneInputHandlerDelegate.h>

@class FBPNAUnifiedCustomRenderMegaphoneView, FBPhoneInputHandler, FBPhoneNumberAcquisitionFunnelLogger, NSString;

@interface FBPNAUnifiedCustomRenderMegaphoneActionHandler : FBQPCustomRenderActionHandler <FBPNAUnifiedCustomRenderMegaphoneViewDelegate, FBPhoneNumberAcquisitionConfirmationViewControllerDelegate, FBPhoneInputHandlerDelegate> {

	FBPNAUnifiedCustomRenderMegaphoneView* _view;
	FBPhoneInputHandler* _phoneInputHandler;
	FBPhoneNumberAcquisitionFunnelLogger* _funnelLogger;
	NSString* _initialCountryCode;
	NSString* _funnelPhoneNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleSubmitNewContactPoint;
-(void)phoneInputHandler:(id)arg1 didReceiveInvalidInput:(id)arg2 ;
-(void)phoneInputHandler:(id)arg1 didReceiveValidPhoneNumber:(id)arg2 ;
-(void)phoneInputHandlerDidReceiveReturnPress:(id)arg1 ;
-(id)_funnelLogger;
-(void)phoneNumberAcquisitionConfirmationViewControllerDidCancel:(id)arg1 ;
-(void)phoneNumberAcquisitionConfirmationViewControllerDidComplete:(id)arg1 ;
-(void)_tapSubtitleText:(id)arg1 withEvent:(id)arg2 ;
-(void)_addChangeCountryActionToFunnel;
-(void)_addPhoneNumberAddAttemptEventToFunnelWithPhoneNumber:(id)arg1 countryCode:(id)arg2 ;
-(void)_addInvalidNumberEventToFunnelWithErrorCode:(id)arg1 ;
-(void)_doAddContactpointCoreMutationWithContactpoint:(id)arg1 withCountry:(id)arg2 ;
-(void)_addFunnelAction:(id)arg1 errorCode:(id)arg2 ;
-(void)_handleAddContactpointSuccess;
-(void)_addValidNumberEventToFunnel;
-(void)_handleWebviewLinkTap:(id)arg1 withEvent:(id)arg2 ;
-(void)megaphoneViewDidTapAddNumberButton;
-(void)megaphoneViewDidTapNotNowButton;
-(void)dealloc;
-(void)_handleError:(id)arg1 ;
-(void)_showErrorMessage:(id)arg1 ;
-(void)setUp;
@end

