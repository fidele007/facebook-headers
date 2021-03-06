/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBNativeAppFeedCellDelegate;
@class NSMutableArray, FBNativeAppFeedHScrollCollectionView, UIPageControl;

@interface FBNativeAppFeedHScrollCell : UITableViewCell {

	NSMutableArray* _feedUnits;
	unsigned long long _renderStyle;
	id<FBNativeAppFeedCellDelegate> _cellDelegate;
	FBNativeAppFeedHScrollCollectionView* _collectionView;
	UIPageControl* _pageControl;

}

@property (nonatomic,retain) FBNativeAppFeedHScrollCollectionView * collectionView;                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                            //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) NSMutableArray * feedUnits;                                           //@synthesize feedUnits=_feedUnits - In the implementation block
@property (nonatomic,readonly) unsigned long long renderStyle;                                       //@synthesize renderStyle=_renderStyle - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeAppFeedCellDelegate> cellDelegate;                    //@synthesize cellDelegate=_cellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeAppFeedLoggingDelegate> loggingDelegate; 
+(double)cellHeightWithFeedUnits:(id)arg1 renderStyle:(unsigned long long)arg2 width:(float)arg3 ;
-(id<FBNativeAppFeedCellDelegate>)cellDelegate;
-(void)setCellDelegate:(id<FBNativeAppFeedCellDelegate>)arg1 ;
-(unsigned long long)renderStyle;
-(void)setFeedUnits:(id)arg1 withRenderStyle:(unsigned long long)arg2 scenePathContext:(id)arg3 session:(id)arg4 analyticsModule:(id)arg5 containingScrollView:(id)arg6 indexPath:(id)arg7 ;
-(NSMutableArray *)feedUnits;
-(id<FBNativeAppFeedLoggingDelegate>)loggingDelegate;
-(void)setLoggingDelegate:(id<FBNativeAppFeedLoggingDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(FBNativeAppFeedHScrollCollectionView *)collectionView;
-(void)setCollectionView:(FBNativeAppFeedHScrollCollectionView *)arg1 ;
-(UIPageControl *)pageControl;
-(void)setPageControl:(UIPageControl *)arg1 ;
@end

