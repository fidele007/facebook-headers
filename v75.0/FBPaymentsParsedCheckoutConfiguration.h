/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutConfiguration.h>

@protocol FBPaymentsCheckoutRequestHandling, FBPaymentsCheckoutOrderStatusControlling, FBPaymentsCheckoutContentConfiguration;
@class FBPaymentsCheckoutPaymentInfo, NSString;

@interface FBPaymentsParsedCheckoutConfiguration : NSObject <FBPaymentsCheckoutConfiguration> {

	id<FBPaymentsCheckoutRequestHandling> _requestHandler;
	id<FBPaymentsCheckoutOrderStatusControlling> _orderStatusController;
	id<FBPaymentsCheckoutContentConfiguration> _contentConfiguration;
	FBPaymentsCheckoutPaymentInfo* _paymentInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)paymentInfo;
-(id)orderStatusController;
-(id)contentConfiguration;
-(id)initWithPaymentInfo:(id)arg1 requestHandler:(id)arg2 contentConfiguration:(id)arg3 orderStatusController:(id)arg4 ;
-(id)requestHandler;
@end
