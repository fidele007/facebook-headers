/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBHttpRequestToken;
@class FBUserSession, FBAdPaymentsAdAccountDetailsGraphRequestProvider;

@interface FBAdPaymentsAdAccountDetailsGraphRequestCoordinator : NSObject {

	FBUserSession* _session;
	FBAdPaymentsAdAccountDetailsGraphRequestProvider* _requestProvider;
	id<FBHttpRequestToken> _adAccountDetailsToken;

}
-(id)performGetAdAccountDetailsForAdAccountId:(id)arg1 pageID:(id)arg2 totalBudget:(long long)arg3 duration:(unsigned long long)arg4 callback:(/*^block*/id)arg5 ;
-(id)initWithSession:(id)arg1 ;
@end

