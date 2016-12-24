/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSportsPlayByPlayDataFetcherDelegate.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>
#import <Facebook/FBSportsPlayByPlaySubscriptionHandlerDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentCollectionViewDataSourceEventListener.h>

@class FBUserSession, FBFeedToolbox, FBSportsPlayByPlayDataFetcher, NSString, FBSportsPlayByPlaySubscriptionHandler, FBComponentCollectionViewDataSource, NSMutableArray, FBComponentCollectionViewFlowLayoutDelegate, UICollectionView, FBPullToRefreshView, FBTransientViewStateManager;

@interface FBSportsFactDataSource : NSObject <FBSportsPlayByPlayDataFetcherDelegate, FBPullToRefreshViewDelegate, FBSportsPlayByPlaySubscriptionHandlerDelegate, FBComponentScrollEventListener, FBComponentCollectionViewDataSourceEventListener> {

	FBUserSession* _session;
	FBFeedToolbox* _toolbox;
	FBSportsPlayByPlayDataFetcher* _dataFetcher;
	NSString* _pageID;
	unsigned long long _filter;
	unsigned long long _viewState;
	FBSportsPlayByPlaySubscriptionHandler* _playSubHandler;
	FBComponentCollectionViewDataSource* _componentDataSource;
	NSMutableArray* _playStories;
	BOOL _loadingData;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	NSMutableArray* _subscriptions;
	UICollectionView* _collectionView;
	FBPullToRefreshView* _ptrView;
	FBTransientViewStateManager* _viewStateManager;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) FBPullToRefreshView * ptrView;                               //@synthesize ptrView=_ptrView - In the implementation block
@property (assign,nonatomic,__weak) FBTransientViewStateManager * viewStateManager;              //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)setPtrView:(FBPullToRefreshView *)arg1 ;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(void)dataSourceWillEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(FBPullToRefreshView *)ptrView;
-(FBTransientViewStateManager *)viewStateManager;
-(void)setViewStateManager:(FBTransientViewStateManager *)arg1 ;
-(void)_initializePlayByPlayDataFetcher;
-(void)_addPlayStories:(id)arg1 shouldPrepend:(BOOL)arg2 ;
-(void)_receivedUpdatedStory:(id)arg1 updateCLCHandle:(BOOL)arg2 ;
-(id)_getCLCHandle:(id)arg1 ;
-(void)_receivedUpdatedStory:(id)arg1 ;
-(void)sportsPlayByPlayDataFetcher:(id)arg1 didLoadFacts:(id)arg2 loadType:(unsigned long long)arg3 ;
-(void)sportsPlayByPlayDataFetcher:(id)arg1 loadType:(unsigned long long)arg2 experiencedError:(id)arg3 ;
-(void)playByPlaySubscriptionHandler:(id)arg1 didGetNewPlay:(id)arg2 ;
-(void)playByPlaySubscriptionHandler:(id)arg1 didGetOutOfOrderPlay:(id)arg2 ;
-(id)initWithSession:(id)arg1 toolbox:(id)arg2 pageID:(id)arg3 filter:(unsigned long long)arg4 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

