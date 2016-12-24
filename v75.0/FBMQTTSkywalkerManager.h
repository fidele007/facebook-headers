/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTChannelCoordinating, OS_dispatch_queue;
@class FBMQTTListener, JSONDecoder, NSObject, NSNotificationCenter, NSMutableDictionary;

@interface FBMQTTSkywalkerManager : NSObject {

	id<FBMQTTChannelCoordinating> _mqttChannelCoordinator;
	FBMQTTListener* _mqttListener;
	JSONDecoder* _decoder;
	NSObject*<OS_dispatch_queue> _actionQueue;
	NSNotificationCenter* _notificationCenter;
	BOOL _isConnected;
	NSMutableDictionary* _subscribers;

}
-(id)initWithMQTTChannelCoordinator:(id)arg1 notificationCenter:(id)arg2 actionQueue:(id)arg3 ;
-(void)sendMessage:(id)arg1 toTopic:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscribe:(id)arg1 receiver:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unsubscribe:(id)arg1 receiver:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_onMQTTConnectedChanged:(id)arg1 ;
-(id)_createSkywalkerPayload:(id)arg1 topicsToUnSubscribe:(id)arg2 publishes:(id)arg3 ;
-(void)_sendSkywalkerMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendMessages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)processMessage:(id)arg1 ;
@end

