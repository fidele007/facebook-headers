/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBFullScreenTransitionBoundsProvider.h>
#import <Facebook/FBFeedNetworkErrorViewDelegate.h>
#import <Facebook/FBCollectionViewUpdateListener.h>
#import <Facebook/FBFeedScrollingContainer.h>

@protocol FBTimelineFeedViewDelegate;
@class UIView, FBSideFeedLayoutManager, FBFeedHeaderViewPositionManager, FBDeprecatedFeedTableView, FBFeedCollectionView, FBFeedNetworkErrorView, FBFeedShimmeringStoriesScrollView, NSIndexPath, FBFeedHeaderView, FBStickyHeader, UIActivityIndicatorView, FBPullToRefreshView, FBListFooterView, UITapGestureRecognizer, FBCollectionViewUpdateListenerAnnouncer, FBTableViewUpdateListenerAnnouncer, NSString;

@interface FBTimelineFeedView : UIView <UIGestureRecognizerDelegate, FBFullScreenTransitionBoundsProvider, FBFeedNetworkErrorViewDelegate, FBCollectionViewUpdateListener, FBFeedScrollingContainer> {

	unsigned long long _state;
	UIView* _spinnerContainer;
	UIView* _loadingHeaderView;
	FBSideFeedLayoutManager* _sideFeedLayoutManager;
	FBFeedHeaderViewPositionManager* _headerViewPositionManager;
	FBDeprecatedFeedTableView* _tableView;
	FBFeedCollectionView* _collectionView;
	FBFeedNetworkErrorView* _networkErrorView;
	BOOL _useCollectionView;
	BOOL _networkErrorShown;
	BOOL _firstLayoutPassOccured;
	FBFeedShimmeringStoriesScrollView* _shimmeringStoriesView;
	double _shimmeringStoriesBeginDisplayTimestamp;
	double _sideFeedViewPositionRestorationPreviousOriginY;
	BOOL _showInlineComposerFeedLoading;
	NSIndexPath* _cellIndexPathToHighlight;
	BOOL _adjustingHeaderContainerViewEnabled;
	BOOL _hasPullToRefreshView;
	BOOL _enableShimmeringStories;
	id<FBTimelineFeedViewDelegate> _delegate;
	FBFeedHeaderView* _headerContainerView;
	UIView* _visualOriginForHeaderContainerView;
	FBStickyHeader* _stickyHeader;
	UIActivityIndicatorView* _spinner;
	FBPullToRefreshView* _pullToRefreshView;
	FBListFooterView* _tableViewFooterView;
	UIView* _fullscreenErrorView;
	UIView* _noContentView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	double _maxScrollOffset;

}

@property (nonatomic,readonly) double headerContainerVerticalOffset; 
@property (assign,nonatomic) BOOL canAdjustHeaderContainerView; 
@property (assign,nonatomic,__weak) id<FBTimelineFeedViewDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * scrollableHeaderView; 
@property (nonatomic,readonly) FBFeedHeaderView * headerContainerView;                                                         //@synthesize headerContainerView=_headerContainerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * visualOriginForHeaderContainerView;                                               //@synthesize visualOriginForHeaderContainerView=_visualOriginForHeaderContainerView - In the implementation block
@property (nonatomic,retain) FBStickyHeader * stickyHeader;                                                                    //@synthesize stickyHeader=_stickyHeader - In the implementation block
@property (assign,nonatomic) BOOL adjustingHeaderContainerViewEnabled;                                                         //@synthesize adjustingHeaderContainerViewEnabled=_adjustingHeaderContainerViewEnabled - In the implementation block
@property (nonatomic,readonly) BOOL headerContainerViewHidden; 
@property (assign,nonatomic) BOOL showsHeaderContainerViewShadowWhenNotVisible; 
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                                                              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) BOOL hasPullToRefreshView;                                                                      //@synthesize hasPullToRefreshView=_hasPullToRefreshView - In the implementation block
@property (nonatomic,readonly) FBPullToRefreshView * pullToRefreshView;                                                        //@synthesize pullToRefreshView=_pullToRefreshView - In the implementation block
@property (getter=isPullToRefreshViewPartiallyVisible,nonatomic,readonly) BOOL pullToRefreshViewPartiallyVisible; 
@property (nonatomic,readonly) UIScrollView*<FBCollectionViewTransitionProtocol> contentScrollView; 
@property (nonatomic,readonly) FBListFooterView * tableViewFooterView;                                                         //@synthesize tableViewFooterView=_tableViewFooterView - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIView * fullscreenErrorView;                                                                     //@synthesize fullscreenErrorView=_fullscreenErrorView - In the implementation block
@property (nonatomic,retain) UIView * noContentView;                                                                           //@synthesize noContentView=_noContentView - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength; 
@property (assign,nonatomic) double bottomLayoutGuideLength; 
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                                                  //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL enableShimmeringStories;                                                                     //@synthesize enableShimmeringStories=_enableShimmeringStories - In the implementation block
@property (assign,nonatomic) BOOL useInlinePublisherBar; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (nonatomic,readonly) FBCollectionViewUpdateListenerAnnouncer * collectionViewUpdateListenerAnnouncer; 
@property (nonatomic,readonly) FBTableViewUpdateListenerAnnouncer * tableViewUpdateListenerAnnouncer; 
@property (nonatomic,readonly) double maxScrollOffset;                                                                         //@synthesize maxScrollOffset=_maxScrollOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShimmering:(BOOL)arg1 ;
-(FBPullToRefreshView *)pullToRefreshView;
-(BOOL)hasPullToRefreshView;
-(CGRect)fullScreenTransitionBoundsForView:(id)arg1 ;
-(UIView *)scrollableHeaderView;
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(void)_accessibilityVoiceOverStatusChanged:(id)arg1 ;
-(void)setCanAdjustHeaderContainerView:(BOOL)arg1 ;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(double)bottomLayoutGuideLength;
-(void)setShowsHeaderContainerViewShadowWhenNotVisible:(BOOL)arg1 ;
-(BOOL)showsHeaderContainerViewShadowWhenNotVisible;
-(void)_setView:(id)arg1 fromView:(id)arg2 animated:(BOOL)arg3 ;
-(id)_viewForLoadingState;
-(UIView *)fullscreenErrorView;
-(id)_viewForState:(unsigned long long)arg1 ;
-(BOOL)useInlinePublisherBar;
-(void)setUseInlinePublisherBar:(BOOL)arg1 ;
-(void)didPrependNewStories;
-(void)setHeaderContainerViewHidden:(BOOL)arg1 animated:(BOOL)arg2 programmaticallyScrolled:(BOOL)arg3 ;
-(BOOL)isAtTop;
-(void)_informDelegateAboutScrollingToTop;
-(void)scrollTo:(double)arg1 animated:(BOOL)arg2 ;
-(void)_scrollToNextVisibleCellInSection:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_scrollToPreviousVisibleCellInSection:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)_firstVisibleCellInSection:(unsigned long long)arg1 ;
-(void)_scrollToCellFromIndexPath:(id)arg1 toIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(double)headerContainerVerticalOffset;
-(BOOL)headerContainerViewHidden;
-(CGRect)_layoutBounds;
-(void)_updateVisualHeaderOrigin;
-(void)setHeaderContainerViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_layoutShimmeringStoriesInBounds:(CGRect)arg1 ;
-(void)_layoutSpinnerInBounds:(CGRect)arg1 ;
-(UIView *)visualOriginForHeaderContainerView;
-(double)headerContainerVisualHeight;
-(void)showNetworkErrorMessage:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)feedNetworkErrorViewDidDismissNetworkError:(BOOL)arg1 ;
-(void)collectionViewDidEndUpdates:(id)arg1 ;
-(void)scrollWithVerticalDelta:(double)arg1 animated:(BOOL)arg2 ;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)isScrollContainerShowingRect:(CGRect)arg1 inView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 headerContentView:(id)arg2 sideFeedLayoutManager:(id)arg3 analytics:(id)arg4 userPreferences:(id)arg5 useCollectionView:(BOOL)arg6 shouldScrollHeaderWithFeed:(BOOL)arg7 hasPullToRefreshView:(BOOL)arg8 pullToRefreshViewStationaryPTRMargin:(double)arg9 showInlineComposerFeedLoading:(BOOL)arg10 backgroundColor:(id)arg11 ;
-(void)setVisualOriginForHeaderContainerView:(UIView *)arg1 ;
-(void)setAdjustingHeaderContainerViewEnabled:(BOOL)arg1 ;
-(BOOL)canAdjustHeaderContainerView;
-(double)distanceFromTop;
-(BOOL)isFarAwayFromTop;
-(BOOL)isAtVerticalScrollLocation:(double)arg1 ;
-(void)setFullscreenErrorView:(UIView *)arg1 ;
-(void)setTableViewDataSourceAndReloadData:(id)arg1 ;
-(void)setCollectionViewDataSourceAndReloadData:(id)arg1 ;
-(FBCollectionViewUpdateListenerAnnouncer *)collectionViewUpdateListenerAnnouncer;
-(FBTableViewUpdateListenerAnnouncer *)tableViewUpdateListenerAnnouncer;
-(void)layoutScrollViewInCaseOfResize;
-(void)deselectAnythingSelected;
-(id)tableViewVisibleCells;
-(void)resetDataSourceAndDelegateOfFeedScrollView;
-(void)setStickyHeader:(FBStickyHeader *)arg1 ;
-(void)setLoadingHeaderViewAndRelayout:(id)arg1 ;
-(BOOL)isPullToRefreshViewPartiallyVisible;
-(void)scrollToTopStory:(BOOL)arg1 ;
-(void)scrollOneCellInDirection:(unsigned long long)arg1 inSection:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(double)headerVisibleHeight;
-(double)headerContainerViewHeight;
-(double)headerContainerVisibleHeight;
-(BOOL)_isHeaderContainerViewPartiallyVisible;
-(void)showSecondaryNetworkErrorMessage:(BOOL)arg1 ;
-(void)saveSideFeedViewPositionForRestoration;
-(void)restoreSideFeedViewPositionWithContentOffsetYDelta:(double)arg1 ;
-(FBStickyHeader *)stickyHeader;
-(BOOL)adjustingHeaderContainerViewEnabled;
-(FBListFooterView *)tableViewFooterView;
-(BOOL)enableShimmeringStories;
-(void)setEnableShimmeringStories:(BOOL)arg1 ;
-(double)maxScrollOffset;
-(void)setDelegate:(id<FBTimelineFeedViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id<FBTimelineFeedViewDelegate>)delegate;
-(unsigned long long)state;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setState:(unsigned long long)arg1 ;
-(UIScrollView*<FBCollectionViewTransitionProtocol>)contentScrollView;
-(void)setHeaderView:(id)arg1 ;
-(void)setNoContentView:(UIView *)arg1 ;
-(UIView *)noContentView;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)isScrolling;
-(UIActivityIndicatorView *)spinner;
-(FBFeedHeaderView *)headerContainerView;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
@end

