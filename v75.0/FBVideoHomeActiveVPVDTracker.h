/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FBHScrollViewDurationTracker, FBVideoHomeSession, FBFeedUnitDebugInfoManager;

@interface FBVideoHomeActiveVPVDTracker : NSObject {

	NSMutableDictionary* _activeStoryVPVDs;
	NSMutableDictionary* _activeChannelVPVDs;
	FBHScrollViewDurationTracker* _viewDurationTracker;
	FBVideoHomeSession* _videoHomeSession;
	FBFeedUnitDebugInfoManager* _debugInfoManager;

}
-(id)initWithViewDurationTracker:(id)arg1 videoHomeSession:(id)arg2 debugInfoManager:(id)arg3 ;
-(void)startTrackingWithStoryData:(id)arg1 playerSubOrigin:(id)arg2 feedUnit:(id)arg3 ;
-(void)stopTrackingWithStoryData:(id)arg1 ;
-(void)startTrackingWhenViewAppearsWithPlayerSubOrigin:(id)arg1 ;
-(void)stopTrackingWhenViewDisappears;
-(void)startTrackingWithChannelData:(id)arg1 playerSubOrigin:(id)arg2 ;
-(void)stopTrackingWithChannelData:(id)arg1 ;
-(BOOL)videoHomeSessionIsActiveForVPVLogging:(id)arg1 ;
-(void)_startTrackingHScrollElementWithStoryTrackingData:(id)arg1 uniqueID:(id)arg2 ;
-(void)_startTrackingHScrollElementWithChannelData:(id)arg1 uniqueID:(id)arg2 ;
-(void)_stopTrackingHScrollElementWithStoryTrackingData:(id)arg1 uniqueID:(id)arg2 ;
-(void)_stopTrackingHScrollElementWithChannelData:(id)arg1 uniqueID:(id)arg2 ;
-(double)_stopTrackingHScrollElement:(id)arg1 ;
-(void)removeAll;
@end
