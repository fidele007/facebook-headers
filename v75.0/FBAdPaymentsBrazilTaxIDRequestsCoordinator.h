/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBHttpRequestToken;
@class FBUserSession, FBAdPaymentsBrazilTaxIDRequestsProvider;

@interface FBAdPaymentsBrazilTaxIDRequestsCoordinator : NSObject {

	FBUserSession* _session;
	FBAdPaymentsBrazilTaxIDRequestsProvider* _requestProvider;
	id<FBHttpRequestToken> _validateTaxIDToken;
	id<FBHttpRequestToken> _getAddressInfoToken;

}
-(id)performGetAddressInfoForPostalCode:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)performValidateOrSaveBrazilTaxIDForAccountId:(id)arg1 brazilTaxID:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end
