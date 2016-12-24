/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>
#import <Facebook/FBReactionPaginationHandlerListener.h>
#import <Facebook/FBReactionCardAdapterDelegate.h>
#import <Facebook/FBReactionCardAdapterDelegateOptionalAdditions.h>
#import <Facebook/FBScenePathHolding.h>
#import <Facebook/FBVideoHomeGuideDataFetcherListener.h>
#import <Facebook/FBReactionUnitReloaderProtocol.h>
#import <Facebook/FBVideoHomeDataSourceListener.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentCollectionViewDataSourceEventListener.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBCollectionViewSectionDataSource.h>

@protocol FBNavigationCoordinator, FBIntentHandler, FBVideoHomeReactionComponentsDataSourceDelegate, FBReactionStyleMapper, FBCollectionViewMutating;
@class FBVideoHomeSession, NSString, NSDictionary, FBReactionPaginationHandler, FBReactionSessionInfo, FBReactionContext, FBReactionExperienceLogger, FBAnimationPerformanceLogger, FBComponentCollectionViewDataSource, NSMutableArray, FBReactionComponentKitCardAdapterDelegate, FBVideoHomeGuideDataFetcher, FBVideoHomeExperimentConfig, FBVideoHomeDataSource, FBVideoHomeDataLivenessManager, FBVideoHomePlaceholderDataManager, FBPullToRefreshView, UIScrollView, FBVideoHomeViewStateManager, NSArray;

@interface FBVideoHomeReactionComponentsDataSource : NSObject <FBPullToRefreshViewDelegate, FBReactionPaginationHandlerListener, FBReactionCardAdapterDelegate, FBReactionCardAdapterDelegateOptionalAdditions, FBScenePathHolding, FBVideoHomeGuideDataFetcherListener, FBReactionUnitReloaderProtocol, FBVideoHomeDataSourceListener, FBComponentScrollEventListener, FBComponentCollectionViewDataSourceEventListener, FBComponentCellAppearanceEventListener, FBCollectionViewSectionDataSource> {

	FBVideoHomeSession* _videoHomeSession;
	NSString* _analyticsModule;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	NSDictionary* _contextUserInfo;
	FBReactionPaginationHandler* _paginationHandler;
	FBReactionSessionInfo* _reactionSessionInfo;
	FBReactionContext* _context;
	BOOL _hasPendingPoll;
	FBReactionExperienceLogger* _logger;
	FBAnimationPerformanceLogger* _performanceTracker;
	FBComponentCollectionViewDataSource* _collectionViewDataSource;
	unsigned long long _renderIdiom;
	NSMutableArray* _reactionComponentModelsOnScreen;
	Items* _pendingChangeset;
	FBReactionComponentKitCardAdapterDelegate* _adapterDelegate;
	FBVideoHomeGuideDataFetcher* _dataFetcher;
	FBVideoHomeExperimentConfig* _experimentConfig;
	FBVideoHomeDataSource* _dataSource;
	FBVideoHomeDataLivenessManager* _livenessManager;
	FBVideoHomePlaceholderDataManager* _placeholderDataManager;
	FBPullToRefreshView* _ptrView;
	BOOL _isActive;
	UIScrollView* _scrollView;
	FBVideoHomeViewStateManager* _viewStateManager;
	unsigned long long _headDataOrigin;
	id<FBVideoHomeReactionComponentsDataSourceDelegate> _delegate;
	id<FBReactionStyleMapper> _styleMapper;
	NSArray* _clientCapabilities;
	id<FBCollectionViewMutating> _collectionViewMutator;
	double _lastHeadLoadCompletionTimestamp;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) FBComponentCollectionViewDataSource * collectionViewDataSource;                 //@synthesize collectionViewDataSource=_collectionViewDataSource - In the implementation block
@property (nonatomic,__weak,readonly) FBVideoHomeViewStateManager * viewStateManager;                          //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (nonatomic,readonly) unsigned long long headDataOrigin;                                              //@synthesize headDataOrigin=_headDataOrigin - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoHomeReactionComponentsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBReactionStyleMapper> styleMapper;                                          //@synthesize styleMapper=_styleMapper - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clientCapabilities;                                              //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic,__weak) id<FBCollectionViewMutating> collectionViewMutator;                        //@synthesize collectionViewMutator=_collectionViewMutator - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                                                    //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) double lastHeadLoadCompletionTimestamp;                                         //@synthesize lastHeadLoadCompletionTimestamp=_lastHeadLoadCompletionTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(id)buildDebugInfo;
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 ;
-(void)videoHomeDataSource:(id)arg1 beginUpdates:(id)arg2 ;
-(void)videoHomeDataSource:(id)arg1 endUpdates:(id)arg2 ;
-(id)reactionComponentModels;
-(void)videoHomeDataSource:(id)arg1 didInsertModel:(id)arg2 atIndex:(long long)arg3 ;
-(void)videoHomeDataSource:(id)arg1 didUpdateModel:(id)arg2 atIndex:(long long)arg3 ;
-(void)videoHomeDataSource:(id)arg1 didDeleteModels:(id)arg2 inRange:(NSRange)arg3 ;
-(void)_setViewStateManager:(id)arg1 ;
-(void)_setStateManagerViewState:(unsigned long long)arg1 ;
-(id)_videoThumbnailSize;
-(void)_processUnits:(id)arg1 loadType:(unsigned long long)arg2 dataOrigin:(unsigned long long)arg3 ;
-(void)_loadNextUnitsIfPossibleAndNotify;
-(void)_loadTailIfNecessary:(id)arg1 ;
-(void)_logEndOfDataIfNeededAppearedModel:(id)arg1 ;
-(void)_paginateUnitIfPossibleAppearedModel:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_replaceUnit:(id)arg1 withUnit:(id)arg2 ;
-(void)_clearDataSource;
-(void)_addItemsThatCanBeShown:(Items*)arg1 ;
-(id)reactionComponentModelsOnScreen;
-(id)_buildComponentInfo:(id)arg1 ;
-(id)_buildChannelPlaylistInfoFromStory:(id)arg1 ;
-(BOOL)_canPaginateModel:(id)arg1 ;
-(void)setPtrView:(id)arg1 ;
-(void)_insertUnit:(id)arg1 unitIndex:(unsigned long long)arg2 unitsCount:(unsigned long long)arg3 ;
-(id)_modelAtIndex:(long long)arg1 ;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(void)paginationHandler:(id)arg1 didReplaceUnit:(id)arg2 newUnit:(id)arg3 error:(id)arg4 ;
-(void)userDidGiveFeedback:(id)arg1 withExtras:(id)arg2 forReactionUnit:(id)arg3 ;
-(void)hideCardForReactionUnit:(id)arg1 ;
-(void)cardHeightDidChangeForUnit:(id)arg1 shouldPreservePosition:(BOOL)arg2 ;
-(void)reloadUnit:(id)arg1 withLocation:(id)arg2 ;
-(void)reloadUnit:(id)arg1 withLocation:(id)arg2 userInfo:(id)arg3 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(void)registerClassWithReuseIdentifier;
-(id<FBCollectionViewMutating>)collectionViewMutator;
-(void)setCollectionViewMutator:(id<FBCollectionViewMutating>)arg1 ;
-(void)userDidPerformInteraction:(id)arg1 withExtras:(id)arg2 forReactionUnit:(id)arg3 ;
-(void)unitReloader:(id)arg1 didFinishReloadingUnit:(id)arg2 withNewUnit:(id)arg3 ;
-(void)unitReloader:(id)arg1 didFailReloadingUnit:(id)arg2 error:(id)arg3 retryCount:(unsigned long long)arg4 ;
-(void)unitReloader:(id)arg1 willAttemptToReloadUnit:(id)arg2 retryCount:(unsigned long long)arg3 ;
-(id)_modelsWithUnitID:(id)arg1 ;
-(id<FBReactionStyleMapper>)styleMapper;
-(void)insertUnit:(id)arg1 unitIndex:(unsigned long long)arg2 unitsCount:(unsigned long long)arg3 ;
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)videoHomeGuideDataFetcherWillLoadUnits:(id)arg1 loadType:(unsigned long long)arg2 ;
-(void)videoHomeGuideDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3 requestType:(unsigned long long)arg4 error:(id)arg5 ;
-(void)videoHomeGuideDataFetcherDidClearDataAndRequests:(id)arg1 ;
-(void)videoHomeGuideDataFetcherDidMarkDataDirty:(id)arg1 withReason:(id)arg2 ;
-(id)initWithVideoHomeSession:(id)arg1 styleMapper:(id)arg2 navigationCoordinator:(id)arg3 intentHandler:(id)arg4 reactionSessionInfo:(id)arg5 analyticsModule:(id)arg6 renderIdiom:(unsigned long long)arg7 dataFetcher:(id)arg8 dataSource:(id)arg9 placeholderDataManager:(id)arg10 viewStateManager:(id)arg11 contextUserInfo:(id)arg12 ;
-(FBVideoHomeViewStateManager *)viewStateManager;
-(double)lastHeadLoadCompletionTimestamp;
-(void)hardReload:(unsigned long long)arg1 ;
-(unsigned long long)headDataOrigin;
-(void)scrollViewWillEndDragging:(FBScrollViewState)arg1 withVelocity:(CGPoint)arg2 fixedTargetContentOffset:(CGPoint)arg3 ;
-(void)setDelegate:(id<FBVideoHomeReactionComponentsDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(FBScrollViewState)arg1 ;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1 ;
-(id<FBVideoHomeReactionComponentsDataSourceDelegate>)delegate;
-(BOOL)isActive;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(BOOL)isEmpty;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setIsActive:(BOOL)arg1 ;
-(NSArray *)clientCapabilities;
-(void)removeAllItems;
-(FBComponentCollectionViewDataSource *)collectionViewDataSource;
@end
