/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTClientByteAggregating <NSObject>
@required
-(void)onAggregateForDisconnectedConnection:(long long)arg1 rawBytesWritten:(id)arg2 rawBytesRead:(id)arg3 foreground:(BOOL)arg4;
-(void)onAggregateForConnection:(long long)arg1 rawBytesWritten:(id)arg2 foreground:(BOOL)arg3;
-(void)onAggregateForConnection:(long long)arg1 rawBytesRead:(id)arg2 foreground:(BOOL)arg3;

@end

