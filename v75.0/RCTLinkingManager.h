/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTEventEmitter.h>

@interface RCTLinkingManager : RCTEventEmitter
+(id)moduleName;
+(id)__rct_export__720;
+(id)__rct_export__841;
+(id)__rct_export__1032;
+(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
+(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
+(void)load;
-(id)supportedEvents;
-(void)handleOpenURLNotification:(id)arg1 ;
-(void)openURL:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(void)canOpenURL:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(void)getInitialURL:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(void)startObserving;
-(void)stopObserving;
@end

