/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCache, FBUserSession;

@interface FBFeedAdsFullImpressionLogger : NSObject {

	FBCache* _loggedUniqueIDSet;
	FBCache* _hscrollParentStorySponsorableIDToFirstItemInfo;
	FBCache* _hasBeenVisibleHscrollParentStoryIDSet;
	FBUserSession* _session;

}
-(void)logFullImpressionEventWithTrackingCodes:(id)arg1 uniqueID:(id)arg2 ;
-(void)hscrollLogFirstItemWithParentSponsorable:(id)arg1 ;
-(void)hscrollFirstItemBecameFullyVisibleWithSubstorySponsorable:(id)arg1 parentStorySponsorable:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end
