/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBNearbyPlacesResultListLayoutDelegate.h>

@protocol FBNearbyPlacesResultListViewDelegate;
@class FBLoadingIndicatorView, UICollectionView, UIView, FBNearbyPlacesNoResultsView, NSString;

@interface FBNearbyPlacesResultListView : UIView <FBNearbyPlacesResultListLayoutDelegate> {

	FBLoadingIndicatorView* _loadingIndicator;
	FBLoadingIndicatorView* _footerLoadingIndicator;
	UICollectionView* _collectionView;
	UIView* _footerContainerView;
	UIView* _topDivider;
	FBNearbyPlacesNoResultsView* _noResultsView;
	UIView* _filterBar;
	long long _loadingState;
	UIView* _mapView;
	id<FBNearbyPlacesResultListViewDelegate> _delegate;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIView * footerContainerView;                                        //@synthesize footerContainerView=_footerContainerView - In the implementation block
@property (nonatomic,readonly) UIView * topDivider;                                                 //@synthesize topDivider=_topDivider - In the implementation block
@property (nonatomic,readonly) FBNearbyPlacesNoResultsView * noResultsView;                         //@synthesize noResultsView=_noResultsView - In the implementation block
@property (nonatomic,readonly) UIView * filterBar;                                                  //@synthesize filterBar=_filterBar - In the implementation block
@property (assign,nonatomic) long long loadingState;                                                //@synthesize loadingState=_loadingState - In the implementation block
@property (assign,nonatomic,__weak) UIView * mapView;                                               //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) id<FBNearbyPlacesResultListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBNearbyPlacesNoResultsView *)noResultsView;
-(void)resultListLayoutDidPullHeaderDown:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 filterBarView:(id)arg2 ;
-(UIView *)filterBar;
-(UIView *)footerContainerView;
-(void)setDelegate:(id<FBNearbyPlacesResultListViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBNearbyPlacesResultListViewDelegate>)delegate;
-(void)_handleTapGesture:(id)arg1 ;
-(UICollectionView *)collectionView;
-(long long)loadingState;
-(void)setLoadingState:(long long)arg1 ;
-(UIView *)topDivider;
-(void)setMapView:(UIView *)arg1 ;
-(UIView *)mapView;
@end

