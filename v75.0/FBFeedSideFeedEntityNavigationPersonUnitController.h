/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSideFeedUnitController.h>

@class NSString, FBUserSession, FBFeedSideFeedEntityNavigationProfileUnitView, NSMutableDictionary;

@interface FBFeedSideFeedEntityNavigationPersonUnitController : FBSideFeedUnitController {

	NSString* _graphQLID;
	FBUserSession* _session;
	FBFeedSideFeedEntityNavigationProfileUnitView* _profileUnitView;
	NSMutableDictionary* _impressionHistory;
	NSMutableDictionary* _clickHistory;

}
-(id)getUnitNameForAnalytics;
-(id)trackingStringForItemPosition:(unsigned long long)arg1 ;
-(id)graphQLIDForItemPosition:(unsigned long long)arg1 ;
-(BOOL)validateModel;
-(id)_personModel;
-(void)_resetLoggingHistory;
-(void)_launchEntity:(id)arg1 ;
-(id)initWithGraphQLID:(id)arg1 session:(id)arg2 ;
-(void)loadView;
@end

