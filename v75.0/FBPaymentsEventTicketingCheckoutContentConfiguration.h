/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutContentConfiguration.h>

@class FBUserSession, FBMemEvent, FBEventBuyTicketExternalPartnerModel, FBEventAnalyticTracker, FBPaymentsPaymentMethodsCoordinator, FBPaymentsPINController, FBPaymentsTouchIDController, FBEventTicketPricingEngineResult, NSString;

@interface FBPaymentsEventTicketingCheckoutContentConfiguration : NSObject <FBPaymentsCheckoutContentConfiguration> {

	FBUserSession* _session;
	FBMemEvent* _event;
	FBEventBuyTicketExternalPartnerModel* _model;
	FBEventAnalyticTracker* _tracker;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;
	BOOL _isFreePurchase;
	FBEventTicketPricingEngineResult* _priceTable;

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
-(BOOL)shouldDisplayTotalAmountOnly;
-(id)paymentProcessLoadingStyleProvider;
-(/*^block*/id)_titleProvider;
-(id)initWithSession:(id)arg1 model:(id)arg2 event:(id)arg3 tracker:(id)arg4 pinController:(id)arg5 touchIDController:(id)arg6 ;
@end

