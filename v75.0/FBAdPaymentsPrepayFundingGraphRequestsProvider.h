/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdPaymentsPrepayFundingGraphRequestsProvider : NSObject
-(id)prepayFundRequestForAdAccountId:(id)arg1 paymentOptionType:(id)arg2 credentialId:(id)arg3 cscToken:(id)arg4 fundingAmount:(id)arg5 callbackPerformer:(id)arg6 ;
-(id)parsePrepayFundingResponse:(id)arg1 ;
-(id)prepayFundGetCachedCSCTokenForCredentialId:(id)arg1 securityCode:(id)arg2 callbackPerformer:(id)arg3 ;
-(id)parsePrepayFundingGetCachedCSCTokenResponse:(id)arg1 ;
@end

