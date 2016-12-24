/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsLoggingService.h>

@protocol FBPaymentsLoggingServiceDataSource;
@class FBPaymentsCheckoutPaymentInfo, NSString;

@interface FBPaymentsCheckoutLoggingService : NSObject <FBPaymentsLoggingService> {

	FBPaymentsCheckoutPaymentInfo* _paymentInfo;
	id<FBPaymentsLoggingServiceDataSource> _dataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(id)initWithPaymentInfo:(id)arg1 loggingServiceDataSource:(id)arg2 ;
-(void)_logEventsForCheckoutViewControllerWithEventName:(id)arg1 collectedData:(id)arg2 existingExtraFields:(id)arg3 ;
-(void)logEvent:(id)arg1 flowStep:(id)arg2 collectedData:(id)arg3 extraData:(id)arg4 ;
-(void)_logEventsForAddressFormViewControllerWithEventName:(id)arg1 collectedData:(id)arg2 existingExtraFields:(id)arg3 ;
-(void)_logEventsForAddressListViewControllerWithEventName:(id)arg1 collectedData:(id)arg2 existingExtraFields:(id)arg3 ;
-(void)_logEventsForPaymentMethodPickerViewControllerWithEventName:(id)arg1 collectedData:(id)arg2 existingExtraFields:(id)arg3 ;
-(void)_logEventsForCardViewControllerWithEventName:(id)arg1 collectedData:(id)arg2 existingExtraFields:(id)arg3 ;
-(void)_logEventsForAddCardActionWithEventName:(id)arg1 collectedData:(id)arg2 existingExtraFields:(id)arg3 ;
-(void)_logEventsForShippingOptionPickerViewControllerWithEventName:(id)arg1 collectedData:(id)arg2 existingExtraFields:(id)arg3 ;
-(void)_logEventsForBankTableViewControllerWithEventName:(id)arg1 collectedData:(id)arg2 existingExtraFields:(id)arg3 ;
-(void)_logEventsForSecurityCodeVerificationExtensionWithEventName:(id)arg1 collectedData:(id)arg2 existingExtraFields:(id)arg3 ;
@end

