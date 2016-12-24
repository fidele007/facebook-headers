/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAppService.h>

@class FBUserSession, FBMQTTManager, NSMutableArray, FBNotificationsMQTTListenerAnnouncer, NSString;

@interface FBNotificationsMQTTBroadcaster : NSObject <FBAppService> {

	FBUserSession* _session;
	FBMQTTManager* _mqttManager;
	NSMutableArray* _mqttListeners;
	BOOL _subscribedToMQTT;
	FBNotificationsMQTTListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)_subscribeToMQTT;
-(void)_unsubscribeFromMQTT;
-(void)addListenerToNotificationUpdates:(id)arg1 ;
-(void)removeListenerToNotificationUpdates:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

