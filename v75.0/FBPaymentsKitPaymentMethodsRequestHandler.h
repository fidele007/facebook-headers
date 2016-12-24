/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBPaymentsKitPaymentMethodsRequestHandler : NSObject {

	FBUserSession* _session;
	long long _itemType;
	NSString* _countryCode;
	id _extraInfo;

}
-(id)initWithSession:(id)arg1 itemType:(long long)arg2 countryCode:(id)arg3 extraInfo:(id)arg4 ;
-(void)_validateExtraInfo;
-(id)_createGraphRequestForAddingCard:(id)arg1 ;
-(id)_createGraphRequestForUpdatingCard:(id)arg1 ;
-(void)_dispatchRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createGraphRequestForRemovingCard:(id)arg1 ;
-(id)_createGraphRequestForRemovingPaypalBillingAgreement:(id)arg1 ;
-(void)removeCreditCardWithCredentialID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removePaypalBillingAgreementWithCredentialID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addCreditCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateCreditCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removePaymentMethod:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
