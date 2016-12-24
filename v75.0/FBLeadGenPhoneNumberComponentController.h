/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKStatefulViewComponentController.h>
#import <Facebook/FBPhoneInputHandlerDelegate.h>

@class FBPhoneInputHandler, FBLeadGenPhoneNumberComponent, NSString;

@interface FBLeadGenPhoneNumberComponentController : CKStatefulViewComponentController <FBPhoneInputHandlerDelegate> {

	FBPhoneInputHandler* _phoneInputHandler;

}

@property (nonatomic,__weak,readonly) FBLeadGenPhoneNumberComponent * component; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(void)phoneInputHandler:(id)arg1 didReceiveInvalidInput:(id)arg2 ;
-(void)phoneInputHandler:(id)arg1 didReceiveValidPhoneNumber:(id)arg2 ;
-(void)phoneInputHandlerDidBeginEditing:(id)arg1 ;
-(void)phoneInputHandlerDidEndEditing:(id)arg1 ;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)postEditingUpdate:(id)arg1 ;
-(void)phoneInputHandler:(id)arg1 didReceivePhoneNumber:(id)arg2 ;
-(void)tapDoneButton;
@end
