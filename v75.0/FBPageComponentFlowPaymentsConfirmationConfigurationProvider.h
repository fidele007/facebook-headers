/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutConfirmationConfigurationProviding.h>

@class FBMemPaymentScreenData, FBUserSession, FBPageComponentFlowFunnelLogger, NSString;

@interface FBPageComponentFlowPaymentsConfirmationConfigurationProvider : NSObject <FBPaymentsCheckoutConfirmationConfigurationProviding> {

	FBMemPaymentScreenData* _model;
	FBUserSession* _session;
	FBPageComponentFlowFunnelLogger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)confirmationConfigurationForCollectedData:(id)arg1 checkoutResponse:(id)arg2 ;
-(id)initWithSession:(id)arg1 model:(id)arg2 logger:(id)arg3 ;
@end

