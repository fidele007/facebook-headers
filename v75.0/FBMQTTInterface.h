/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTInterface <NSObject>
@required
-(void)removeListeners:(id)arg1;
-(void)addListeners:(id)arg1;
-(void)addPublisher:(id)arg1;
-(long long)state;
-(BOOL)isStarted;
-(BOOL)isReachable;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;
-(BOOL)isConnected;

@end

