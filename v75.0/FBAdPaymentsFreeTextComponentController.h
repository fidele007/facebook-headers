/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdPaymentsFormComponentController.h>

@class FBAdPaymentsTextAndImageViewConfiguration, FBAdPaymentsFreeTextInputHandler;

@interface FBAdPaymentsFreeTextComponentController : FBAdPaymentsFormComponentController {

	FBAdPaymentsTextAndImageViewConfiguration* _configuration;
	FBAdPaymentsFreeTextInputHandler* _freeTextInputHandler;

}
-(id)effectiveText;
-(id)textAndImageViewConfiguration;
-(id)textInputHandler;
-(id)initWithSession:(id)arg1 componentIdentifier:(id)arg2 textAndImageViewConfiguration:(id)arg3 freeTextInputHandler:(id)arg4 ;
-(void)setIsTextRequired:(BOOL)arg1 ;
@end

