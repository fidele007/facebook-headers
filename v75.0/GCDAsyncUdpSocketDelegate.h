/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCDAsyncUdpSocketDelegate
@optional
-(void)udpSocket:(id)arg1 didConnectToAddress:(id)arg2;
-(void)udpSocket:(id)arg1 didNotConnect:(id)arg2;
-(void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
-(void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
-(void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
-(void)udpSocketDidClose:(id)arg1 withError:(id)arg2;

@end

