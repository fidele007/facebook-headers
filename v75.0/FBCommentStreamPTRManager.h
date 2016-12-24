/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>

@protocol FBCommentStreamPTRManagerDelegate;
@class UIScrollView, FBPullToRefreshView, NSString;

@interface FBCommentStreamPTRManager : NSObject <FBPullToRefreshViewDelegate, FBComponentScrollEventListener> {

	UIScrollView* _scrollView;
	FBPullToRefreshView* _pullToRefreshView;
	id<FBCommentStreamPTRManagerDelegate> _delegate;

}

@property (nonatomic,readonly) FBPullToRefreshView * pullToRefreshView; 
@property (assign,nonatomic,__weak) id<FBCommentStreamPTRManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBPullToRefreshView *)pullToRefreshView;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(void)layoutPullToRefreshView;
-(void)setDelegate:(id<FBCommentStreamPTRManagerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(FBScrollViewState)arg1 ;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1 ;
-(id<FBCommentStreamPTRManagerDelegate>)delegate;
-(void)stopAnimating;
-(void)addToContainerView:(id)arg1 ;
@end

