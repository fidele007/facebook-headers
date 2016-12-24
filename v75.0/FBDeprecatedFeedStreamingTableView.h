/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBPullToRefreshView, FBPullToRefreshContentView, FBListFooterView, FBFeedHeaderView, FBFeedBannerPresenter, FBUpdateAnnouncingTableView, FBFeedNewStoriesPill;

@interface FBDeprecatedFeedStreamingTableView : UIView {

	FBPullToRefreshView* _ptrView;
	FBPullToRefreshContentView* _tailLoadingIndicatorView;
	FBListFooterView* _footerView;
	FBFeedHeaderView* _headerView;
	long long _numStoriesUnread;
	FBFeedBannerPresenter* _bannerPresenter;
	FBUpdateAnnouncingTableView* _tableView;
	FBFeedNewStoriesPill* _storiesPill;
	double _topLayoutGuideLength;

}

@property (nonatomic,readonly) FBUpdateAnnouncingTableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) FBFeedNewStoriesPill * storiesPill;                   //@synthesize storiesPill=_storiesPill - In the implementation block
@property (nonatomic,readonly) FBPullToRefreshView * ptrView;                        //@synthesize ptrView=_ptrView - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                            //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
+(id)backgroundColor;
-(FBPullToRefreshView *)ptrView;
-(id)initWithFrame:(CGRect)arg1 newStoriesPillDelegate:(id)arg2 pullToRefreshDelegate:(id)arg3 ;
-(void)setInitialSpinnerLoading:(BOOL)arg1 ;
-(void)setTailSpinnerLoading:(BOOL)arg1 ;
-(void)displayFooter;
-(void)displayEndOfFeed;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(FBFeedNewStoriesPill *)storiesPill;
-(double)scrollToBottomBuffer;
-(id)_accessibilityFocusedCell;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(FBUpdateAnnouncingTableView *)tableView;
-(BOOL)accessibilityPerformMagicTap;
@end
