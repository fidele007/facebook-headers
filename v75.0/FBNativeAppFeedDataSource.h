/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCollectionImagePrefetcherDelegate.h>
#import <Facebook/FBAppFeedStreamResponseHandlerDelegate.h>
#import <Facebook/FBAppFeedPagingDelegate.h>
#import <Facebook/FBNativeAppFeedDataSource.h>

@protocol FBNativeAppFeedDataSource <UITableViewDataSource>
@required
+(id)digitalGoodItemsWithFeedUnit:(id)arg1;
-(void)scheduleFeedUnitFetchWithLoadType:(unsigned long long)arg1 refreshMode:(id)arg2;
-(id)feedUnitWithIndexPath:(id)arg1;
-(CGSize*)sizeForCellWithIndexPath:(id)arg1 renderStyle:(unsigned long long)arg2;
-(CGSize*)tableView:(id)arg1 sizeForSupplementaryElementOfKind:(id)arg2 inSection:(long long)arg3;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
-(void)hideItemAtIndexPath:(id)arg1;

@end


@protocol FBNativeAppFeedDataSourceDelegate, FBNativeAppFeedCellDelegate, FBNativeAppFeedLoggingDelegate;
@class FBCollectionImagePrefetcher, FBUserSession, UITableView, NSMutableOrderedSet, FBStream, NSString;

@interface FBNativeAppFeedDataSource : NSObject <FBCollectionImagePrefetcherDelegate, FBAppFeedStreamResponseHandlerDelegate, FBAppFeedPagingDelegate, FBNativeAppFeedDataSource> {

	id<FBNativeAppFeedDataSourceDelegate> _delegate;
	FBCollectionImagePrefetcher* _imagePrefetcher;
	double _requestTime;
	FBUserSession* _session;
	UITableView* _tableView;
	id<FBNativeAppFeedCellDelegate> _cellDelegate;
	id<FBNativeAppFeedLoggingDelegate> _loggingDelegate;
	NSMutableOrderedSet* _moreAppsEdges;
	FBStream* _appFeedStream;

}

@property (nonatomic,retain) FBUserSession * session;                                                //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                         //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeAppFeedCellDelegate> cellDelegate;                    //@synthesize cellDelegate=_cellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeAppFeedLoggingDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * moreAppsEdges;                                    //@synthesize moreAppsEdges=_moreAppsEdges - In the implementation block
@property (nonatomic,retain) FBStream * appFeedStream;                                               //@synthesize appFeedStream=_appFeedStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)digitalGoodItemsWithFeedUnit:(id)arg1 ;
-(id<FBNativeAppFeedCellDelegate>)cellDelegate;
-(void)setCellDelegate:(id<FBNativeAppFeedCellDelegate>)arg1 ;
-(id)collectionImagePrefetcher:(id)arg1 prefetchSpecifierForIndex:(unsigned long long)arg2 ;
-(unsigned long long)imagesCountForCollectionImagePrefetcher:(id)arg1 ;
-(void)_setupCells;
-(long long)pagingOffset;
-(void)handleResponse:(id)arg1 withRefreshMode:(id)arg2 loadType:(unsigned long long)arg3 ;
-(void)handleFailureWithLoadType:(unsigned long long)arg1 error:(id)arg2 refreshMode:(id)arg3 ;
-(id)pagingInfo;
-(void)prefetchImagesForIndexPath:(id)arg1 ;
-(BOOL)_showHeaderViews;
-(id)_headerTextForSection:(long long)arg1 ;
-(id)_unitsForSection:(long long)arg1 ;
-(id)_unitsConnectionForSection:(long long)arg1 ;
-(id)_extrasForRequestResponseWithRefreshMode:(id)arg1 failure:(BOOL)arg2 ;
-(void)_scheduleQueryWithRefreshMode:(id)arg1 loadType:(unsigned long long)arg2 fetchLimit:(ProcessPMCpuStat)arg3 ;
-(void)_logResponseWithRefreshMode:(id)arg1 failure:(BOOL)arg2 ;
-(void)didReceiveResponse:(id)arg1 withRefreshMode:(id)arg2 loadType:(unsigned long long)arg3 ;
-(id)validateDigitalGoodResults:(id)arg1 ;
-(id)_mergeSectionsWithTailEdges:(id)arg1 loadType:(unsigned long long)arg2 ;
-(void)setMoreAppsEdges:(NSMutableOrderedSet *)arg1 ;
-(id)_moreAppsEdgeFromOriginal:(id)arg1 withNewAppUnitEdges:(id)arg2 ;
-(void)setAppFeedStream:(FBStream *)arg1 ;
-(unsigned long long)prefetchIndexFromIndexPath:(id)arg1 ;
-(unsigned long long)numUnitsInSection:(id)arg1 ;
-(id)indexPathFromPrefetchIndex:(unsigned long long)arg1 ;
-(id)_validateDigitalGoodEdges:(id)arg1 withURLHandler:(id)arg2 ;
-(id)_moreAppsUnitsEdgeFromOriginal:(id)arg1 withNewDigitalGoodEdges:(id)arg2 ;
-(NSMutableOrderedSet *)moreAppsEdges;
-(FBStream *)appFeedStream;
-(id)initWithTableView:(id)arg1 session:(id)arg2 delegate:(id)arg3 cellDelegate:(id)arg4 loggingDelegate:(id)arg5 scenePathContext:(id)arg6 ;
-(void)scheduleFeedUnitFetchWithLoadType:(unsigned long long)arg1 refreshMode:(id)arg2 ;
-(id)feedUnitWithIndexPath:(id)arg1 ;
-(CGSize)sizeForCellWithIndexPath:(id)arg1 renderStyle:(unsigned long long)arg2 ;
-(CGSize)tableView:(id)arg1 sizeForSupplementaryElementOfKind:(id)arg2 inSection:(long long)arg3 ;
-(id<FBNativeAppFeedLoggingDelegate>)loggingDelegate;
-(id)urlForPrefetchIndex:(unsigned long long)arg1 ;
-(void)setLoggingDelegate:(id<FBNativeAppFeedLoggingDelegate>)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)hideItemAtIndexPath:(id)arg1 ;
-(FBUserSession *)session;
-(ProcessPMCpuStat)fetchLimit;
-(void)setSession:(FBUserSession *)arg1 ;
@end
