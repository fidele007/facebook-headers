/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutConfiguration.h>

@class FBUserSession, FBEventBuyTicketExternalPartnerModel, FBEventAnalyticTracker, FBMemEvent, FBPaymentsPINController, FBPaymentsTouchIDController, NSString;

@interface FBPaymentsEventTicketingCheckoutConfiguration : NSObject <FBPaymentsCheckoutConfiguration> {

	FBUserSession* _session;
	FBEventBuyTicketExternalPartnerModel* _model;
	FBEventAnalyticTracker* _tracker;
	FBMemEvent* _event;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_contentConfiguration;
-(id)paymentInfo;
-(id)orderStatusController;
-(id)initWithSession:(id)arg1 model:(id)arg2 event:(id)arg3 tracker:(id)arg4 pinController:(id)arg5 touchIDController:(id)arg6 ;
-(id)requestHandler;
@end

