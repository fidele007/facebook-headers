/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBFeedPageViewDelegate;
@class NSMutableDictionary, NSMutableArray, FBHScrollLoadingView, NSString, NSArray;

@interface FBFeedPageView : UIScrollView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	NSMutableDictionary* _reusableQueueByIdentifier;
	NSMutableArray* _pageViews;
	NSRange _currentVisibleRange;
	unsigned long long _pageViewsCount;
	unsigned long long _lastLoadingViewIndex;
	FBHScrollLoadingView* _loadingView;
	double _pageSpacing;
	double _pageHeight;
	double _pageWidth;
	double _additionalLeftHorizontalPadding;
	double _additionalRightHorizontalPadding;
	id<FBFeedPageViewDelegate> _pageViewDelegate;
	unsigned long long _currentPageIndex;
	unsigned long long _previousPageIndex;
	NSString* _perfLoadingCardLoggingEventUnitTypeName;
	NSString* _perfLoadingCardLoggingEventIdentifier;
	FBFeedPageViewHorizontalPadding _horizontalPadding;

}

@property (assign,nonatomic) FBFeedPageViewHorizontalPadding horizontalPadding;               //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) double pageSpacing;                                              //@synthesize pageSpacing=_pageSpacing - In the implementation block
@property (assign,nonatomic) double pageHeight;                                               //@synthesize pageHeight=_pageHeight - In the implementation block
@property (assign,nonatomic) double pageWidth;                                                //@synthesize pageWidth=_pageWidth - In the implementation block
@property (assign,nonatomic) double additionalLeftHorizontalPadding;                          //@synthesize additionalLeftHorizontalPadding=_additionalLeftHorizontalPadding - In the implementation block
@property (assign,nonatomic) double additionalRightHorizontalPadding;                         //@synthesize additionalRightHorizontalPadding=_additionalRightHorizontalPadding - In the implementation block
@property (nonatomic,readonly) NSRange visiblePagesRange; 
@property (nonatomic,copy,readonly) NSArray * visiblePages; 
@property (assign,nonatomic,__weak) id<FBFeedPageViewDelegate> pageViewDelegate;              //@synthesize pageViewDelegate=_pageViewDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long currentPageIndex;                             //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long previousPageIndex;                            //@synthesize previousPageIndex=_previousPageIndex - In the implementation block
@property (nonatomic,readonly) long long scrollContextBitset; 
@property (nonatomic,copy) NSString * perfLoadingCardLoggingEventUnitTypeName;                //@synthesize perfLoadingCardLoggingEventUnitTypeName=_perfLoadingCardLoggingEventUnitTypeName - In the implementation block
@property (nonatomic,copy) NSString * perfLoadingCardLoggingEventIdentifier;                  //@synthesize perfLoadingCardLoggingEventIdentifier=_perfLoadingCardLoggingEventIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)loadingViewStyle;
-(id)_pageViewAtIndex:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)mutablePageViews;
-(id)preparePageViewAtIndex:(unsigned long long)arg1 ;
-(id)accessibilityIdentierForPageAtIndex:(unsigned long long)arg1 ;
-(void)_addViewToReusableQueue:(id)arg1 ;
-(unsigned long long)pageViewsCount;
-(void)_adjustIfLoadingViewWasCurrentView;
-(NSString *)perfLoadingCardLoggingEventUnitTypeName;
-(NSString *)perfLoadingCardLoggingEventIdentifier;
-(void)reloadPageViews;
-(double)leftHorizontalPadding;
-(void)_layoutPageViews;
-(double)_getSnapOffsetForView;
-(double)_getItemSpacingForView;
-(id<FBFeedPageViewDelegate>)pageViewDelegate;
-(BOOL)shouldUseLoadingView;
-(unsigned long long)_getAbsoluteIndexWithLoadingView;
-(void)setPreviousPageIndex:(unsigned long long)arg1 ;
-(id)currentItemDidChangeNotification;
-(void)setLoadingViewHidden:(BOOL)arg1 ;
-(double)rightHorizontalPadding;
-(NSRange)visiblePagesRange;
-(id)_pageViewAtIndex:(unsigned long long)arg1 ;
-(double)autoScrollWidth;
-(void)autoScrollToOffset:(double)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 initialPageLayout:(FBFeedPageViewPageLayout)arg2 horizontalPadding:(FBFeedPageViewHorizontalPadding)arg3 ;
-(id)pageViewAtIndex:(unsigned long long)arg1 ;
-(id)dequeueReusableViewWithIdentifier:(id)arg1 ;
-(long long)scrollContextBitset;
-(void)setAdditionalLeftHorizontalPadding:(double)arg1 ;
-(void)setAdditionalRightHorizontalPadding:(double)arg1 ;
-(NSArray *)visiblePages;
-(void)getTargetContentOffset:(inout CGPoint*)arg1 forVelocity:(CGPoint)arg2 ;
-(double)percentHiddenToScrollFeedWhenPaged;
-(void)autoScrollToPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)autoScrollToNextPageAnimated:(BOOL)arg1 ;
-(void)autoScrollToPrevPageAnimated:(BOOL)arg1 ;
-(double)additionalLeftHorizontalPadding;
-(double)additionalRightHorizontalPadding;
-(void)setPageViewDelegate:(id<FBFeedPageViewDelegate>)arg1 ;
-(void)setPerfLoadingCardLoggingEventUnitTypeName:(NSString *)arg1 ;
-(void)setPerfLoadingCardLoggingEventIdentifier:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)accessibilityIdentifier;
-(void)_updateContentSize;
-(void)prepareForReuse;
-(void)setHorizontalPadding:(FBFeedPageViewHorizontalPadding)arg1 ;
-(FBFeedPageViewHorizontalPadding)horizontalPadding;
-(void)setPageSpacing:(double)arg1 ;
-(double)pageSpacing;
-(CGRect)rectForPageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)previousPageIndex;
-(double)pageWidth;
-(double)pageHeight;
-(void)setPageHeight:(double)arg1 ;
-(void)setPageWidth:(double)arg1 ;
@end

