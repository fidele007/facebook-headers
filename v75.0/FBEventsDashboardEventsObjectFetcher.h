/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventsDashboardObjectFetcherProtocol.h>

@class NSArray, FBUserSession, NSString, FBEventsMemPaginatedCachedConnectionController, FBScenePath, NSPredicate;

@interface FBEventsDashboardEventsObjectFetcher : NSObject <FBEventsDashboardObjectFetcherProtocol> {

	NSArray* _events;
	FBUserSession* _session;
	NSString* _viewerId;
	FBEventsMemPaginatedCachedConnectionController* _pageController;
	long long _type;
	BOOL _isBusyFetching;
	long long _initialLoadLimit;
	long long _loadLimit;
	unsigned long long _profilePhotoCount;
	BOOL _fetchCoverPhoto;
	BOOL _fetchEventMemberProfilePhoto;
	unsigned long long _eventsProfilePictureSize;
	FBScenePath* _scenePath;
	NSPredicate* _cacheFilterPredicate;

}

@property (nonatomic,retain) NSPredicate * cacheFilterPredicate;              //@synthesize cacheFilterPredicate=_cacheFilterPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canLoadMore;
-(void)loadMore:(/*^block*/id)arg1 ;
-(BOOL)isBusyLoadingMore;
-(void)setResultLoadLimit:(long long)arg1 ;
-(id)getRequestQueryKeyPath;
-(id)getNextRequestQuery;
-(NSPredicate *)cacheFilterPredicate;
-(id)getEventsFromEdges:(id)arg1 ;
-(id)initWithFetcherType:(long long)arg1 session:(id)arg2 viewer:(id)arg3 cacheFilterPredicate:(id)arg4 profilePhotoCount:(long long)arg5 fetchCoverPhoto:(BOOL)arg6 fetchEventMemberProfilePhoto:(BOOL)arg7 eventsProfilePictureSize:(unsigned long long)arg8 firstLoadCount:(long long)arg9 scenePath:(id)arg10 ;
-(void)setCacheFilterPredicate:(NSPredicate *)arg1 ;
-(void)cancel;
-(void)reset;
@end
