/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTEventEmitter.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSDictionary, NSMutableArray, NSString;

@interface RCTLocationObserver : RCTEventEmitter <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSDictionary* _lastLocationEvent;
	NSMutableArray* _pendingRequests;
	BOOL _observingLocation;
	UIEdgeInsets _observerOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)__rct_export__1830;
+(id)__rct_export__1972;
+(id)__rct_export__2103;
+(void)load;
-(id)methodQueue;
-(id)supportedEvents;
-(void)beginLocationUpdatesWithDesiredAccuracy:(double)arg1 distanceFilter:(double)arg2 ;
-(void)getCurrentPosition:(UIEdgeInsets)arg1 withSuccessCallback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)timeout:(id)arg1 ;
-(void)startObserving:(UIEdgeInsets)arg1 ;
-(void)stopObserving;
@end

