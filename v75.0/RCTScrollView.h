/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/RCTScrollableProtocol.h>
#import <Facebook/RCTAutoInsetsProtocol.h>

@class RCTEventDispatcher, RCTCustomScrollView, UIView, NSMutableArray, NSString, NSHashTable, UIScrollView, NSIndexSet;

@interface RCTScrollView : RCTView <UIScrollViewDelegate, RCTScrollableProtocol, RCTAutoInsetsProtocol> {

	RCTEventDispatcher* _eventDispatcher;
	RCTCustomScrollView* _scrollView;
	UIView* _contentView;
	double _lastScrollDispatchTime;
	NSMutableArray* _cachedChildFrames;
	BOOL _allowNextScrollNoMatterWhat;
	CGRect _lastClippedToRect;
	unsigned short _coalescingKey;
	NSString* _lastEmittedEventName;
	NSHashTable* _scrollListeners;
	double _lastNonZeroTranslationAlongAxis;
	BOOL _automaticallyAdjustContentInsets;
	int _snapToInterval;
	double _scrollEventThrottle;
	NSString* _snapToAlignment;
	/*^block*/id _onScrollBeginDrag;
	/*^block*/id _onScroll;
	/*^block*/id _onScrollEndDrag;
	/*^block*/id _onMomentumScrollBegin;
	/*^block*/id _onMomentumScrollEnd;
	/*^block*/id _onScrollAnimationEnd;
	CGSize _contentSize;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) UIView * contentView;                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                 //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                        //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustContentInsets;              //@synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets - In the implementation block
@property (assign,nonatomic) double scrollEventThrottle;                         //@synthesize scrollEventThrottle=_scrollEventThrottle - In the implementation block
@property (assign,nonatomic) BOOL centerContent; 
@property (assign,nonatomic) int snapToInterval;                                 //@synthesize snapToInterval=_snapToInterval - In the implementation block
@property (nonatomic,copy) NSString * snapToAlignment;                           //@synthesize snapToAlignment=_snapToAlignment - In the implementation block
@property (nonatomic,copy) NSIndexSet * stickyHeaderIndices; 
@property (nonatomic,copy) id onScrollBeginDrag;                                 //@synthesize onScrollBeginDrag=_onScrollBeginDrag - In the implementation block
@property (nonatomic,copy) id onScroll;                                          //@synthesize onScroll=_onScroll - In the implementation block
@property (nonatomic,copy) id onScrollEndDrag;                                   //@synthesize onScrollEndDrag=_onScrollEndDrag - In the implementation block
@property (nonatomic,copy) id onMomentumScrollBegin;                             //@synthesize onMomentumScrollBegin=_onMomentumScrollBegin - In the implementation block
@property (nonatomic,copy) id onMomentumScrollEnd;                               //@synthesize onMomentumScrollEnd=_onMomentumScrollEnd - In the implementation block
@property (nonatomic,copy) id onScrollAnimationEnd;                              //@synthesize onScrollAnimationEnd=_onScrollAnimationEnd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCenterContent:(BOOL)arg1 ;
-(BOOL)centerContent;
-(void)reactBridgeDidFinishTransaction;
-(void)insertReactSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(void)didUpdateReactSubviews;
-(id)initWithEventDispatcher:(id)arg1 ;
-(BOOL)automaticallyAdjustContentInsets;
-(void)setAutomaticallyAdjustContentInsets:(BOOL)arg1 ;
-(id)onScroll;
-(void)setOnScroll:(id)arg1 ;
-(void)didSetProps:(id)arg1 ;
-(NSIndexSet *)stickyHeaderIndices;
-(void)setStickyHeaderIndices:(NSIndexSet *)arg1 ;
-(void)updateClippedSubviews;
-(id)onMomentumScrollBegin;
-(void)sendScrollEventWithName:(id)arg1 scrollView:(id)arg2 userData:(id)arg3 ;
-(id)onScrollBeginDrag;
-(int)snapToInterval;
-(NSString *)snapToAlignment;
-(id)onScrollEndDrag;
-(id)onMomentumScrollEnd;
-(CGSize)_calculateViewportSize;
-(CGPoint)calculateOffsetForContentSize:(CGSize)arg1 ;
-(void)refreshContentInset;
-(double)scrollEventThrottle;
-(void)setScrollEventThrottle:(double)arg1 ;
-(void)setSnapToInterval:(int)arg1 ;
-(void)setSnapToAlignment:(NSString *)arg1 ;
-(void)setOnScrollBeginDrag:(id)arg1 ;
-(void)setOnScrollEndDrag:(id)arg1 ;
-(void)setOnMomentumScrollBegin:(id)arg1 ;
-(void)setOnMomentumScrollEnd:(id)arg1 ;
-(id)onScrollAnimationEnd;
-(void)setOnScrollAnimationEnd:(id)arg1 ;
-(id)calculateChildFramesData;
-(void)scrollToOffset:(CGPoint)arg1 ;
-(void)scrollToOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)addScrollListener:(id)arg1 ;
-(void)removeScrollListener:(id)arg1 ;
-(void)setRemoveClippedSubviews:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)dealloc;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg1 ;
-(CGSize)contentSize;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)isScrollEnabled;
-(BOOL)isPagingEnabled;
-(UIEdgeInsets)contentInset;
-(UIScrollView *)scrollView;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(UIView *)contentView;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)isDirectionalLockEnabled;
-(double)zoomScale;
-(double)minimumZoomScale;
-(BOOL)alwaysBounceHorizontal;
-(BOOL)alwaysBounceVertical;
-(long long)keyboardDismissMode;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(void)setBounces:(BOOL)arg1 ;
-(BOOL)bounces;
-(void)setAlwaysBounceVertical:(BOOL)arg1 ;
-(void)setAlwaysBounceHorizontal:(BOOL)arg1 ;
-(BOOL)showsHorizontalScrollIndicator;
-(BOOL)showsVerticalScrollIndicator;
-(UIEdgeInsets)scrollIndicatorInsets;
-(void)setIndicatorStyle:(long long)arg1 ;
-(double)decelerationRate;
-(void)setDecelerationRate:(double)arg1 ;
-(long long)indicatorStyle;
-(BOOL)bouncesZoom;
-(void)setBouncesZoom:(BOOL)arg1 ;
-(BOOL)canCancelContentTouches;
-(void)setCanCancelContentTouches:(BOOL)arg1 ;
-(BOOL)scrollsToTop;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)maximumZoomScale;
-(void)setZoomScale:(double)arg1 ;
-(void)zoomToRect:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setKeyboardDismissMode:(long long)arg1 ;
@end

