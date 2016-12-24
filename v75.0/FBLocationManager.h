/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class FBAnalytics, FBAnalyticsPerfLogger, FBLocationStats, CLLocationManager, NSSet, NSMutableSet, CLLocation, FBLocationAuthorizationAnnouncer, NSError, FBTimer, NSString;

@interface FBLocationManager : NSObject <CLLocationManagerDelegate> {

	FBAnalytics* _analytics;
	FBAnalyticsPerfLogger* _analyticsPerfLogger;
	FBLocationStats* _locationStats;
	CLLocationManager* _locationManager;
	NSSet* _subscriptions;
	NSMutableSet* _subscribersNextInaccurateFix;
	CLLocation* _simulatedLocation;
	double _accurateLocationTimeout;
	id _applicationWillResignActiveObserver;
	id _applicationDidBecomeActiveObserver;
	id _applicationDidEnterInBackgroundObserver;
	FBLocationAuthorizationAnnouncer* _authBroadcaster;
	CLLocation* _lastLocationGood;
	CLLocation* _lastLocationAny;
	NSError* _lastError;
	FBTimer* _restartTimer;

}

@property (nonatomic,retain) NSError * lastError;                                               //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) FBTimer * restartTimer;                                            //@synthesize restartTimer=_restartTimer - In the implementation block
@property (nonatomic,readonly) FBLocationAuthorizationAnnouncer * authBroadcaster;              //@synthesize authBroadcaster=_authBroadcaster - In the implementation block
@property (retain) CLLocation * lastLocationGood;                                               //@synthesize lastLocationGood=_lastLocationGood - In the implementation block
@property (retain) CLLocation * lastLocationAny;                                                //@synthesize lastLocationAny=_lastLocationAny - In the implementation block
@property (nonatomic,readonly) CLLocation * coreLocationLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_authorizationStatusString:(int)arg1 ;
+(id)sharedLocationManager;
-(CLLocation *)lastLocationGood;
-(CLLocation *)coreLocationLocation;
-(id)registerBlock:(/*^block*/id)arg1 desiredAccuracy:(double)arg2 callPath:(id)arg3 ;
-(id)mostRecentLocation;
-(CLLocation *)lastLocationAny;
-(void)stopSimulatingLocation;
-(void)simulateLocation:(id)arg1 ;
-(FBLocationAuthorizationAnnouncer *)authBroadcaster;
-(void)onApplicationDidBecomeActive:(id)arg1 ;
-(void)onApplicationWillResignActive:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 analyticsPerfLogger:(id)arg2 locationManager:(id)arg3 ;
-(void)onApplicationDidEnterInBackground:(id)arg1 ;
-(void)_stopUpdatingLocationForReason:(id)arg1 ;
-(BOOL)_updateLocationManagerDesiredAccuracy;
-(void)_startUpdatingLocationForReason:(id)arg1 component:(id)arg2 ;
-(BOOL)_location:(id)arg1 withinHorizontalAccuracy:(double)arg2 andTime:(double)arg3 ;
-(void)setLastLocationGood:(CLLocation *)arg1 ;
-(void)_startAccurateFixTimeoutTimerForSubscription:(id)arg1 ;
-(void)_cancelAccurateFixTimeoutTimer:(id)arg1 ;
-(id)_getComponent:(double)arg1 ;
-(void)setRestartTimer:(FBTimer *)arg1 ;
-(void)_suspendLocationService:(id)arg1 ;
-(void)_restartLocationManagerAfterDelay:(double)arg1 ;
-(void)setLastLocationAny:(CLLocation *)arg1 ;
-(void)_sendObserversLocation:(id)arg1 forSubscriptions:(id)arg2 ;
-(void)_sendObserversError:(id)arg1 ;
-(void)_restartLocationManager;
-(void)_fireAccurateFixTimeoutTimer:(id)arg1 ;
-(void)setAccurateLocationTimeout:(double)arg1 ;
-(void)unregisterSubscription:(id)arg1 ;
-(BOOL)registeredBlock:(id)arg1 ;
-(FBTimer *)restartTimer;
-(void)dealloc;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(NSError *)lastError;
-(void)setLastError:(NSError *)arg1 ;
@end

