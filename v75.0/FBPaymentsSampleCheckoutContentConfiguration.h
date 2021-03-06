/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutContentConfiguration.h>

@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, FBPaymentsPINController, FBPaymentsTouchIDController, NSString;

@interface FBPaymentsSampleCheckoutContentConfiguration : NSObject <FBPaymentsCheckoutContentConfiguration> {

	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	FBPaymentsPINController* _paymentsPINController;
	FBPaymentsTouchIDController* _touchIDController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)confirmationConfigurationProvider;
-(id)explanationInformation;
-(id)paymentProcessLoadingStyleProvider;
-(id)initWithSession:(id)arg1 paymentsPINController:(id)arg2 touchIDController:(id)arg3 ;
@end

