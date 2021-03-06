/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTEventEmitter : NSObject <RCTBridgeModule> {

	long long _listenerCount;
	RCTBridge* _bridge;

}

@property (assign,nonatomic,__weak) RCTBridge * bridge;                               //@synthesize bridge=_bridge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__750;
+(id)__rct_export__871;
+(void)initialize;
-(void)removeListeners:(long long)arg1 ;
-(id)supportedEvents;
-(void)sendEventWithName:(id)arg1 body:(id)arg2 ;
-(void)dealloc;
-(void)startObserving;
-(void)addListener:(id)arg1 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)stopObserving;
@end

