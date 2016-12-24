/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemPage, FBUserSession, FBMemPagedDownloadController, NSArray;

@interface FBPageEventsDashboardFetcher : NSObject {

	FBMemPage* _page;
	FBUserSession* _session;
	unsigned long long _type;
	FBMemPagedDownloadController* _downloadController;
	NSArray* _eventIds;

}
-(id)_eventsFromEdges:(id)arg1 ;
-(id)initWithFetcherType:(unsigned long long)arg1 session:(id)arg2 pageId:(id)arg3 eventIds:(id)arg4 ;
-(BOOL)canLoadMore;
-(void)loadMore:(/*^block*/id)arg1 ;
-(void)reset;
@end

