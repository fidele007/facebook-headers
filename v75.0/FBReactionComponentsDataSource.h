/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>
#import <Facebook/FBReactionGraphQLConnectionDataFetcherDelegate.h>
#import <Facebook/FBReactionPaginationHandlerListener.h>
#import <Facebook/FBReactionCardAdapterDelegate.h>
#import <Facebook/FBReactionCardAdapterDelegateOptionalAdditions.h>
#import <Facebook/FBReactionUnitReloaderDelegate.h>
#import <Facebook/FBScenePathHolding.h>
#import <Facebook/FBReactionSurfaceSubscriptionDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>

@protocol FBNavigationCoordinator, FBIntentHandler, FBSectionedDataSourceWriting, FBReactionStyleMapper, FBReactionSurfaceSubscription, FBReactionComponentsDataSourceDelegate, FBReactionComponentsDataSourceAdapterDelegate;
@class FBUserSession, NSString, FBReactionPaginationHandler, FBReactionContext, FBReactionExperienceLogger, FBAnimationPerformanceLogger, FBReactionGraphQLConnectionDataFetcher, FBReactionComponentKitCardAdapterDelegate, FBReactionUnitReloader, NSMutableArray, NSMutableDictionary, NSDictionary, FBFeedNewStoriesPillStickyHeader, UIScrollView, FBPullToRefreshView, FBTransientViewStateManager, NSArray, FBReactionSessionInfo;

@interface FBReactionComponentsDataSource : NSObject <FBPullToRefreshViewDelegate, FBReactionGraphQLConnectionDataFetcherDelegate, FBReactionPaginationHandlerListener, FBReactionCardAdapterDelegate, FBReactionCardAdapterDelegateOptionalAdditions, FBReactionUnitReloaderDelegate, FBScenePathHolding, FBReactionSurfaceSubscriptionDelegate, FBComponentScrollEventListener> {

	FBUserSession* _session;
	NSString* _analyticsModule;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	FBReactionPaginationHandler* _paginationHandler;
	FBReactionContext* _context;
	BOOL _hasPendingPoll;
	FBReactionExperienceLogger* _logger;
	FBAnimationPerformanceLogger* _performanceTracker;
	FBReactionGraphQLConnectionDataFetcher* _reactionDataFetcher;
	id<FBSectionedDataSourceWriting> _writeInterface;
	unsigned long long _renderIdiom;
	FBReactionComponentKitCardAdapterDelegate* _cardAdapterDelegate;
	FBReactionUnitReloader* _unitReloader;
	NSMutableArray* _units;
	NSMutableDictionary* _pendingUnits;
	unsigned long long _feedLayoutIdiom;
	BOOL _isLoadingInitialContent;
	BOOL _isFirstLoad;
	id<FBReactionStyleMapper> _styleMapper;
	id<FBReactionSurfaceSubscription> _surfaceSubscription;
	NSDictionary* _userInfo;
	FBFeedNewStoriesPillStickyHeader* _stickyHeader;
	double _lastContentOffset;
	BOOL _isActive;
	BOOL _shouldPollHead;
	BOOL _canDisplayData;
	UIScrollView* _scrollView;
	FBPullToRefreshView* _ptrView;
	FBFeedNewStoriesPillStickyHeader* _unreadStoriesPill;
	FBTransientViewStateManager* _viewStateManager;
	id<FBReactionComponentsDataSourceDelegate> _delegate;
	NSArray* _clientCapabilities;
	FBReactionSessionInfo* _reactionSessionInfo;
	id<FBReactionComponentsDataSourceAdapterDelegate> _adapterDelegate;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                             //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) FBPullToRefreshView * ptrView;                                                         //@synthesize ptrView=_ptrView - In the implementation block
@property (nonatomic,retain) FBFeedNewStoriesPillStickyHeader * unreadStoriesPill;                                  //@synthesize unreadStoriesPill=_unreadStoriesPill - In the implementation block
@property (nonatomic,retain) FBTransientViewStateManager * viewStateManager;                                        //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionComponentsDataSourceDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clientCapabilities;                                                   //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) FBReactionSessionInfo * reactionSessionInfo;                                         //@synthesize reactionSessionInfo=_reactionSessionInfo - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                                                         //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) BOOL shouldPollHead;                                                                   //@synthesize shouldPollHead=_shouldPollHead - In the implementation block
@property (assign,nonatomic) BOOL canDisplayData;                                                                   //@synthesize canDisplayData=_canDisplayData - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionComponentsDataSourceAdapterDelegate> adapterDelegate;              //@synthesize adapterDelegate=_adapterDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 ;
-(void)_replaceUnit:(id)arg1 withUnit:(id)arg2 ;
-(void)_clearDataSource;
-(void)setPtrView:(FBPullToRefreshView *)arg1 ;
-(void)setAdapterDelegate:(id<FBReactionComponentsDataSourceAdapterDelegate>)arg1 ;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(void)paginationHandler:(id)arg1 didReplaceUnit:(id)arg2 newUnit:(id)arg3 error:(id)arg4 ;
-(void)userDidGiveFeedback:(id)arg1 withExtras:(id)arg2 forReactionUnit:(id)arg3 ;
-(void)hideCardForReactionUnit:(id)arg1 ;
-(void)cardHeightDidChangeForUnit:(id)arg1 shouldPreservePosition:(BOOL)arg2 ;
-(void)unitReloader:(id)arg1 didFinishReloadingUnit:(id)arg2 withNewUnit:(id)arg3 ;
-(void)unitReloader:(id)arg1 willAttemptToReloadUnit:(id)arg2 retryCount:(unsigned long long)arg3 ;
-(FBReactionSessionInfo *)reactionSessionInfo;
-(void)reactionDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3 ;
-(void)emptyResultSetForReactionDataFetcher:(id)arg1 forLoadType:(unsigned long long)arg2 ;
-(void)reactionDataFetcher:(id)arg1 loadType:(unsigned long long)arg2 experiencedError:(id)arg3 ;
-(id)graphQLConnectionControllerUserInputForReactionDataFetcher:(id)arg1 ;
-(FBPullToRefreshView *)ptrView;
-(FBTransientViewStateManager *)viewStateManager;
-(void)setViewStateManager:(FBTransientViewStateManager *)arg1 ;
-(void)setCanDisplayData:(BOOL)arg1 ;
-(long long)headLoadIndex;
-(void)setShouldPollHead:(BOOL)arg1 ;
-(void)setUnreadStoriesPill:(FBFeedNewStoriesPillStickyHeader *)arg1 ;
-(FBFeedNewStoriesPillStickyHeader *)unreadStoriesPill;
-(void)hardReload;
-(void)_pollHead;
-(id<FBReactionComponentsDataSourceAdapterDelegate>)adapterDelegate;
-(void)_loadAdaptersForUnits:(id)arg1 atLocation:(unsigned long long)arg2 ;
-(void)_handleNoContentLoaded;
-(void)_displayUnitsIfAllowed;
-(void)_removeUnit:(id)arg1 ;
-(void)_initializeReactionDataFetcher;
-(void)unitReloader:(id)arg1 didFailReloadingUnit:(id)arg2 withError:(id)arg3 retryCount:(unsigned long long)arg4 ;
-(void)reactionSurfaceSubscription:(id)arg1 didLoadUnit:(id)arg2 ;
-(BOOL)shouldPollHead;
-(BOOL)canDisplayData;
-(id)initWithSession:(id)arg1 writeInterface:(id)arg2 styleMapper:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 reactionSessionInfo:(id)arg6 analyticsModule:(id)arg7 renderIdiom:(unsigned long long)arg8 layoutIdiom:(unsigned long long)arg9 userInfo:(id)arg10 ;
-(void)setDelegate:(id<FBReactionComponentsDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1 ;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1 ;
-(id<FBReactionComponentsDataSourceDelegate>)delegate;
-(BOOL)isActive;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setIsActive:(BOOL)arg1 ;
-(NSArray *)clientCapabilities;
@end
