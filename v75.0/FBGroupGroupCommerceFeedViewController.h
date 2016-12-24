/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStoryStreamViewController.h>

@protocol FBGraphQLPagedDownloading;
@class NSString, FBCollectionViewAggregatedDataSource, FBStoryStreamDataSource, FBScrollPositionRestoringCollectionViewController, FBUserSession, NSMutableDictionary;

@interface FBGroupGroupCommerceFeedViewController : FBStoryStreamViewController {

	NSString* _ownerID;
	FBCollectionViewAggregatedDataSource* _groupDataSource;
	FBStoryStreamDataSource* _groupStoriesDataSource;
	id<FBGraphQLPagedDownloading> _groupStream;
	FBScrollPositionRestoringCollectionViewController* _scrollPositionRestoringCollectionViewController;
	FBUserSession* _session;
	long long _feedType;
	NSString* _groupFBID;
	NSMutableDictionary* _seenGroupStories;
	Class _streamClass;

}

@property (nonatomic,retain) Class streamClass;              //@synthesize streamClass=_streamClass - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(id)groupGroupCommerceFeedViewControllerWithSession:(id)arg1 groupFBID:(id)arg2 streamClass:(Class)arg3 feedType:(long long)arg4 ownerID:(id)arg5 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(BOOL)fb_showNavBarSearchField;
-(Class)streamClass;
-(id)initWithSession:(id)arg1 groupFBID:(id)arg2 streamClass:(Class)arg3 feedType:(long long)arg4 ownerID:(id)arg5 navigationItemTitle:(id)arg6 ;
-(void)setStreamClass:(Class)arg1 ;
-(id)newGroupStreamWithAnalyticsUUID:(id)arg1 ;
-(id)newStreamDataSourceForSession:(id)arg1 scenePath:(id)arg2 ;
-(unsigned long long)feedLayoutIdiom;
-(void)recordVisibleFeedUnitForImpressionLogging;
-(id)initWithSession:(id)arg1 groupFBID:(id)arg2 streamClass:(Class)arg3 feedType:(long long)arg4 ownerID:(id)arg5 ;
-(BOOL)hasVisibleContent;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)stream;
@end
