/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventsDashboardObjectFetcherProtocol.h>

@class FBUserSession, FBGraphQLMemPaginatedConnectionController, FBScenePath, NSString;

@interface FBEventsDashboardBirthdayObjectFetcher : NSObject <FBEventsDashboardObjectFetcherProtocol> {

	FBUserSession* _session;
	BOOL _isLoading;
	long long _loadLimit;
	long long _month;
	long long _day;
	FBGraphQLMemPaginatedConnectionController* _pageController;
	FBScenePath* _scenePath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canLoadMore;
-(void)loadMore:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 startDate:(id)arg2 scenePath:(id)arg3 ;
-(BOOL)isBusyLoadingMore;
-(void)setResultLoadLimit:(long long)arg1 ;
-(void)resetWithStartDate:(id)arg1 ;
-(id)getPeopleFromEdges:(id)arg1 ;
-(id)getPeopleFromResponse:(id)arg1 ;
-(void)cancel;
-(void)reset;
@end

