/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdPaymentsCardGraphRequestsProvider : NSObject
-(id)addCardRequestWithAdAccountId:(id)arg1 countryCode:(id)arg2 shouldSupportTrickyBin:(BOOL)arg3 cardCollectedData:(id)arg4 callbackPerformer:(id)arg5 ;
-(id)parseAddCardResponse:(id)arg1 ;
-(id)getCardRequestWithCredentialId:(id)arg1 callbackPerformer:(id)arg2 ;
-(id)parseGetCardResponse:(id)arg1 ;
@end

