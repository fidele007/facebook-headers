/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBPageComponentFlowTextInputWithTitleComponent, FBPageComponentFlowAddressTypeaheadComponent;

@interface FBPageComponentFlowAddressFormComponent : CKCompositeComponent {

	FBPageComponentFlowTextInputWithTitleComponent* _cityTextInputComponent;
	FBPageComponentFlowTextInputWithTitleComponent* _stateComponent;
	FBPageComponentFlowTextInputWithTitleComponent* _zipcodeComponent;
	FBPageComponentFlowAddressTypeaheadComponent* _address1Component;
	FBPageComponentFlowAddressTypeaheadComponent* _cityTypeheadComponent;

}
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
-(void)streetAddressSelected:(id)arg1 item:(id)arg2 ;
-(void)citySelected:(id)arg1 item:(id)arg2 ;
@end

