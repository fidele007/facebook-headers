/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkDispatch;
@interface FBAccountRecoveryCodeEntryController : NSObject {

	id<FBNetworkDispatch> _requesterConfiguration;

}
-(void)submitCode:(id)arg1 flowData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendCodeToContactPointsWithFlowData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)initWithRequesterConfiguration:(id)arg1 ;
@end

