/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSString;

@interface FBPlacePickerLogger : NSObject {

	unsigned long long _sessionStartTime;
	NSMutableSet* _eventsLogged;
	NSMutableDictionary* _commonInfo;
	BOOL _hasTtiError;
	NSString* _sessionID;
	NSMutableSet* _resultsSeen;

}

@property (nonatomic,copy) NSString * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSMutableSet * resultsSeen;              //@synthesize resultsSeen=_resultsSeen - In the implementation block
@property (assign,nonatomic) BOOL hasTtiError;                        //@synthesize hasTtiError=_hasTtiError - In the implementation block
+(BOOL)shouldLogOncePerSession:(id)arg1 ;
-(void)didPerformFirstScrollWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2 ;
-(void)logPlacePickerEvent:(id)arg1 nearbyDataSet:(id)arg2 lastLocation:(id)arg3 extra:(id)arg4 ;
-(void)_markTtiError;
-(void)didSeePlacePickerNUX;
-(void)didSkipPlacePickerWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2 ;
-(void)lightweightPlacePickerWillStartWithSession:(id)arg1 nearbyDataSet:(id)arg2 maxNumPlaces:(unsigned long long)arg3 ;
-(void)lightweightPlacePickerDidPerformFirstScrollWithNearbyDataSet:(id)arg1 ;
-(void)lightweightPlacePickerDidPickPlaceAtIndex:(long long)arg1 nearbyDataSet:(id)arg2 ;
-(void)lightweightPlacePickerShowMorePlacesWithNearbyDataSet:(id)arg1 ;
-(void)lightweightPlacePickerWasCancelledWithNearbyDataSet:(id)arg1 ;
-(NSMutableSet *)resultsSeen;
-(void)setResultsSeen:(NSMutableSet *)arg1 ;
-(BOOL)hasTtiError;
-(void)setHasTtiError:(BOOL)arg1 ;
-(id)initWithCompositionID:(id)arg1 searchType:(id)arg2 ;
-(void)didEnterBackgroundWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2 ;
-(void)sessionWillStart:(id)arg1 nearbyDataSet:(id)arg2 lastLocation:(id)arg3 ;
-(void)willSeePlace:(id)arg1 ;
-(void)didCancelPlacePickerWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2 ;
-(void)locationManagerDidCallbackWithLocation:(id)arg1 error:(id)arg2 ;
-(void)didHaveNetworkFailure;
-(void)resultsDidLoadWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2 ;
-(void)didGrantLocationPermission;
-(void)didDenyLocationPermission;
-(void)didSeePlacePickerErrorView:(unsigned long long)arg1 ;
-(void)didPickPlaceAtIndex:(long long)arg1 nearbyDataset:(id)arg2 lastLocation:(id)arg3 ;
-(void)didPerformFirstKeyStrokeWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2 ;
-(void)didClickTurnOnLocationServices;
-(void)didRemoveCurrentPlaceSelectionWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2 ;
-(void)didPreserveCurrentSelection;
-(void)willNavigateToCrowdsourcingFlow:(unsigned long long)arg1 nearbyDataSet:(id)arg2 lastLocation:(id)arg3 ;
-(void)didFinishAddPlace:(id)arg1 withCreationFlowType:(id)arg2 ;
-(void)didSelectBlockerPlace;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
@end

