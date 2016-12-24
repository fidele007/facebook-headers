/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBFunnelLoggerIntegrationDelegate;
@class NSObject, NSMutableDictionary, FBFunnelRegistry, NSString;

@interface FBFunnelLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _funnels;
	id<FBFunnelLoggerIntegrationDelegate> _funnelLoggerIntegrationDelegate;
	FBFunnelRegistry* _funnelRegistry;
	NSString* _persistedFunnelPath;
	NSString* _persistedFunnelDirectoryPath;

}
+(id)sharedFunnelLogger;
-(void)startFunnel:(id)arg1 ;
-(void)addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 actionPayload:(id)arg4 ;
-(void)addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 ;
-(void)endFunnel:(id)arg1 ;
-(void)addActionToFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 actionName:(id)arg3 tag:(id)arg4 ;
-(void)addTagToFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 tag:(id)arg3 ;
-(void)startFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 ;
-(void)endFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 ;
-(void)cancelFunnel:(id)arg1 ;
-(void)addTagToFunnel:(id)arg1 tag:(id)arg2 ;
-(void)startFunnelInConcurrentMode_DEV_MODE:(id)arg1 instanceID:(unsigned long long)arg2 ;
-(id)initWithFunnelLoggerIntegrationDelegate:(id)arg1 funnelRegistry:(id)arg2 ;
-(void)handleApplicationDidEnterBackground:(id)arg1 ;
-(void)loadPersistedFunnels;
-(void)_startFunnel:(id)arg1 instanceID:(unsigned long long)arg2 funnelKey:(id)arg3 bypassSampling:(BOOL)arg4 ;
-(id)_getFunnelKeyFromFunnel:(id)arg1 instanceID:(unsigned long long)arg2 ;
-(void)_endFunnel:(id)arg1 reason:(unsigned long long)arg2 ;
-(id)_createNewInstanceForFunnel:(id)arg1 instanceID:(unsigned long long)arg2 funnelKey:(id)arg3 ;
-(void)_addTagToFunnel:(id)arg1 tag:(id)arg2 ;
-(void)_addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 actionPayload:(id)arg4 ;
-(void)_reportNilValue:(id)arg1 actionName:(id)arg2 funnel:(id)arg3 ;
-(void)_sendAnalyticsEventForFunnel:(id)arg1 ;
-(void)_cancelFunnel:(id)arg1 ;
-(void)_endPseudoFunnel:(id)arg1 ;
-(void)_persistUnfinishedFunnels;
-(void)removePersistedFileIfExists;
-(id)persistedFunnelPath;
-(void)_loadPersistedFunnels;
-(id)persistedFunnelDirectoryPath;
-(void)startFunnel_DEV_MODE:(id)arg1 ;
-(void)addActionToFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 actionName:(id)arg3 tag:(id)arg4 actionPayload:(id)arg5 ;
-(void)endFunnel:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)endFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 callback:(/*^block*/id)arg3 ;
-(void)cancelFunnelInConcurrentMode:(id)arg1 instanceID:(unsigned long long)arg2 ;
-(BOOL)setRandomTestingPersistedFilePath;
-(void)dealloc;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(id)internalQueue;
@end

