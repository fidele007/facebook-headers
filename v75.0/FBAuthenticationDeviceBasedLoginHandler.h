/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSimpleNetworkerRequest;

@interface FBAuthenticationDeviceBasedLoginHandler : NSObject {

	FBSimpleNetworkerRequest* _loginRequest;

}
-(void)submitDeviceBasedLoginWithUserID:(id)arg1 nonce:(id)arg2 pin:(id)arg3 machineID:(id)arg4 success:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)cancel;
@end

