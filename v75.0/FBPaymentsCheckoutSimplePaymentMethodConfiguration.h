/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutPaymentMethodConfiguration.h>

@protocol FBPaymentsCardViewHeaderProviding;
@class NSString, NSArray;

@interface FBPaymentsCheckoutSimplePaymentMethodConfiguration : NSObject <FBPaymentsCheckoutPaymentMethodConfiguration> {

	NSString* _productItemType;
	NSArray* _supportedPaymentMethodOptions;
	id<FBPaymentsCardViewHeaderProviding> _cardViewHeaderProvider;
	BOOL _allowUserToSelectBillingCountry;
	BOOL _shouldUsePickerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldUsePickerView;
-(id)supportedPaymentMethodOptions;
-(id)cardViewHeaderProvider;
-(id)productItemType;
-(BOOL)allowUserToSelectBillingCountry;
-(id)initWithProductItemType:(id)arg1 supportedPaymentMethodOptions:(id)arg2 cardViewHeaderProvider:(id)arg3 allowUserToSelectBillingCountry:(BOOL)arg4 shouldUsePickerView:(BOOL)arg5 ;
@end

