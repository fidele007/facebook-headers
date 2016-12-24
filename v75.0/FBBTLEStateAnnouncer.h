/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class FBBTLEStateListenerAnnouncer, CBCentralManager, NSObject, FBBTLEStateTransition, NSString;

@interface FBBTLEStateAnnouncer : NSObject <CBCentralManagerDelegate> {

	FBBTLEStateListenerAnnouncer* _announcer;
	CBCentralManager* _centralManager;
	NSObject*<OS_dispatch_queue> _centralManagerQueue;
	NSObject*<OS_dispatch_queue> _queue;
	FBBTLEStateTransition* _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPassiveStateDetectionAvailable;
+(id)sharedAnnouncer;
-(id)addSubscription:(id)arg1 ;
-(void)removeSubscription:(id)arg1 ;
-(id)initWithCentralManagerQueue:(id)arg1 ;
-(void)updateWithCentralState:(long long)arg1 ;
-(void)flushAnnouncementQueue;
-(id)init;
-(void)_startMonitoring;
-(void)_stopMonitoring;
-(void)centralManagerDidUpdateState:(id)arg1 ;
@end

