/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableDictionary;

@interface FBGametimeScoreUpdater : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _matchIDToUpdaterInfoDictionary;

}
+(void)_updateScoreForMatchID:(id)arg1 info:(id)arg2 andSession:(id)arg3 ;
+(void)_scoreTrackerQueryCompletedWithResponse:(id)arg1 updaterInfo:(id)arg2 matchID:(id)arg3 ;
-(void)startTrackingScoreForMatchWithMatchID:(id)arg1 forListener:(id)arg2 ;
-(void)stopTrackingScoreForMatchWithMatchID:(id)arg1 forListener:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end
