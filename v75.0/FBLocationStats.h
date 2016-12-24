/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBLocationReporting.h>

@protocol FBClock;
@class FBLocationDuration, NSHashTable, NSMutableDictionary;

@interface FBLocationStats : NSObject <FBLocationReporting> {

	FBLocationDuration* _recordedStats;
	double _sessionStart;
	double _currentAccuracy;
	NSHashTable* _activeManagers;
	NSMutableDictionary* _attribution;
	id<FBClock> _clock;

}
+(id)sharedLocationStats;
-(id)getAndResetAttributionData;
-(id)initWithClock:(id)arg1 ;
-(void)didRegisterForLocationUpdatesWithSubscriber:(id)arg1 ;
-(void)didUnregisterForLocationUpdatesWithSubscriber:(id)arg1 ;
-(void)didStartUpdatingLocationForManager:(id)arg1 ;
-(void)didStopUpdatingLocationForManager:(id)arg1 ;
-(void)didChangeDesiredAccuracyForManager:(id)arg1 ;
-(double)_getAccuracy;
-(void)_updateStats:(id)arg1 withStartTime:(double)arg2 accuracy:(double)arg3 ;
-(void)_updateTotalForAttribution:(id)arg1 ;
-(void)_endSessionAndUpdateTotals;
-(id)init;
-(id)getStats;
@end

