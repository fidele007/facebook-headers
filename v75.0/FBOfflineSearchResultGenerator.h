/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBOfflineSearchFeedEdgesGenerator, NSString, FBSearchResultsLogEventListenerAnnouncer;

@interface FBOfflineSearchResultGenerator : NSObject {

	FBOfflineSearchFeedEdgesGenerator* _feedEdgesGenerator;
	NSString* _clientSessionID;
	FBSearchResultsLogEventListenerAnnouncer* _logAnnouncer;
	BOOL _matchActorsOnly;

}
-(id)initWithFeedEdgesGenerator:(id)arg1 clientSessionID:(id)arg2 logAnnouncer:(id)arg3 matchActorsOnly:(BOOL)arg4 ;
-(id)resultsForQuery:(id)arg1 ;
@end

