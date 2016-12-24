/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMQTTChannelCoordinating.h>

@protocol OS_dispatch_queue;
@class FBMQTTClientManager, NSObject, NSString;

@interface FBQueueDispatchedMQTTClientManager : NSObject <FBMQTTChannelCoordinating> {

	FBMQTTClientManager* _clientManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeListeners:(id)arg1 ;
-(void)addListeners:(id)arg1 ;
-(void)addPublisher:(id)arg1 ;
-(long long)networkStatus;
-(id)mqttSessionIdForAnalytics;
-(id)connectionConfig;
-(id)endpointCapabilities;
-(BOOL)isPatternCurrentlySubscribed:(id)arg1 ;
-(id)affiliatedQueue_EXPERIMENTAL;
-(void)configureWithClientConfig:(id)arg1 customConnectionConfiguration:(id)arg2 clientCapabilities:(unsigned long long)arg3 endpointCapabilities:(unsigned long long)arg4 showOnLineOnForegroundBlock:(/*^block*/id)arg5 credentialsAvailableBlock:(/*^block*/id)arg6 credentialsFetcherBlock:(/*^block*/id)arg7 userAgentFormatterBlock:(/*^block*/id)arg8 getdiffProviderBlock:(/*^block*/id)arg9 ;
-(void)credentialsDidBecomeAvailable;
-(void)suspendListenersWithBackgroundPolicy:(unsigned long long)arg1 ;
-(void)subscribeListenersWithBackgroundPolicy:(unsigned long long)arg1 ;
-(void)sendMQTTKeepAlive;
-(void)setInBackground:(BOOL)arg1 ;
-(void)updateOnlineStatus:(BOOL)arg1 ;
-(id)initWithExperiments:(id)arg1 ;
-(long long)state;
-(void)stop;
-(void)start;
-(id)config;
-(BOOL)isStarted;
-(id)debugInfo;
-(BOOL)isReachable;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(BOOL)isConnected;
@end
