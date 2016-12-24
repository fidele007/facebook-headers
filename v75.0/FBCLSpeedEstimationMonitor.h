/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCLLocationsMonitor.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class FBCLLocation, CLLocationManager, CLCircularRegion, NSString;

@interface FBCLSpeedEstimationMonitor : FBCLLocationsMonitor <CLLocationManagerDelegate> {

	FBCLLocation* _storedOldest;
	FBCLLocation* _storedPrevious;
	CLLocationManager* _locationManager;
	CLCircularRegion* _lastStoppedRegion;

}

@property (nonatomic,readonly) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 locationUpdateAnnouncer:(id)arg2 eventChannel:(id)arg3 ;
-(/*^block*/id)workBlock;
-(id)_logDictionaryForOldest:(id)arg1 previous:(id)arg2 current:(id)arg3 ;
-(unsigned long long)_stopDetectionStatusForSituation:(id)arg1 existingRegion:(id)arg2 current:(id)arg3 ;
-(void)_conditionallyChangeStoppedRegionWithStatus:(unsigned long long)arg1 location:(id)arg2 ;
-(double)_travelSpeedBetweenPointOne:(id)arg1 pointTwo:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)shouldStart;
-(CLLocationManager *)locationManager;
@end
